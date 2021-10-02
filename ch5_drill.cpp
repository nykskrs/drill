#include "../../../std_lib_facilities.h"

int main()
try
{
    //1. Cout << "Success!\n";
    cout << "Success!1\n";
    //2. cout << "Success!\n;
    cout << "Success!2\n";
    //3. cout <<" Success"<< !\n"
    cout << "Success"
         << "!3\n";
    //4. cout <<success<< endl;
    cout << "Success!4" << endl;
    //5. string res = 7; vector<inl> v(10); v[5] = res; cout << "Success!\n";
    int res = 7;
    vector<int> v(10);
    v[5] = res;
    cout << "Success!5\n";
    //6 vector<inl> v(10); v(5) = 7;  if (v(5)!=7) cout << "Success!\n";
    vector<int> v1(10);
    v1[5] = 7;
    if (v1[5] == 7)
        cout << "Success!6\n";
    //7 if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    bool cond = true;
    if (cond)
    {
        cout << "Success!7\n";
    }
    else
        cout << "Fail!\n";

    //8 bool c =fa lse; if (c)  cout << "Success!\n"; else cout << "Fai l!\n";
    bool c = false;
    if (!c)
        cout << "Success!8\n";
    else
        cout << "Fail!\n";
    //9 strings = "ape"; boo  c = "fool"<s; if (c) cout << "Success!\n";
    string s = "ape";
    bool c1 = "fool" < s;
    if (!c1)
        cout << "Success!9\n";
    //10 strings = "ape"; if (s=="fool") cout << "Success!\n";
    string s2 = "ape";
    if (s2 != "fool")
        cout << "Success!10\n";
    //11 strings = "ape";  if (s=="fool") cout < "Success!\n";
    string s3 = "ape";
    if (s3 != "fool")
        cout << "Success!11\n";
    //12 strings= "ape"; if (s+"fool") cout < "Success!\n";
    string s4 = "ape";
    if (s4 != "fool")
        cout << "Success!12\n";
    //13 vector<char> v(5); for (int i=O; O<v.size(); ++i) ;  cout << "Success!\n";
    vector<char> v2(5);
    for (int i = 0; i < v.size(); i++)
        ;
    cout << "Success!13\n";
    //14 vector<char> v(S); for (int i=O; i<=v.size(); ++i) ;  cout << "Success!\n";
    vector<char> v3(5);
    for (int i = 0; i < v.size(); i++)
        ;
    cout << "Success!14\n";
    //15 strings= "Success!\n"; for (int  i=O; i<6; ++i) cout << s[i];
    vector<string> v4(6);
    v4[0] = "Success!15\n";
    for (int i = 0; i < 6; i++)
    {
        cout << v4[i];
    }
    //16 if (true) then cout << "Success!\n"; else cout << "Fail!\n "
    if (true)
        cout << "Success!16\n";
    else
        cout << "Fail!\n";
    //17 int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    int x = 2000;
    char c2 = x;
    if (c2 != 2000)
        cout << "Success!17\n";
    //18 strings = "Success!\n"; for (int i=O; i<10; ++i) cout << s[i];
    vector<string> v5(10);
    v5[5] = "Success!18\n";
    for (int i = 0; i < 10; i++)
    {
        cout << v5[i];
    }
    //19 vector v(5);  for (int i=O; i<=v.size(); ++i)  ;  cout << "Success !\n";
    vector<int> v6(5);
    for (int i = 0; i < v6.size(); i++)
        ;
    cout << "Success!19\n";
    //20 int i=O; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
    int i = 0;
    int j = 9;
    while (i < 10)
        ++i;
    if (j < i)
        cout << "Success!20\n";
    //21 int x = 2; doubled= 5/(x-2);  if (d==2*x+0.5) cout << "Success!\n";
    double x2 = 3;
    double d = 5 / (x2 - 2);
    if (d != 2 * x2 + 0.5)
    {
        cout << "Success!21\n";
    }
    //22 string<char> s = "Success!\n"; for (int  i=O;  i<=10; ++i) cout << s[i];
    vector<string> v7(11);
    v7[0] = "Success!22\n";
    for (int i = 0; i <= 10; i++)
    {
        cout << v7[i];
    }
    //23 int i=O; while (i<10) ++j; if (j<i) cout << "Success!\n";
    int j1 = 0;
    int i1 = 0;
    while (i1 < 10)
        ++i1;
    if (j1 < i1)
    {
        cout << "Success!23\n";
    }
    //24 int x  = 4; doubled = 5/(x-2); if (d=2*x+0.5)  cout << "Success!\n";
    double x3 = 4;
    double d1 = (5 / (x3 - 2)) + 6;
    if (d1 == 2 * x3 + 0.5)
    {
        cout << "Success!24\n";
    }
    //25 cin << "Success!\n";
    cout << "Success!25\n";
    return 0;
}
catch (exception &e)
{
    cerr << "error: " << e.what() << "\n";
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    return 2;
}