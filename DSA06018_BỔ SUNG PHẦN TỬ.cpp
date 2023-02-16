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
        ll n;
        cin >> n;
        ll a[100005], b[100005]= {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }      
        sort(a, a+n);
        ll minn = a[0], maxx = a[n-1], dem = 0;
        for(int i = minn ; i <= maxx; i++)
        {
            if(b[i] == 0) dem++;
        }
        cout << dem << "\n";
    }
}