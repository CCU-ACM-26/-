#include <iostream>
using namespace std;

int my_gcd(int b, int l)
{
    int p = 1;
    while (p)
    {
        p = b % l;
        b = l;
        l = p;
    }
    return b;
}

int main()
{
    int n, x, y;
    n = x = y = 0;
    cin >> x >> y;
    if (y > x)
    {
        n = x;
        x = y;
        y = n;
    }
    n = my_gcd(x, y);
    cout << n << " " << x * y / n;
    return 0;
}