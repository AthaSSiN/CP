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

ll op(ll n)
{
    ll pow2 = (ll)log2(n) + 1;
    
    ll power[pow2] = {0};
    for(int i = 0; i < pow2; ++i)
    {
        power[i] = n/((ll)1 << i);
    }
    
    ll remevesum = 0;
    
    for(int i = 0; i < pow2-1; ++i)
    {
        power[i] -= power[i+1];
        power[i] *= ((ll)1 << i);
        remevesum += power[i];
    }
    
    remevesum += power[pow2 - 1] * ((ll)1 << (pow2 - 1));
    
    ll evesum = n*(n+1)/2;
    
    evesum -= remevesum;
    
    return evesum - pow2;
    return 0;
}

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
        ll l,r;
        cin>>l>>r; //l < r
        
        if(l==1)
            cout<<op(r)<<"\n";
        else
            cout<<op(r)-op(l-1)<<"\n";
        
	}
	return 0;
}
