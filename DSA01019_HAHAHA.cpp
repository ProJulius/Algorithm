#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

char a[500];
int n, stop = 0;

int check1(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'H' && s[i + 1] == 'H')
            return 0;
    }
    return 1;
}

int check2(string s)
{
    if (s[0] == 'H' && s[s.size() - 1] == 'A')
        return 1;
    return 0;
}

void sinhnhiphan(int n, char a[])
{
    int i = n - 1;
    while (i >= 0 && a[i] == 'H')
    {
        a[i] = 'A';
        i--;
    }
    if (i == -1)
        stop = 1;
    else
        a[i] = 'H';

    string tmp = "";
    for (int i = 0; i < n; i++)
    {
        tmp += a[i];
    }
    //cout << tmp << " ";
    if (check1(tmp) == 1 && check2(tmp) == 1)
    {
        cout << tmp << "\n";
    }
}


int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            a[i] = 'A';
        }
        stop = 0;
        while (stop == 0)
        {
            sinhnhiphan(n, a);
        }
    }
}
