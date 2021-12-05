#include "../../../std_lib_facilities.h"

vector<int> gv{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
    vector<int> lv(10);

    lv = gv;

    for (auto &a : lv)
        cout << a << ' ';
    cout << endl;

    vector<int> lv2 = v;
    for (auto &a : lv2)
        cout << a << ' ';
    cout << endl;
}

int fac(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}

int main()
{
    f(gv);

    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
        vv[i] = fac(i);

    f(vv);

    return 0;
}