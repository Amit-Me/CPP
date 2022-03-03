#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int length,sum,max=INT_MIN;
    cout<<"Enter the length of the array : ";
    cin>>length;
    int array[length];
    cout<<"\nNow enter the elements of the array : \n";
    for(int i=0;i<length;i++)
        cin>>array[i];
    for(int i=0;i<length;i++)
    {
        for(int j=i;j<length;j++)
        {
            sum = 0;
            for(int k=i;k<=j;k++)
            {
                sum = sum +array[k];
            }
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    cout<<"Maximum sum of subarray is = "<<max<<endl;
    return 0;
}