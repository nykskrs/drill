#include "../../../std_lib_facilities.h"

namespace X
{
    int var = 0;
    void print()
    {
        cout << "X: " << var << endl;
    }
}

namespace Y
{
    int var = 0;

    void print()
    {
        cout << "Y: " << var << endl;
    }
}

namespace Z
{
    int var = 0;

    void print()
    {
        cout << "Z: " << var << endl;
    }
}

int main()
{
    X::var = 7;
    X::print(); // print X's var
    using namespace Y;
    var = 9;
    print(); // print Y's var
    {
        using Z::print;
        using Z::var;
        var = 11;
        print(); // print Z's car
    }
    print();    // print Y's var
    X::print(); // print X's var
    return 0;
}