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
		int n;
		cin>>n;

		char arr[n+1];
		cin>>arr;

		int flag = 0;

		forf(n,i)
		    if(arr[i] != '0' )
		    {
		        flag = 1;
		        break;
		    }

		if(flag){

		forf(n%2?n/2+1:n/2, i)
		{
			if(arr[i] == '1' || arr[n-i-1] == '1')
			{
				flag=1;
				cout<<2*(n-i);
				break;
			}


		}
		}

		if(!flag)
			cout<<n;
		cout<<"\n";
	}
	return 0;
}
