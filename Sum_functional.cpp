#include <bits/stdc++.h>
using namespace std;
// Printing Sum of first N number using function.
int Func(int n)
{
    if (n == 0)
        return 0;
    else
        return n + Func(n - 1);
}
int main()
{
    int n = 4;
    cout << Func(n);
}