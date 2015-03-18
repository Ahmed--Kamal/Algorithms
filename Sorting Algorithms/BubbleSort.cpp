#include<bits/stdc++.h>
using namespace std;
template <typename T>
vector<T> BubbleSort(vector<T> arr, int n)
{
    bool check = false;
    for(int i=0;i<n;i++)
    {
        check = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                check = true;
            }
        }
        if(!check)
            break;
    }
    return arr;
}
int main()
{
    int n,x; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr = BubbleSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
