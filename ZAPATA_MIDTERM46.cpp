// Fall 2020 Midterm question #46
// write an interactive program that asks the user to enter three test scores and 
//then calculates the final letter grade using the following cut-off points.

#include <iostream>
using namespace std;

int main()
{
    int test1, test2, test3, lowest, points;
    char grade;

    cout << "Enter your three test scores to determine your final grade: "<< endl;
    cin >> test1;
        if (test1 > 50 || test1 < 0)
        {
            cout << "Invalid Input, please retry."<< endl;
            cin >> test1;
        }
    cin >> test2;
        if (test2 > 50 || test2 < 0)
        {
            cout << "Invalid Input, please retry."<< endl;
            cin >> test2;
        }
    cin >> test3;
        if (test3 > 50 || test3 < 0)
        {
            cout << "Invalid Input, please retry."<< endl;
            cin >> test3;
        }

    if (test1 < test2 && test1 < test3)
        {
            lowest = test1;
        }
    else if (test2 < test1 && test2 < test3)
        {
            lowest = test2;
        }
    else
        {
            lowest = test3;
        }

    points = test1 + test2 + test3 - lowest;

    if (points >= 90)
    {
        grade = 'A';
    }
    else if (points < 90 && points >= 80)
    {
        grade = 'B';
    }
    else if (points < 80 && points >= 70)
    {
        grade = 'C';
    }
    else if (points < 70 && points >= 60)
    {
        grade = 'D';
    }
    else if (points < 60)
    {
        grade = 'F';
    }

    cout << "Based on your three test scores, your final grade is: " << grade << endl;

    return 0;
}
