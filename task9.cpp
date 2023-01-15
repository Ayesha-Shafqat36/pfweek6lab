#include <iostream>
#include <cmath>
using namespace std;
int calculateVolleyball(int h, int holidays, string year);
int main() 
{
    int h;
    int holidays;
    string year; 
    cout << "Enter Year= ";
    cin>> year;
    cout << "Ënter holiday= ";
    cin >> holidays;
    cout << "Weekends traveled to hometown= ";
    cin >> h;     
    int totalVolleyball = calculateVolleyball(h, holidays, year);
     cout << "Vladimir plays volleyball " << round(totalVolleyball) << " times in a year." << endl;
    return 0;
}

int calculateVolleyball(int h, int holidays, string year) 
{
    int weekends = 48; 
    int freeWeekends= weekends * 3 / 4; 
    int workingWeekends  = weekends - freeWeekends; 
    int freeWeekendsInSofia = freeWeekends - h;
    int volleyballInSofia = freeWeekendsInSofia + holidays * 2 / 3;
    int volleyballInHometown = h;
    int totalVolleyball = volleyballInSofia + volleyballInHometown; 
    if (year == "leap") 
    {
        int more_Volleyball=((totalVolleyball+1)* 15) / 100; 
        totalVolleyball=totalVolleyball+more_Volleyball;
        return totalVolleyball;
    }
    if (year == "normal")
    {
        return totalVolleyball;
    }
}

