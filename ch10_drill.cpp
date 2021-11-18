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
    p.x = xx;
    p.y = yy;
    return is;
}

ostream &operator<<(ostream &os, Point &p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

void read(vector<Point> &points, string &name)
{
    ifstream ist{name};
    for (Point p; ist >> p;)
        points.push_back(p);
}

int main()
try
{
    cout << "Please enter seven sets of x and y points:\n";
    vector<Point> original_points;
    Point p;

    while (original_points.size() < 3)
    {
        cin >> p;
        original_points.push_back(p);
    }
    cout << endl;

    cout << "original_points\n";
    for (Point p : original_points)
        cout
            << p;
    cout << endl;

    string file_name = "my_data.txt";
    ofstream ost{file_name};
    if (!ost)
        error("Can't open file ", file_name);
    for (Point p : original_points)
        ost << p;
    ost.close();

    vector<Point> processed_points;
    read(processed_points, file_name);

    cout << "processed_points:\n";
    for (Point p : processed_points)
        cout
            << p;
    cout << endl;

    if (processed_points.size() != original_points.size())
        error("Something's wrong!");

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