// to set or reset a particular bit 
#include<iostream>
using namespace std;
int main()
{
    int bit_to_be_set, i=5;
    int bit_to_be_reset;
    int set, reset;
    cout<<"Enter the bit to be changed: "<<endl;
    cin>>bit_to_be_reset>>bit_to_be_set;
    set = i|(1<<bit_to_be_reset);
    reset = i&(~(1<<bit_to_be_reset));
    cout<<"Reset: "<<reset<<endl;
    cout<<"Set: "<<set<<endl; 
}