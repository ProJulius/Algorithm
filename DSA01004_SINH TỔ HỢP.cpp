#include<bits/stdc++.h>
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
        a[i] = i;
    }
}

void xuat()
{
    for(int i = 1 ; i <= k ; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void sinhtohop()
{
    int i = k;
    while(i >= 1 && a[i] == n-k+i)
    { 
        i--;
    }
    if(i == 0) stop = 1;
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
        while(stop == 0)
        {
            xuat();
            sinhtohop();
        }
        cout << "\n";
        stop = 0;
    }
}