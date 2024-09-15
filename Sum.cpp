#include <bits/stdc++.h>
using namespace std;

// Parametarized way to solve sum of first N numbers

void Sum(int i, int sum)
{
    if (i < 1)
    {
        cout << "The output after the recursive call is " << sum;
        return;
    }
    else
    {
        Sum(i - 1, sum + i);
    }
}
int main()
{
    int i = 9;
    Sum(i, 0);
    return 0;
}