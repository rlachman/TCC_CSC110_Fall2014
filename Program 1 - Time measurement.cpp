//Ryan Lachman 
//CSC 110 - October 14 2014
//Project: Time measurement
//Taking two sets of hours and minutes, adding them, and display in hours and 
//minutes as well as decimal.

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int hrs1, hrs2, min1, min2, totalhrs, totalmin, hours, mins, showpoint;
    double totalDecimal;
    cout<<"Enter the First Hours and Minutes"<<endl;
    cin>>hrs1>>min1;//input first set of hours and minutes
    cout<<"Enter the Second Hours and Mintues"<<endl;
    cin>>hrs2>>min2;//input second set of hours and minutes
    totalhrs = hrs1 + hrs2; //adding hours
    totalmin = min1 + min2; //adding minutes
    totalhrs = totalhrs * 60;// converting hours into minutes with multiplying
    totalmin = totalhrs + totalmin;//adding converted hours with totalled minute
    hours = totalmin / 60;//dividing hours out of totalled minutes
    mins = totalmin % 60;//getting the remainder of totalled minutes
    totalDecimal =(double)totalmin / 60;// getting decimal for totalled minutes
    cout<<hours;//display total hours
    cout<<" hours";
    cout<<setw(5);//adding 5 spaces between hours and minutes
    cout<<mins;//display total minutes
    cout<<" minutes"<<endl;
    cout<<totalDecimal<<endl;//displaying total hours and minutes as a decimal
    cout<<setiosflags(ios::fixed);
    cout<<"Showing use of Fixed "<<totalDecimal<<endl;
    cout<<setiosflags(ios::right);
    cout<<"Showing use of ShowPoint "<<totalDecimal<<endl;
    cout<<setprecision(2);
    cout<<"Showing use of SetPrecision "<<totalDecimal<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
