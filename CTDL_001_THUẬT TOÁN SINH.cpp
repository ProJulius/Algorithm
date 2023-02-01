#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

vector<int> a(maxx, 0);
int stop = 0;

int kiemtra(string s)
{
    string tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        tmp = s[i] + tmp;
    }
    if (tmp == s)
    {
        return 1;
    }
    return 0;
}

void xuat(string s)
{
    if (kiemtra(s) == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << "\n";
    }
}
void sinhnhiphan(string s)
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i < 0)
        stop = 1;
    else
        s[i] = '1';
    while (stop == 0)
    {
        xuat(s);
        sinhnhiphan(s);
    }
}

int main()
{
    faster;
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
        s += '0';
    xuat(s);
    sinhnhiphan(s);
}