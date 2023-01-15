#include <iostream>
using namespace std;
int Discount(int amount,string day,string month);
main()
{
    int amount;
    string day;
    string month;
    int totalAmount;
    cout << "Enter Amount=";
    cin >> amount;
    cout << "Enter Day:";
    cin >> day;
    cout << "Enter month:";
    cin >> month;
    totalAmount=Discount(amount,day,month);
    cout << "Enter Total Amount:"<< totalAmount;

}
int Discount(int amount,string day,string month)
{
    int totalAmount=amount;
    if (day == "sunday" && (month == "octuber" || month == "march" || month == "august"))
    {
        totalAmount=amount-(amount*10)/100;
        return totalAmount;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        totalAmount=amount-(amount*5)/100;
        return totalAmount;
    }
    return totalAmount;
}