#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the length of the array : ";
    cin>>length;
    int array[length];
    cout<<"Now enter the elements of the array : ";
    for(int i=0;i<length;i++)
    {
        cin>>array[i];
    }
    int currentsum =0,maximum=0;
    for(int i=0;i<length;i++)
    {
        currentsum += array[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        maximum = max(maximum,currentsum);
    }
    cout<<"The maximum sum of the subarray is = "<<maximum;
    return 0;
}