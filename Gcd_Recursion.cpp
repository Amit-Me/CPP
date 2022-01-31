#include<iostream>
using namespace std;
int Re(int num1,int num2)
{
    if(num1%num2 == 0)
        return num1;
    else
        return Re(num1%num2,num1);
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    if(num1>num2)
        cout<<"The GCD of given numbers is "<<Re(num1,num2);
    else
        cout<<"The GCD of given numbers is "<<Re(num2,num1);
    return 0;
}