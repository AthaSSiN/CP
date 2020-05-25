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
	forf(quer,t)
	{
        char n[101];
        cin>>n;
        string ans = "";
        forf(n[0] - '0', i)
            ans += '(';
        ans += n[0];
        for(int i = 1; i < strlen(n); ++i)
        {
            int diff = n[i] - n[i-1];
            if(diff > 0)
                forf(diff,j)
                    ans += '(';
            else
                forf(-diff,j)
                    ans += ')';
            ans += n[i];
        }
        forf(n[strlen(n) -1] - '0', i)
            ans += ')';
        cout<<"Case #"<<t+1<<": "<<ans<<"\n";
	}
	return 0;
}
