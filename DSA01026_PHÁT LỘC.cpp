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
    if(s[0] != '8' || s[s.size()-1] != '6') return 0;
    for(int i = 0 ; i <=s.size()-1; i++)
    {
        if(s[i] == '8' && s[i+1] == '8') return 0;
    }
    for(int i = 0 ; i <=s.size()-4; i++)
    {
        if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6' && s[i+3] == '6') return 0;
    }
    return 1;
}

void xuat(string s)
{
    if (kiemtra(s) == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << "\n";
    }
}
void sinhnhiphan(string s)
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        i--;
    }
    if (i < 0)
        stop = 1;
    else
        s[i] = '8';
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
        s += '6';
    xuat(s);
    sinhnhiphan(s);
}