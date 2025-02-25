//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double GROWTH_RATE = 0.055; 
    double sales = 0.0;
    double annualincrease = 0.0;
    int years =0;
    cout << "Current year's sales:";
    cin >> sales;
    while(sales < 150000.0)
        {
            annualincrease = sales * GROWTH_RATE;
            sales += annualincrease;
            years += 1;
        
        }
    cout << fixed << setprecision(0);
    cout << "Sales " << years << " years ago were $"<< sales << endl;
    return 0;
} //end of main function
