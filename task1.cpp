#include <iostream>
using namespace std;
char Grade(int marks);
main ()
{
  int marks;
  char grade;
  cout << "Enter marks=";
  cin >> marks;
  grade=Grade(marks);
  cout << "Enter Grade="<< grade;
}
char Grade(int marks)
{   
    char grade;
    if (marks < 50)
    {
        grade = 'F';
    }
    else if (marks > 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks > 60 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks > 70 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks > 80 && marks <= 85)
    {
        grade = 'B';
    }
    else if (marks > 85 && marks <= 100)
    {
        grade = 'A';
    }

    return grade;

}