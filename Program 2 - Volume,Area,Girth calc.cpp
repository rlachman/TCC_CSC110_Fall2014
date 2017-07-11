//Ryan Lachman 
//CSC 110 - November 1 2014
//Project: Volume,Area,Girth calc

#include <iostream>
#include <iomanip>

using namespace std;

const char SENTINEL = 'Q';//found this suggestion online to quit a program

int main ()
{
   
    char V, A, G, inputChar;
    float length, width, depth, totalV, totalA, totalG;
    
    cout<<"Enter character V for Volume, character A for Surface Area,\n";
    cout<<"character G or Girth plus Depth or Q to quit\n"<<endl;
    cin>> inputChar;
    while (inputChar!=SENTINEL)// if not Q then check the if-ele statments 
      { 
          switch (inputChar) 
             {
                case 'V': 
                          { 
                               cout<<"Enter Length, Width, and Depth for Volume\n"; 
                               cin>>length>>width>>depth; 
                               totalV=length*width*depth;//math for volume 
                               cout<<"The Volume = "<<totalV<<endl; 
                               break;
                          } 
                case 'A':
                          { 
                               cout<<"Enter Length, Width, and Depth for Surface Area\n"; 
                               cin>>length>>width>>depth; 
                               totalA=2*length*width+2*width*depth+2*length*depth;//math for area 
                               cout<<"The Surface Area = "<<totalA<<endl;
                               break;
                          } 
                case 'G':
                          { 
                                cout<<"Enter Length, Width, and Depth for Girth\n"; 
                                cin>>length>>width>>depth; 
                                totalG=2*(length+width)+depth;//math for girth 
                                cout<<"The Girth = "<<totalG<<endl;
                                break; 
                          } 
              default:  
                          {
                                cout <<"incorrect entry\n";  
                                break; 
                          }
            }
    
            cin>> inputChar; 
     }
          system ("pause");
          return 0;
}
