#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector <vector< int> > vvi;
typedef vector<ll> vl;
typedef vector <vector< ll> > vvl;

#define endl "\n"
#define sp " "
#define M 1000000007
#define PI acos(-1.0)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define ini(a,i) memset(a, i, sizeof(a))
#define forf(n,x) for(int x = 0; x < n; ++x)
#define forb(n,x) for(int x = n-1; x >= 0; --x)
#define fori(n,x,i) for(int x=i; x<n; ++x)
#define vin(arr,n) forf(n,_) cin>>arr[_]
#define vout(arr,n) {forf(n,_) cout<<arr[_]<<sp; cout<<endl;}

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

ll modInv(ll a)
{
    ll y = M-2;
    ll ans = 1;
    
    a %= M;
    while (y > 0) 
    { 
        if (y & 1) 
            ans = (ans*a) % M; 
  
        y = y>>1;
        a = (a*a) % M; 
    } 
    return ans;
    
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main()
{
	fastio;
	
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
		int n,m;
		cin>>n>>m;
		ll med1 = 1<<(m-1), med2 = med1 - 1;
		forf(n,i)
		{
			string s;
			cin>>s;
			
			ll res = 0;
			forf(n,j)
			{
				res <<= 1;
				res += s[j] - '0';
			}
			if(i%2 == 1)
			{
				if(res <= med1)
				{
					med1 = med2;
				}
				else
				{
					med2 = med1;
				}
				
			}
			else
			{
				if(res < med1)
				{
					med2 = med1+1;
				}
				else if(res > med1)
				{
					med1 = med1-1;
				}
				else
				{
					med2 = med2 + 1;
					med1 = med1-1;
				}
				
			}
			
		}

		string ans = "";
		while(med1 != 0)
		{
			ans+= med1%2 + '0';
			med1 /= 2;
		}	
		forf(m,i)
			cout<<ans[m-i-1];
		cout<<endl;
	}
	
	return 0;
}
