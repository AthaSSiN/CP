#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector <vector< int> > vvi;
typedef vector<ll> vl;
typedef vector <vector< ll> > vvl;
typedef pair <int, int > pii;
typedef pair <ll, ll > pll;

#define vec vector
 
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


bool sorter(const vi & v1, const vi & v2) //True value comes above
{
	if(v1[0] != v2[0])
		return v1[0] > v2[0];
	return v1[1] < v2[1];
}

/*ll modInv(ll a)
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

ll powMod(ll a, ll y)
{
	ll ans = 1;
	
	while (y > 0) 
	{ 
		if (y & 1) 
			ans = (ans*a) % M; 
  
		y = y>>1;
		a = (a*a) % M; 
	} 
	return ans;
	
}*/


/*
vvi adj(10002);
vi visited(10002);
vvi cnt(200002, vi(2, 0));

int ct;
void dfs(int v)
{
	visited[v] = true;
	for(int u : adj[v])
	{
		if(!visited[u])
		{
			dfs(u);
		}
	}
}

void adjlist(int n)
{
	forf(n,i)
	{
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
}*/


int main()
{
	fastio;
	int quer;
	quer = 1;
	cin>>quer;
	forf(quer,qe)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		forf(n,i)
		{
			cin>>s[i];
			//cout<<s[i]<<endl;;
		}
		int ct[26] = {0};
		string ans = "";
		forf(m,i)
		{
			forf(26,j)
				ct[j] = 0;
			forf(n,j)
				ct[s[j][i] - 'a']++;
			int maxx = 0, maxpos = 0;
			forf(26,j)
			{
				if(ct[j] > maxx)
				{
					maxx = ct[j];
					maxpos = j;
				}
			}
			ans += maxpos + 'a';
		}
		int f = 0, g = 0;
		forf(n,i)
		{
			int ct = 0;
			forf(m,j)
			{
				if(s[i][j] != ans[j])
					ct++;
				if(ct >= 1)
				{
					if(ct == 1 && !g)
					{
						g = 1;
						ans[j] = s[i][j];
						ct--;            
					}

					else if(ct >= 2)
					{
						cout<<-1<<endl;
						f = 1;
						break;
					}
					
				}
			}
			if(f)
				break;
		}
		if(!f)
			cout<<ans<<endl;
	}
	return 0;
}