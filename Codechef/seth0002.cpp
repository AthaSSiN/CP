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
#define forbi(n,x,i) for(int x=i; x<n; ++x)

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

int main(){
	fastio;

	int quer;
	cin>>quer;
	forf(quer,qe)
	{
		int a,b,c;
		cin>>a>>b>>c;
		//int arr[a+b+c];

		ll sum = a+ 2*b + 3*c;
		ll temp = 0;
		int flag = 0;

		int i = 0;
		while(2*temp < sum && i < c)
		{
			temp+=3;
			if(2*temp < sum)
			{
				flag = 1;
			}
		}

		if(!flag)
		{
			i = 0;
			while(2*temp < sum && i < b)
			{
				temp+=2;
				if(2*temp < sum)
				{
					flag = 1;
				}
			}
		}

		if(!flag)
		{
			i = 0;
			while(2*temp < sum && i < b)
			{
				temp+=2;
				if(2*temp < sum)
				{
					flag = 1;
				}
			}
		}

		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
