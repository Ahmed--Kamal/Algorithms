#include<bits/stdc++.h>
using namespace std;
template<typename T>
int partition(vector<T> &arr, int left, int right)
{
    int pivot = arr[(left+right)/2];
    swap(arr[right-1], arr[(left+right) / 2]);
    for(int i=left;i<right-1;i++)
        if(arr[i]<=pivot)
            swap(arr[i], arr[left++]);
    swap(arr[left], arr[right-1]);
    return left;

}

template<typename T>
vector<T> QuickSort(vector<T> &arr, int left, int right)
{
    if(left >= right)
        return arr;
    {
        int pivotIndex = partition(arr, left, right);
        QuickSort(arr, left, pivotIndex);
        QuickSort(arr, pivotIndex+1, right);
        return arr;
    }
}
int main()
{
    int n,x; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr = QuickSort(arr, 0, n);

    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";


}
