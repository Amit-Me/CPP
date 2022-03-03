#include<iostream>
using namespace std;
int Re(int num)
{
    if(num == 1)
        return 1;
    else
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num%i == 0)
                i++;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number upto which you want to find prime numbers : ";
    cin>>num;
    cout<<Re(num);
    return 0;
}