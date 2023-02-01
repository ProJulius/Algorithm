#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

vector<int> a(maxx,0); 

void sinhnhiphan(string s)
{
    int i = s.size()-1;
    while(i >= 0 && s[i] == '1')
    { 
        s[i] = '0';
        i--;#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int stop = 0, n, k;
int a[maxx]; 

void khoitao()
{
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
    }
}

void xuat()
{
    for(int i = 1 ; i <= k ; i++)
    {
        cout << a[i] << " ";
    }
}

void sinhtohop()
{
    int i = k;
    while(i >= 1 && a[i] == n-k+i)
    { 
        i--;
    }
    if(i == 0) {
        for(int i = 1 ; i <= k ; i++) a[i] = i;
    }
    else 
    {
        a[i]++;
        for(int j = i+1 ; j <= k ; j++)
        {
            a[j] = a[j-1] + 1;
        }
    }
}


int main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        khoitao();
        sinhtohop();
        xuat();
        cout << "\n";
    }
}
    }
    if(i >= 0) s[i] = '1';
    for(int i = 0 ; i < s.size() ; i++)
    {
        cout << s[i];
    }
    cout << "\n";
}


int main()
{
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        sinhnhiphan(s);
    }
}