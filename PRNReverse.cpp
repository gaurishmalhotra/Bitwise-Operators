#include<iostream>
using namespace std;
int main ()
{
    int a;
    int b;
    cout<<"Enter a number to reverse: ";
    cin>> a;
    while(a>0)
    {
        
        b = a%10;
        a = a/10;
        cout<<b<<endl;
        
    }
    
}