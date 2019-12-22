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

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		forf(n,i)
			cin>>arr[i];

		forf(k,i)
		{
			arr[i%n] ^= arr[n- i%n -1];
		}

		forf(n,i)
			cout<<arr[i]<<" ";

		cout<<"\n";
	}
	return 0;
}
