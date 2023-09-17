// Write a code to implement the function Pow(x,n).

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long ln = n;

    if (ln < 0)
    {
        ln = -ln;
        x = 1 / x;
    }

    double ans = pow(x, ln / 2);
    if (ln % 2 == 1)
        return ans * ans * x;

    return ans * ans;
}

int main()
{
    double x;
    int n;
    cout << "Enter the value of x:";
    cin >> x;
    cout << "Enter the value of n:";
    cin >> n;
    cout << myPow(x, n);
    return 0;
}
