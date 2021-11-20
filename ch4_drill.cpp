//1.    write a while that reads two ints and prints it
//2.    change the program to write out the smaller and the larger value
//3.    if they are equal print they are equal
//4.    change the ints to doubles
//5.    change the program so that it writes out the numbers are almost equal if the two numbers differ by less than
//6.    change the body of the loop so it reads one double
//      define two variables to keep track which is the smaller
//      each time write to the screen "the biggest so far" "the smallest so far"
//7.    add units
//8.    deal with illigal values
//9.    keep track of sum, as well as smallest, largest, after '|' print smallest, largest, number of values, and sum of values
#include "../../../std_lib_facilities.h"

//converts the values to meter
double to_meter(double input, string unit)
{
    constexpr double cm_to_meter = 0.01;
    constexpr double in_to_meter = 0.0254;
    constexpr double ft_to_meter = 0.3048;

    if (unit == "cm")
        return input * cm_to_meter;
    else if (unit == "in")
        return input * in_to_meter;
    else if (unit == "ft")
        return input * ft_to_meter;
    else if (unit == "m")
        return input;

    return 0;
}

int main()
{
    double number = 0;
    double largest = 0;
    double smallest = 0;
    double sum = 0;
    bool first = true;
    string unit = "";

    cout << "Write number with units(available units: cm, in, m, ft): ";
    vector<double> all_numbers;
    while (cin >> number >> unit)
    {
        //is it the first number?
        if (first)
        {
            cout << to_meter(number, unit) << "m is the first number therefore it is the smallest and the largest so far\n";
            smallest = number;
            largest = number;
            first = false;
        }
        //checks if its a legal unit
        else if (unit == "cm" || unit == "in" || unit == "ft" || unit == "m")
        {
            if (number < smallest)
            {
                smallest = number;
                cout << "The smallest so far: " << to_meter(number, unit) << " in meters" << endl;
            }
            else if (number > largest)
            {
                largest = to_meter(number, unit);
                cout << "The largest so far: " << to_meter(number, unit) << " in meters" << endl;
            }
            else
                cout << number << unit << " to meters " << to_meter(number, unit) << "m\n";
        }

        else
        {
            if (unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons")
            {
                cout << "illegal value\n";
            }
        }

        //push to vector
        all_numbers.push_back(to_meter(number, unit));
        sum += to_meter(number, unit);
    }

    cout << "The largest value: " << to_meter(largest, unit) << endl;
    cout << "The smallest value: " << to_meter(smallest, unit) << endl;
    cout << "The sum of all entered numbers: " << sum << endl;
    cout << "The number of values written: " << all_numbers.size() << endl;
    sort(all_numbers.begin(), all_numbers.end());
    cout << "All numbers written in increasing order : \n";
    for (double number : all_numbers)
        cout << number << "m" << endl;

    return 0;
}
