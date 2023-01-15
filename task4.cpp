#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    string Speed;
    cout << "Enter Speed=";
    cin >> speed;
    Speed=checkSpeed(speed);
    cout << "Enter Speed Limit:"<< Speed;
}
string checkSpeed(float speed)
{
    string Speed;
    if(speed <= 10)
    {
        Speed="slow";
        return Speed;
    }    
    if (speed >10 && speed <=50)
    {
        Speed="average";
        return Speed;
    }
    if (speed > 50 && speed <= 150)
    {
        Speed="fast";
        return Speed;
    }
    if (speed > 150 && speed <= 1000)
    {
        Speed="ultra-fast";
        return Speed;
    }
    else 
    {
        Speed="extremely fast";
        return Speed;
    }
}