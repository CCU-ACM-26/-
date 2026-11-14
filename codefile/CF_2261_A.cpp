#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, o;
        o = 0;
        string s;
        cin >> n >> s;
        int L = s.find('1');
        int R = s.rfind('1');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                o++;
            }
        }
        if (o == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << R - L << endl;
        }
    }
    return 0;
}