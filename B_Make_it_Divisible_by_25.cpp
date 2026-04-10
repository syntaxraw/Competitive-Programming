#include <bits/stdc++.h>
using namespace std;
int min_operation(string n, string s)
{
    int operations = 0;
    int checker_index = s.size() - 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == s[checker_index])
        {
            checker_index--;
            if (checker_index < 0)
                break;
        }
        else
        {
            operations++;
        }
    }
    return operations;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        vector<string> possible_values = {"00", "25", "50", "75"};
        int ans = INT_MAX;
        for (auto possible_value : possible_values)
        {
            ans = min(ans, min_operation(n, possible_value));
        }

        cout << ans << endl;
    }
}