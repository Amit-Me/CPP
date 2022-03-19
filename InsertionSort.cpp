#include<iostream>
using namespace std;
void ins_sort(int arr[], int size)
{
    for(int i=1;i<size;i++)
    {
        int current = arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]>current;)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array : \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array : \n";
    for(int i=0;i<size;i++)cin>>arr[i];
    ins_sort(arr,size);
    cout<<"Array after sorting is : ";
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}