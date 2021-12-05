#include "../../../std_lib_facilities.h"

// 4
void print_array10(ostream &os, int *a)
{
    for (int i = 0; i < 10; ++i)
        os << a[i] << endl;
}

// 7
void print_array(ostream &os, int *a, int n)
{
    for (int i = 0; i < n; ++i)
        os << a[i] << endl;
}

// 10
void print_vector(ostream &os, vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
        os << v[i] << endl;
}

int main()
{
    // 1.
    int *ip = new int[10];

    // 2
    cout
        << "--------------------------------------------\n";
    for (int i = 0; i < 10; ++i)
        cout << ip[i] << endl;

    // 3
    delete[] ip;

    // 5
    cout << "--------------------------------------------\n";
    int *ip2 = new int[10];
    for (int i = 0; i < 10; ++i)
        ip2[i] = 100 + i;
    print_array10(cout, ip2);
    delete[] ip2;

    // 6
    cout << "--------------------------------------------\n";
    int *ip3 = new int[11];
    for (int i = 0; i < 11; ++i)
        ip3[i] = 100 + i;
    print_array10(cout, ip3);
    delete[] ip3;

    // 8
    cout << "--------------------------------------------\n";
    int *ip4 = new int[20];
    for (int i = 0; i < 20; i++)
        ip4[i] = 100 + i;
    print_array(cout, ip4, 20);
    delete[] ip4;

    // 10
    cout << "--------------------------------------------\n";
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(100 + i);
    print_vector(cout, v);

    cout << "--------------------------------------------\n";
    vector<int> v1;
    for (int i = 0; i < 11; i++)
        v1.push_back(100 + i);
    print_vector(cout, v1);

    cout << "--------------------------------------------\n";
    vector<int> v2;
    for (int i = 0; i < 20; i++)
        v2.push_back(100 + i);
    print_vector(cout, v2);

    // second part
    cout << "Part 2------------------------------------\n";

    // 1
    int i1 = 7;
    int *p1 = &i1;

    // 2
    cout << "pointer " << p1 << "points to " << *p1 << endl;

    // 3
    int *p2 = new int[7];
    for (int i = 0; i < 7; ++i)
        p2[i] = pow(2, i);

    // 4
    cout << "p2 == " << p2;
    print_array(cout, p2, 7);

    // 5
    int *p3 = p2;

    // 6
    p1 = p2;

    // 7
    p3 = p2;

    // 8
    cout << "p1 value: " << p1 << "\tpoints to: " << *p1 << endl;
    cout << "p2 value: " << p2 << "\tpoints to: " << *p2 << endl;

    // 9
    delete[] p2;

    // 10
    p1 = new int[10];
    for (int i = 0; i < 10; ++i)
        p1[i] = pow(2, i);

    // 11
    p2 = new int[10];

    // 12
    for (int i = 0; i < 10; ++i)
        p2[i] = p1[i];
    print_array(cout, p2, 10);

    // 13
    vector<int> v3;
    for (int i = 0; i < 10; ++i)
        v3.push_back(pow(2, i));

    vector<int> v4;
    for (int i = 0; i < v3.size(); ++i)
        v4.push_back(v3[i]);
    print_vector(cout, v4);

    return 0;
}