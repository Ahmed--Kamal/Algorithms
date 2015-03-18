#include<bits/stdc++.h>
using namespace std;
template <typename T>
vector<T> Merge (vector<T> left, vector<T> right)
{
    vector<T> arr;
    int i=0,j=0,l,r;
    l = left.size();
    r = right.size();
    while(i<l && j<r)
    {
        if(left[i] <= right[j])
            arr.push_back(left[i++]);
        else
            arr.push_back(right[j++]);
    }
    while(i<l)
        arr.push_back(left[i++]);
    while(j<r)
        arr.push_back(right[j++]);

    return arr;
}
template <typename T>
vector<T> MergeSort(vector<T> arr)
{
    int i, n = arr.size();
    if(n<2)
        return arr;
    vector<T> left, right, res;
    int mid = n/2;
    for(i=0;i<mid;i++)
        left.push_back(arr[i]);
    for(i=mid;i<n;i++)
        right.push_back(arr[i]);
    left = MergeSort(left);
    right = MergeSort(right);
    res = Merge(left, right);
    return res;
}
int main()
{
    int n,x; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr = MergeSort(arr);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
