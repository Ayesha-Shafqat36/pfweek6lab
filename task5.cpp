#include <iostream>
using namespace std;
float totalIncome(string screen,int rows,int columns);
main()
{
    int rows;
    int columns;
    string screen;
    float amount;
    cout << "Enter Screen Quality=";
    cin >> screen;
    cout << "Enter Rows=";
    cin >> rows;
    cout << "Enter columns=";
    cin >> columns;
    amount=totalIncome(screen,rows,columns);
    cout<< "Enter Total Income="<< amount << endl;

}
float totalIncome(string screen,int rows,int columns)
{
    float amount;
    if (screen == "premiere" )
    {
        amount=12*rows*columns;
        return amount;
    }
    if (screen == "normal")
    {
        amount=7.50*rows*columns;
        return amount;
    }
    if (screen == "discount")
    {
        amount=5*rows*columns;
        return amount;
    }
}