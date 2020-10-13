#include "std_lib_facilities.h"


double get_meters(double value, string unit)
{
	constexpr double cm_to_m = 0.01;
	constexpr double in_to_m = 0.0254;
	constexpr double ft_to_m = 0.3048;

	double in_meter = 0;

	if (unit == "cm")
		in_meter = value * cm_to_m;
	else if (unit == "in")
		in_meter = value * in_to_m;
	else if (unit == "ft")
		in_meter = value * ft_to_m;
	else if (unit == "m")
		in_meter = value;


	return in_meter;
}


int main()
{
	double value = 0;
	bool first = true;
	double smallest = 0;
	double largest = 0;
	string unit;
	double sum = 0;
	double meters = 0;

	vector<double> measurements;



	cout << "Write a number with a unit: ";
	while(cin >> value >> unit)
	{
		
		if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
		{
			meters = get_meters(value, unit);

			if (first == true)
			{
				smallest= meters;
				largest = meters;
				cout << meters <<"m is the first number therefore " << meters << "m is the largest and the smallest number.\n";
				first = false;
			}
			else if (meters< smallest)
			{
				smallest = meters;
				cout << meters << "m the smallest so far.\n";
			}
			else if (meters > largest)
			{
				largest = meters;
				cout << meters << "m the largest so far.\n";
			}
			else
				cout << meters << "m\n";
			
		}
		else
			cout << "Illegal value. Please enter a valid value." << endl;
	sum = sum + meters;
	measurements.push_back(meters);
	}

	sort(measurements);
	cout<< "the numbers in order: ";

	for (int i = 0; i < measurements.size(); ++i)
	{
		cout << measurements[i] << "m;  ";
	}
	cout << endl;


	cout << "The summarised value: " << sum << "m" << endl
	<< "The smallest number: " << smallest << "m" << endl
	<< "The largest number: " << largest << "m" << endl;

	return 0;
}