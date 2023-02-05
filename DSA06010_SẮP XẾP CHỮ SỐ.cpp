#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<int> q;
        int x[15] = {0};
        string s;
        while (n--)
        {
            cin >> s;
            cin.ignore();
            for (int j = 0; j < s.size(); j++)
            {
                // cout << s[j]-'0' << " ";
                x[s[j] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (x[i] >= 1)
                q.push_back(i);
        }
        sort(q.begin(), q.end());
        for (int i = 0; i < q.size(); i++)
        {
            cout << q[i] << " ";
        }
        cout << "\n";
        q.clear();
        s.clear();
    }
}