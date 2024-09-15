#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int l, int r)
{
    if (arr[l] <= arr[r])
        return;
    else
    {
        swap(arr[l], arr[r]);
        ReverseArray(l + 1, r - 1);
    }
}
int main()
{
    int arr[] = {2, 35, 6, 6, 7};
    int n = 0;
    cout << ReverseArray(arr[], n - 1);
}