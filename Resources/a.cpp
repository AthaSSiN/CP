#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007
#define PI 3.1415926
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define ini(a,i) memset(a, i, sizeof(a))
#define forf(n,x) for(int x = 0; x < n; ++x)
#define forb(n,x) for(int x = n-1; x >= 0; --x)
#define fori(n,x,i) for(int x=i; x<n; ++x)

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
        int n;
        cin >> n;
        int a[n][2];
        cin>>a[0][0]>>a[0][1];
        int valid = 1;
        if(a[0][0] < a[0][1])
            valid = 0;
        forf(n-1,i)
        {
            cin>>a[i+1][0]>>a[i+1][1];
            if(a[i+1][0] < a[i][0] || a[i+1][1] < a[i][1] || (a[i+1][0] - a[i][0]) < (a[i+1][1] - a[i][1]))
                valid = 0;
        }
        
        if(valid)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}

