//Ryan Lachman 
//CSC 110 - November 24 2014
//Project: Carpenter cost calculator

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getdata (int& length , int& width, float& costperdqfoot);
float InstalledPrice (int length, int width, float costpersquarefoot);
float totalprice (float installation);
void printdata (int length, int width,  float& installation, float& total);
const float LABOR_COST=0.35;
const float TAX_RATE=0.05;

int main()
{ 
    int length, width;
    float installation, total, costpersqfoot, price;
    
    int num;
    cout<< "Enter the amount of the count:"<<endl;
    cin>>num;
    const int MAXCOUNT = num;
    int count;
    
    for (count = 0; count < MAXCOUNT; count++)
    { 
      getdata (length, width, costpersqfoot);
      installation = InstalledPrice (length, width, costpersqfoot);
      total = totalprice (installation);
	  printdata (length, width, installation, total);
    } 
    system("pause");
    return 0;
}
void getdata (int& length, int& width, float& costpersqfoot)
{
 cout<< "Enter the length, width, and cost per square foot"<<endl;
 cin>> length >> width >> costpersqfoot;
}    
float InstalledPrice (int length, int width, float costpersqfoot)
{
 return (length*width*costpersqfoot)+(length*width*LABOR_COST);
}
float totalprice (float installation)
{
 return (installation + installation*TAX_RATE);
}

void printdata (int length, int width,  float& installation, float& total)
{
 cout<< "The cost for installation is: "<< installation<< endl;
 cout<< "The total cost with tax is: "<< total<< endl;
}
