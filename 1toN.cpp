#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    // Base Condition
    if (i < n)
        return;
    // Printing the value
    cout << i << endl;
    // Incrementing the value of i by 1
    func(i - 1, n);
}
int main()
{
    // asign the value on n =1
    int n = 1;
    // calling function
    func(4, n);
    // returning the value
    return 0;
}