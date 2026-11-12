#include <iostream>
using namespace std;
int rebmun(int n)
{
    int x = 0;
    while (n)
    {
        x *= 10;
        x += n % 10;
        n = n / 10;
    }
    return x;
}

int main(void)
{
    int nub, bun;
    nub = bun = 0;
    cin >> nub;
    bun = rebmun(nub);
    cout << bun;
    return 0;
}