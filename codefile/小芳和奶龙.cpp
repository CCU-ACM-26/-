/*https://ac.nowcoder.com/acm/contest/141882/A*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fang, nong;
    fang = nong = 0;

    for (int i = 0; i < n; i++)
    {
        char x;
        scanf(" %c", &x);
        if (x == '0')
        {
            fang++;
        }
        else
        {
            nong++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        char x;
        scanf(" %c", &x);
        if (x == '0')
        {
            fang++;
        }
        else
        {
            nong++;
        }
    }
    cout << fang << " " << nong;
    return 0;
}