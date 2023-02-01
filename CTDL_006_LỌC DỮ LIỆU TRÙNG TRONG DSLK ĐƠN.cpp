#include <bits/stdc++.h>
using namespace std;

vector<int> b(1000006, 0);
int main()
{

    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if(b[a[i]] > 0) 
        {
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
}