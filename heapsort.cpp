#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define pii vector<int,int>
#define rep(i,a,b) for(int i = a; i<b;i++)
#define ff first
#define ss second
void heapify(int arr[], int n, int i) 
{
    int largest = i;   // Initialize largest as root
    int l = 2*i + 1;   // left = 2*i + 1
    int r = 2*i + 2;   // right = 2*i + 2
    if (l < n && arr[l] > arr[largest]) // If left child is larger than root
        largest = l;
    if (r < n && arr[r] > arr[largest]) // If right child is larger than largest so far
        largest = r;
    if (largest != i)   
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
signed main(){
    int n;
    cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    heapSort(arr,n);
    rep(i,0,n){
        cout<<arr[i]<<" ";
    }
    return 0;
}

