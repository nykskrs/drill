#include "../../../std_lib_facilities.h"

struct Point
{
    int x, y;
};

istream &operator>>(istream &is, Point &p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(')
    {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2;
    char ch3;
    int xx;
    int yy;
    is >> xx >> ch2 >> yy >> ch3;
    if (!is || ch3 != ')')
    {
        if (is.eof())
            return is;
        error("bad points");
    }
    p.x = xx;
    p.y = yy;
    return is;
}

ostream &operator<<(ostream &os, Point &p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

void file(vector<Point> &points, string &name)
{
    ifstream ist{name};
    ist.exceptions(ist.exceptions() | ios_base::badbit);
    if (!ist)
        error("Can't open input fule ", name);
    for (Point p; ist >> p;)
        points.push_back(p);
}

int main()
try
{
    cout << "Please enter seven sets of x and y points:\n";
    vector<Point> original_points;
    Point p;

    while (original_points.size() < 7)
    {
        cin >> p;
        original_points.push_back(p);
    }

    cout << endl;

    for (Point p : original_points)
        cout << p << endl;
    cout << endl;

    string fname = "my_data.txt";
    ofstream ost{fname};
    if (!ost)
        error("Can't open file ", fname);
    for (auto &p : original_points)
        ost << p;
    ost.close();

    vector<Point> new_points;
    file(new_points, fname);

    for (auto &p : new_points)
        cout << p << endl;
    cout << endl;

    if (original_points.size() != new_points.size())
        error("Error\n");

    return 0;
}
catch (exception &e)
{
    cerr << "Error: " << e.what() << endl;
    return 1;
}
catch (...)
{
    cerr << "Some error.\n";
    return 2;
}