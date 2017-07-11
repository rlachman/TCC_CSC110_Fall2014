//Ryan Lachman 
//CSC 110 - December 15 2014
//Project: Mean and Diff with arrays

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void getlist(float*,int);
void printlist(float*,int);
float mean_average(float*,int);
void find_differences(float,float*,float*,int);
//I used pointers to pass by elements of the array instead of the entire thing at one time to help me with returning values.

int main(void) 
{
	
	int val;
	float arr[25];
	float arr_1[25];
	float mean;

    cout<<"Enter the number of values to be read "<<endl;
	cin>>val;
	getlist(arr,val);
	printlist(arr,val);
	mean = mean_average(arr,val);
	
	cout<<"The mean is "<<mean<<endl;
	
	find_differences(mean,arr,arr_1,val);
	
	printlist(arr_1,val);
    //assigning what all the terms will mean in a nut shell	
    system("PAUSE");
    return EXIT_SUCCESS;
}

void getlist(float* arr,int val)//telling the user which number they are entering out of the choosen array amount
{
	
	for(int i=0; i<val;i++)
    {
		cout<<"Enter number "<<i+1<<endl;
		cin>>arr[i];
	}
}

void printlist (float* arr,int val)//printing each array and its value
{
	for(int i=0; i<val; i++)
    {
	  cout.setf(ios::fixed); 
      cout<<"Array element "<<i<<" is "<<setprecision(3)<<arr[i]<<endl;
	}
}

float mean_average (float* arr,int val)//function to find mean average
{
	
	int sum = 0;
	for(int i=0; i<val; i++)
    {
		sum+=arr[i];
	}
	return sum/val;
}

void find_differences(float mean,float* arr,float* arr_1,int val)//function to find each indivdual array minus the mean average
{
	
	for(int i=0; i<val;i++)
    {
		arr_1[i] = arr[i]-mean;
    }
	
}
