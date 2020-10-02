#include "std_lib_facilities.h"

int main()
{
	string first_name;
	cout << "Enter your first name: ";
	cin >> first_name;
	
	cout << "Hello "<< first_name <<",";
	cout << " enter the name of the person you want to write to: ";
	cin >> first_name;
	
	cout << "Dear " << first_name << "," << endl
	<< "\tHow are you? I'm fine. I miss you. I really hope we could meet soon.\n";
	
	cout << "Enter the name of a friend: ";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	
	char friend_sex = '0';
	cout << "Enter 'm' if the friend is male or an 'f' if the friend is female. ";
	cin >> friend_sex;
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.";
	if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.";

	int age = 0;
	cout << "\nEnter the age of " << first_name << ": ";
	cin >> age; 
	cout << endl;
	cout << "I hear you just had a birthday and you are " << age << " years old. ";
	if(age <= 0 || age >= 110)
		error("you are kidding!");
		
	if(age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	if(age == 17)
		cout << "Next year you will be able to vote.\n";
	if(age > 70)
		cout << "I hope you are enjoying retirement.\n";
	
	cout << endl << "Yours sicerely\n\nKristof Nyikes"<<endl;
		
	return 0;
}
