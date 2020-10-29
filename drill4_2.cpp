#include "std_lib_facilities.h"


double get_meters(double value, string unit)
{
	constexpr double cm_to_m = 0.01;
	constexpr double in_to_m = 0.0254;
	constexpr double ft_to_m = 0.3048;

	//double in_meter = 0;

	if (unit == "cm")
		return value * cm_to_m;
	else if (unit == "in")
		return value * in_to_m;
	else if (unit == "ft")
		return value * ft_to_m;
	else if (unit == "m")
		return value;
	
	return 0;


	//return in_meter;
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



	cout << "Write a number with a unit(avaliable units:cm,in,ft,m): ";
	while(cin >> value >> unit)
	{
		
		if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
		{
			//meters = get_meters(value, unit);

			if (first == true)
			{
				smallest= get_meters(value, unit);
				largest = get_meters(value, unit);
				cout << get_meters(value, unit)<<"m is the first number therefore " << get_meters(value, unit) << "m is the largest and the smallest number.\n";
				first = false;
			}
			else if (get_meters(value, unit)< smallest)
			{
				smallest = get_meters(value, unit);
				cout << get_meters(value, unit) << "m the smallest so far.\n";
			}
			else if (get_meters(value, unit) > largest)
			{
				largest = get_meters(value, unit);
				cout << get_meters(value, unit) << "m the largest so far.\n";
			}
			else
				cout << get_meters(value, unit) << "m\n";
			
		}
		else
			cout << "Illegal value. Please enter a valid value." << endl;
	sum = sum + get_meters(value, unit);
	measurements.push_back(get_meters(value, unit));
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
