#include <iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
main()
{
    int quantity;
    string city;
    string product;
    float price;
    cout << "Enter product name:";
    cin >> product;
    cout << "Enter City name:";
    cin >> city;
    cout << "Enter Quantity:";
    cin >> quantity;
    price=checkCost(city,product,quantity);
    cout<< "Price of product="<< price <<endl;
}
float checkCost(string city,string product,int quantity)
{
    float price;
    if(product == "coffee" && city == "sofia")
    {
        price=quantity*0.50;
        return price;
    }
    if(product == "coffee" && city == "polvdiv")
    {
        price=quantity*0.40;
        return price;
    }
    if(product == "coffee" && city == "varna")
    {
        price=quantity*0.45;
        return price;
    }
    if(product == "water" && city == "sofia")
    {
        price=quantity*0.80;
        return price;
    }
    if(product == "water" && (city == "polvdiv" || city == "varna"))
    {
        price=quantity*0.70;
        return price;
    }
    if(product == "beer" && city == "sofia")
    {
        price=quantity*1.20;
        return price;
    }
    if(product == "beer" && city == "polvdiv")
    {
        price=quantity*1.15;
        return price;
    }
    if(product == "beer" && city == "varna")
    {
        price=quantity*1.10;
        return price;
    }
    if(product == "sweets" && city == "sofia")
    {
        price=quantity*1.45;
        return price;
    }
    if(product == "sweets" && city == "polvdiv")
    {
        price=quantity*1.30;
        return price;
    }
    if(product == "sweets" && city == "varna")
    {
        price=quantity*1.35;
        return price;
    }
    if(product == "peanuts" && city == "sofia")
    {
        price=quantity*1.60;
        return price;
    }
    if(product == "peanuts" && city == "polvdiv")
    {
        price=quantity*1.50;
        return price;
    }
    if(product == "peanuts" && city == "varna")
    {
        price=quantity*1.55;
        return price;
    }
}