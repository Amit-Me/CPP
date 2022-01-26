#include<iostream>
#include<cmath>
using namespace std;
bool isPowerOfThree(int n) 
{
    for(int i=0;i<20;i++)
    {
        if(pow(3,i)==n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int number;
    cin>>number;
    if(isPowerOfThree(number)==1)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}