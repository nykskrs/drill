//drill page 83
#include "../../../std_lib_facilities.h"

int main()
{
    //1
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "\nDear, " << first_name << "!\n";

    //2
    cout << "\tHow are you? I'm fine. I miss you.\n";
    cout << "It's been so long since we met and I'm looking forward to our meeting.";

    //3
    cout << "\nEnter the name of a friend: ";
    string friend_name;
    cin >> friend_name;
    cout << "\nHave you seen " << friend_name << " lately?";

    //4
    char friend_sex = '0';
    cout << "\nEnter \"m\" if your friend is a male or \"f\" if your friend is a female: ";
    cin >> friend_sex;

    if (friend_sex == 'm')
    {
        cout << "\nIf you see " << friend_name << " please ask him to call me.\n";
    }
    else
    {
        cout << "\nIf you see " << friend_name << " please ask her to call me.\n";
    }

    //5
    int age = 0;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0 || age >= 100)
    {
        error("\nyou're kidding!");
    }
    else
    {
        cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";
    }

    //6
    if (age < 12)
    {
        cout << "Next year you'll be " << age + 1 << ".\n";
    }
    else if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    //7
    cout << "\n\nYours sincerely, Kristóf Nyikes\n";

    return 0;
}