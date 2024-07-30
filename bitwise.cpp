#include<iostream>
using namespace std;
int main()
{
    int a = 5, b = 3;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    int f = ~a;
    int g = b<<1;
    int h = b>>1;
    cout<<"AND: "<<c<<endl;
    cout<<"OR: "<<d<<endl;
    cout<<"NOR: "<<e<<endl;
    cout<<"NOT: "<<f<<endl;
    cout<<"Lefy Shift: "<<g<<endl;
    cout<<"Right Shift: "<<h<<endl;
}