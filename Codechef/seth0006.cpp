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
	/*int quer;
	cin>>quer;
	forf(quer,qe)
	{

	}*/

	int l,r;
	cin>>l>>r;
	int flag = 0;
	fori(r+1,i,l)
	{
		int temp = i;
		set <int> digs;
		int dig = 0;
		while(temp)
		{
			digs.insert(temp%10);
			temp /= 10;
			dig++;
		}
		if(digs.size() == dig)
		{
			flag = 1;
			cout<<i<<"\n";
			break;
		}
	}

	if(!flag)
		cout<<-1;
	return 0;
}
