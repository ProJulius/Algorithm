#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int a[1000006] = {0};
void snt()
{
    for (int i = 2; i <= sqrt(1000006); i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j <= 1000006; j += i)
            {
                a[j] = 1;
            }
        }
    }
    a[0] = a[1] = 1;
}

int ktra(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    faster;
    snt();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int kt = 0;
        for(int i = 2; i <= n-2 ; i++)
        {
            if(a[i] == 0 && a[n-i] == 0){
                cout << i << " " << n-i << "\n";
                kt = 1;
                break;
            }
        }
        if(kt == 0) cout << -1 << "\n";
    }
}