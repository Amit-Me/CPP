#include <iostream>
#include <limits.h>
using namespace std;
int minSwaps(int arr[], int n)
{
int numberOfOnes = 0;
for (int i = 0; i < n; i++) 
{
	if (arr[i] == 1)
	numberOfOnes++;
}
int x = numberOfOnes;
int count_ones = 0, maxOnes;
for(int i = 0; i < x; i++)
{
	if(arr[i] == 1)
	count_ones++;
}
maxOnes = count_ones;
for (int i = 1; i <= n-x; i++) 
{
	if (arr[i-1] == 1)
	count_ones--;
	
	if(arr[i+x-1] == 1)
	count_ones++;
	
	if (maxOnes < count_ones)
	maxOnes = count_ones;
}
int numberOfZeroes = x - maxOnes;
return numberOfZeroes;
}
int main() 
{
	int a[] = {0, 0, 1, 0, 1, 1, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << minSwaps(a, n);
    return 0;
}
