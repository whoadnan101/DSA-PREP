#include <bits/stdc++.h>
using namespace std;
bool Pal(int n, string &s)
{
    if (n >= s.size() / 2)
        return true;
    if (s[n] != s[s.size() - n - 1])
        return false;
    Pal(n + 1, s); // Return the result of the next recursive call
}

int main()
{
    string name = "MADAM";
    cout << Pal(0, name);
    return 0;
}