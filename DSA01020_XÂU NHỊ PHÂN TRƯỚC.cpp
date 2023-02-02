#include<bits/stdc++.h>
using namespace std;
const int maxx = 1e6+5;

#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

vector<int> a(maxx,0); 

void sinhnhiphan(string s)
{
    int i = s.size()-1;
    while(i >= 0 && s[i] == '0')
    { 
        s[i] = '1';
        i--;
    }
    if(i >= 0) s[i] = '0';
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