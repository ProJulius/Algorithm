#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

vector<int> a;


void sinhhoanvi(int n, int a[])
{
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1])
    { 
        i--;
    }
    if(i == 0) 
    {
        for(int j = 1 ; j <= n ; j++)
        {
            a[j] = j;
        }
    }
    else 
    {
        int k = n;
        while(a[k] < a[i]) 
        {
            k--;
        }
        swap(a[k], a[i]);
    
        int dao1 = n, dao2 = i+1;
        while(dao2 < dao1)
        {
            swap(a[dao1], a[dao2]);
            dao1--;
            dao2++;
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    faster;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
        }
        sinhhoanvi(n, a);
        cout << "\n";
    }
}
