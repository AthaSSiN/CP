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
		ll n,k,b;
		cin>>n>>k>>b;
		vector<ll> arr(n);

		int maxi=0, mini=0;
		forf(n,i)
		{
			cin>>arr[i];
		}
		int maxn=arr[0], minn=arr[0];
		//sort(all(arr));
		if(b)
		{
			forf(n,i)
			{
				if(arr[i]<arr[mini])
				{
					mini=i;
				}
				else if(arr[i]==arr[mini])
				{
					if(!k%2)
					{
						if(max(i>0?arr[i-1]:INT_MIN,i<n-1?arr[i+1]:INT_MIN)>max(mini>0?arr[mini-1]:INT_MIN,mini<n-1?arr[mini+1]:INT_MIN))
						{
							mini=i;
						}
					}
				}
			}
			if(!k%2)
				cout<<max(mini>0?arr[mini-1]:INT_MIN,mini<n-1?arr[mini+1]:INT_MIN);
			else
				cout<<arr[mini];
		}
		else
		{
			forf(n,i)
			{
				if(arr[i]<arr[maxi])
				{
					maxi=i;
				}
				else if(arr[i]==arr[maxi])
				{
					if(!k%2)
					{
						if(min(i>0?arr[i-1]:INT_MAX,i<n-1?arr[i+1]:INT_MAX)>min(maxi>0?arr[mini-1]:INT_MAX,maxi<n-1?arr[maxi+1]:INT_MAX))
						{
							maxi=i;
						}
					}
				}
			}
			if(!k%2)
				cout<<min(maxi>0?arr[mini-1]:INT_MAX,maxi<n-1?arr[maxi+1]:INT_MAX);
			else
				cout<<arr[maxi];
		}
		cout<<"\n";
	}
	return 0;
}
