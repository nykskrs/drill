#include "../../../std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int ai[], int n)
{
    int la[10];

    for (int i = 0; i < n; ++i)
        la[i] = ga[i];

    int *p = new int[n];

    for (int i = 0; i < n; ++i)
        p[i] = ai[i];

    for (int i = 0; i < n; ++i)
        cout << p[i] << ' ';
    cout << endl;

    delete[] p;
}

int fac(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; ++i)
        factorial *= i;
    return factorial;
}

int main()
{
    f(ga, 10);

    int aa[10];
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i);

    f(aa, 10);
    return 0;
}