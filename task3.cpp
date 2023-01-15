#include <iostream>
using namespace std;
string checkTitle(int age,char gender);
main()
{
    char gender;
    int age;
    string title;
    cout << "Enter age=";
    cin >> age;
    cout << "Enter gender=";
    cin >> gender;
    title=checkTitle(age,gender);
    cout << "Enter Title :"<< title << endl;

}
string checkTitle(int age,char gender)
{
    string title;
    if(age >= 16 && gender == 'm')
    {
        title ="Mr.";
        return title;
    }
     if(age < 16 && gender == 'm')
    {
        title ="Master";
        return title;
    }
     if(age >= 16 && gender == 'f')
    {
        title ="Ms.";
        return title;
    }
     if(age < 16 && gender == 'f')
    {
        title ="Miss";
        return title;
    }
}