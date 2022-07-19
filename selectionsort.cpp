#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define pii vector<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
void selection_sort(int *arr, int n)
{
    int min_index, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
            swap(arr[i], arr[min_index]);
    }
}

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    rep(i, 0, n)
    {
        cout << arr[i] << " ";
    }

    return 0;
}