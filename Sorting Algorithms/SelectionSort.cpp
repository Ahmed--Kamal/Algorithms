#include<bits/stdc++.h>
using namespace std;
template <typename T>
vector<T> SelectionSort(vector<T>arr, int n)
{
    int minn;
    for(int i=0;i<n-1;i++)
    {
        minn = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minn])
                minn = j;
        }
        swap(arr[minn], arr[i]);
    }
    return arr;
}
int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr = SelectionSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
