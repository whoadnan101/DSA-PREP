#include <bits/stdc++.h>
using namespace std;
int Fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Fact(n - 1);
}
int main()
{
    int n = 4;
    cout << Fact(n);
}