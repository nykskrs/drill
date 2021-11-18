#include "../../../std_lib_facilities.h"

int main()
{
    int birth_year = 2000;

    cout << "decimal:\t" << birth_year << endl;
    cout << "hexadecimal:\t" << hex << birth_year << endl;
    cout << "octal:\t\t" << oct << birth_year << endl;

    cout << "Birth year:(oct)\t" << birth_year << endl;
    cout << "Birth year:(dec)\t" << dec << birth_year << endl;

    int a, b, c, d;
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << "\t" << b << "\t" << c << "\t" << d << endl;

    double num = 1234567.89;
    cout << "General form:\t\t" << num << endl;
    cout << "Fixed form:\t\t" << fixed << num << endl;
    cout << "Scientific form:\t" << scientific << num << endl;

    cout << "|" << setw(8) << "Kristóf"
         << "|" << setw(8) << "Nyikes"
         << "|" << setw(15) << "titok@gmail.com"
         << "|" << setw(15) << "+36 30 666 6666"
         << "|\n";

    return 0;
}