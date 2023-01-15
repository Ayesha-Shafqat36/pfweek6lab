#include <iostream>
using namespace std;
float lowestPrice(int km,string period);
main()
{
    int km;
    string period;
    float price;
    cout << "Enter distance in kilometers=";
    cin >> km;
    cout << "Enter Period=";
    cin >> period;
    price=lowestPrice(km,period);
    cout << "Enter Price="<< price << endl;
}
float lowestPrice(int km,string period)
{
    float price;
    
    if (km >= 20 && (period == "day"|| period == "night"))
    {
        price=km*0.09;
        return price;
    }
    if (km >= 100 && (period == "day" || period == "night"))
    {
        price=km*0.06;
        return price;
    }
    if( km < 20 && (period == "day"))
    {
        price=0.70*(km+0.79);
        return price;
    }
    if (km < 20 && (period == "night"))
    {
        price=0.70*(km+0.9);
        return price;
    }

}