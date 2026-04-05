#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> p(3 * n );
        int cnt = 1;
        for (int i = 0; i < 3 * n; i += 3)
        {
            p[i] = cnt++;
        }
        for (int i = 1; i < 3 * n; i++)
        {
            if (p[i] == 0)
            {
                p[i] = cnt++;
            }
        }

        for (int i = 0; i < 3 * n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}