#include <iostream>
using namespace std;
bool greaterNumber(int num1,int num2,int num3);
main()
{
    bool numb;
    int num1;
    int num2;
    int num3;
    cout <<"Enter number 1=";
    cin >> num1;
    cout << "Enter number 2=";
    cin >> num2;
    cout << "Enter number 3=";
    cin >> num3;
    numb=greaterNumber(num1,num2,num3);
}
bool greaterNumber(int num1,int num2,int num3)
{
    if (num1 == num2)
    {
        if (num2 == num3)
        {
            if (num3 == num1)
            {
                cout << "yes";
            }
        }
    }
    else
    {
       cout << "no";
    }

}