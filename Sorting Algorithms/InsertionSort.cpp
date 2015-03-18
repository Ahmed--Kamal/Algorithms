#include<bits/stdc++.h>
using namespace std;
template<typename T>
vector<T> InsertionSort(vector<T> arr, int n)
{
    int value, hole;
    for(int i=1;i<n;i++)
    {
        value = arr[i];
        hole = i;
        while(hole > 0 && arr[hole-1] > value)
        {
            arr[hole] = arr[hole-1];
            hole --;
        }
        arr[hole] = value;
    }
    return arr;
}

int main()
{
    int n,x; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr = InsertionSort(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;


}
