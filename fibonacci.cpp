#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int last = fibo(n - 1);
        int slast = fibo(n - 2);
        return last + slast;
    }
}
int main()
{
    cout << fibo(7);
    return 0;
}