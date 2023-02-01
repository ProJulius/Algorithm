#include <bits/stdc++.h>
using namespace std;

vector<int> b(1000006, 0);
int main()
{

    int n, k;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 1; i <= n; i++)
    {
        if(a[i] != k) cout << a[i] << " ";
    }
}