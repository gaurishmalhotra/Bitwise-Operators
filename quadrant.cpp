//to find coordinates are from which quadrant 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the coordinates of x"<<endl;
    cin>>a;
    cin>>b;
    cout<<"("<<a<<","<<b<<")"<<endl;
    if(a>0 && b>0)
    {
        cout<<"The numbers are in 1st quadrant"<<endl;
    }
    else if(a<0 && b>0)
    {
        cout<<"The numbers are in 2nd quadrant"<<endl;
    }
    else if(a<0 && b<0)
    {
        cout<<"The numbers are in 3th quadrant"<<endl;
    }
    else 
    {
        cout<<"The numbers are in 4th quadrant"<<endl;
    }
}
   

