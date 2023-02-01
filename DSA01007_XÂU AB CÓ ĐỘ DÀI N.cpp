#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

char a[500]; 
int n, stop = 0;

void sinhnhiphan(int n, char a[])
{
    int i = n-1;
    while(i >= 0 && a[i] == 'B')
    { 
        a[i] = 'A';
        i--;
    }
    if(i == -1) stop = 1;
    else a[i] = 'B';
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
        for(int i = 0 ; i < n ; i++)
        {
            a[i] = 'A';
        }
        stop = 0;
        while(stop == 0)
        {
            for(int i = 0 ; i < n ; i++)
            {
                cout << a[i];
            }
            cout << " ";
            sinhnhiphan(n, a);
        }
        cout << "\n";
    }
}