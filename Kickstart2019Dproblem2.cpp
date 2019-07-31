#include<bits/stdc++.h>
#define pb push_back
//#define mp make_pair
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define openfile ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
#define f(i, x, y) for(int i = x; i < y; i++)
#define int long long
#define ll long long
#define key pair<int, int>
#define keyd pair<double, double>
#define ff first
#define ss second
#define double long double
int mod = 1e9+7;
const int inf = 1e18;
using namespace std;

main()
{
    fastread;
    int T; cin>>T;
    f(cc, 1, T+1)
    {
        int m, n, K; cin>>m>>n>>K; 
        key a[n+1];  f(i, 1, n+1) cin>>a[i].ff>>a[i].ss;
        vector<int> v[m+1];
        f(i, 1, n+1)
        {
            if(a[i].ss == 'C')
                v[a[i].ff].pb(i);
            pos[i] = a[i].ff;
        }
        
        stack<int> st[m+1];
        
        f(i, 1, m+1)
        {
            int j = 1-i+1; 
            if(j <= 0) j = m - i + 2;
            
        }
    }
}
