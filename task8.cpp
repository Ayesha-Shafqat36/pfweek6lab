#include <iostream>
#include <cmath>
using namespace std;
float Ticket(int people,int budget,string ticket);
main()
{
    int people;
    int budget;
    string ticket;
    float levaLeft;
    cout << "Enter total budget:";
    cin >> budget;
    cout << "Enter Ticket type:";
    cin >> ticket;
    cout << "Enter number of people:";
    cin >> people;
    levaLeft=Ticket(people,budget,ticket);
    levaLeft=abs(levaLeft);
    if (levaLeft == 249.99 || levaLeft <= 499.99 )
    {
        cout << "Yes! You have "<< levaLeft << " QR left.";
    }
    else if (levaLeft>499.99)
    {
        cout << "Not enough money! You need "<< levaLeft << " leva";
    }
}
float Ticket(int people,int budget,string ticket)
{
    float amount;
    float levaLeft;
    
    if (people>=1 && people <=4 && ticket == "normal")
    {
        amount=(budget*75)/100;
        levaLeft=(249.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=1 && people <=4 && ticket == "vip")
    {
        amount=(budget*75)/100;
        levaLeft=(499.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=5 && people <=9 && ticket == "normal")
    {
        amount=(budget*60)/100;
        levaLeft=(249.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=5 && people <=9 && ticket == "vip")
    {
        amount=(budget*50)/100;
        levaLeft=(499.99*people)-(budget-amount);
        return levaLeft;
        
    }
    if (people>=10 && people <=24 && ticket == "normal")
    {
        amount=(budget*50)/100;
        levaLeft=(249.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=10 && people <=24 && ticket == "vip")
    {
        amount=(budget*50)/100;
        levaLeft=(499.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=25 && people <=49 && ticket == "normal")
    {
        amount=(budget*40)/100;
        levaLeft=(249.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=25 && people <=49 && ticket == "vip")
    {
        amount=(budget*40)/100;
        levaLeft=(499.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=50 && ticket == "normal")
    {
        amount=(budget*25)/100;
        levaLeft=(249.99*people)-(budget-amount);
        return levaLeft;
    }
    if (people>=50 && ticket == "vip")
    {
        amount=(budget*25)/100;
        levaLeft=(499.99*people)-(budget-amount);
        return levaLeft;
    }
    
}