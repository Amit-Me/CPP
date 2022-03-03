#include <bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    int firstRepeated(int arr[], int n) 
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==arr[i])
                    return i+1;
            }
        }      
            return -1;
    }    
};
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }
    return 0;
}