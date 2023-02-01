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

int kiemtra(string s, int k)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') dem++;
    }
    if (dem == k)
    {
        return 1;
    }
    return 0;
}

void xuat(string s, int k)
{
    if (kiemtra(s,k) == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << "\n";
    }
}
void sinhnhiphan(string s, int k)
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
        xuat(s,k);
        sinhnhiphan(s,k);
    }
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = "";
        for (int i = 1; i <= n; i++)
            s += '0';
        xuat(s,k);
        sinhnhiphan(s,k);
        stop = 0;
    }
}