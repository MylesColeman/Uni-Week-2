#include <iostream>
using namespace std;

//int main()
//{
//    float valueOne = 0.0f;
//    float valueTwo = 0.0f;
//
//    cout << "Input your first value for comparison." << endl;
//    cin >> valueOne;
//
//    cout << "Input your second value for comparison." << endl;
//    cin >> valueTwo;
//
//    if (valueOne > valueTwo)
//    {
//        cout << "Your first value is larger." << endl;
//    }
//    else if(valueTwo > valueOne)
//    {
//        cout << "Your second value is larger." << endl;
//    }
//    else
//    {
//        cout << "Your values are equal." << endl;
//    }
//}

//int main()
//{
//	int input;
//	cout << "Input an integer value." << endl;
//	cin >> input;
//
//	if (input % 2 == 0)
//	{
//		cout << "Your value is even." << endl;
//	}
//	else
//	{
//		cout << "Your value is odd." << endl;
//	}
//}

//int main()
//{
//	int inputtedYear;
//	cout << "Input a year." << endl;
//	cin >> inputtedYear;
//
//	if (inputtedYear % 4 == 0)
//	{
//		if (inputtedYear % 100 == 0)
//		{
//			if (inputtedYear % 400 == 0)
//			{
//				cout << "This year is a leap year." << endl;
//			}
//			else
//			{
//				cout << "This year is NOT a leap year." << endl;
//			}
//		}
//		else
//		{
//			cout << "This year is a leap year." << endl;
//		}
//	}
//	else
//	{
//		cout << "This year is NOT a leap year." << endl;
//	}
//}

//int main()
//{
//	int inputtedSeconds;
//	int days;
//	int hours;
//	int minutes;
//	int seconds;
//	cout << "Input a time in seconds." << endl;
//	
//	cin >> inputtedSeconds;
//
//	days = inputtedSeconds / 86400;
//
//	hours = (inputtedSeconds % 86400) / 3600;
//
//	minutes = (inputtedSeconds % 3600) / 60;
//
//	seconds = inputtedSeconds % 60;
//
//	cout << days << " days " << hours << "hrs " << minutes << "mins " << seconds << "secs" << endl;
//}

//int main()
//{
//	int moduleOne;
//	int moduleTwo;
//	int moduleThree;
//	int moduleFour;
//	int moduleFive;
//	int moduleSix;
//
//	cout << "Input your first modules results, as a percentage." << endl;
//	cin >> moduleOne;
//
//	cout << "Input your second modules results, as a percentage." << endl;
//	cin >> moduleTwo;
//
//	cout << "Input your third modules results, as a percentage." << endl;
//	cin >> moduleThree;
//
//	cout << "Input your fourth modules results, as a percentage." << endl;
//	cin >> moduleFour;
//
//	cout << "Input your fifth modules results, as a percentage." << endl;
//	cin >> moduleFive;
//
//	cout << "Input your sixth modules results, as a percentage." << endl;
//	cin >> moduleSix;
//
//	float averageResult = (moduleOne + moduleTwo + moduleThree + moduleFour + moduleFive + moduleSix) / 6;
//
//	if (averageResult > 39)
//	{
//		if (averageResult > 49 && averageResult < 60)
//		{
//			cout << "Your grade is C, and you have passed." << endl;
//		}
//		else if (averageResult > 59 && averageResult < 70)
//		{
//			cout << "Your grade is B, and you have passed." << endl;
//		}
//		else if (averageResult > 69 && averageResult < 85)
//		{
//			cout << "Your grade is A, and you have passed." << endl;
//		}
//		else if (averageResult > 84)
//		{
//			cout << "Your grade is A*, and you have passed." << endl;
//		}
//		else
//		{
//			cout << "Your grade is D, and you have passed." << endl;
//		}
//	}
//	else
//	{
//		if (averageResult < 30)
//		{
//			cout << "Your grade is F, and you have failed." << endl;
//		}
//		else
//		{
//			cout << "Your grade is E, and you have failed." << endl;
//		}
//	}
//}

//int main()
//{
//	int inputtedDayValue;
//	cout << "Input the day of the week, as a number." << endl;
//	cin >> inputtedDayValue;
//	if (inputtedDayValue == 1)
//	{
//		cout << "It is Monday." << endl;
//	}
//	else if (inputtedDayValue == 2)
//	{
//		cout << "It is Tuesday." << endl;
//	}
//	else if (inputtedDayValue == 3)
//	{
//		cout << "It is Wednesday." << endl;
//	}
//	else if (inputtedDayValue == 4)
//	{
//		cout << "It is Thursday." << endl;
//	}
//	else if (inputtedDayValue == 5)
//	{
//		cout << "It is Friday." << endl;
//	}
//	else if (inputtedDayValue == 6)
//	{
//		cout << "It is Saturday." << endl;
//	}
//	else if (inputtedDayValue == 7)
//	{
//		cout << "It is Sunday.v" << endl;
//	}
//	else
//	{
//		cout << "You have entered an invalid day, 1-7." << endl;
//	}
//}

int main()
{
	int guardHealth;
	cout << "Enter your guard's health." << endl;
	cin >> guardHealth;

	int bulletsRemaining;
	cout << "Enter your bullets remaining." << endl;
	cin >> bulletsRemaining;

	char enemyVisibleInput;
	bool enemyVisible;
	cout << "Is the enemy visible? y/n" << endl;
	cin >> enemyVisibleInput;
	if (enemyVisibleInput == 'y')
	{
		enemyVisible = true;
	}
	else if (enemyVisibleInput == 'n')
	{
		enemyVisible = false;
	}

	float enemyDistance = 0.0f;
	cout << "How far is the enemy, in metres?" << endl;
	cin >> enemyDistance;

	if (!enemyVisible)
	{
		if (bulletsRemaining < 1)
		{
			cout << "Searching for ammo." << endl;
		}
		else
		{
			cout << "Patrolling." << endl;
		}
	}
	else
	{
		if (guardHealth > 10)
		{
			cout << "Attack." << endl;
			if (enemyDistance > 20.0f && bulletsRemaining > 0)
			{
				cout << "Firing" << endl;
			}
			else
			{
				cout << "Unarmed fighting" << endl;
			}
		}
		else
		{
			cout << "Retreat" << endl;
		}
	}

}