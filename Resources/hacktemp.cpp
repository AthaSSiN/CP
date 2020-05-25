#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const auto start_time = std::chrono::high_resolution_clock::now();
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
		ll n;
        int count=0;
        cin>>n;
        for(ll i=(n-1);i>(n/2);i--){
            count++;
        }
        cout<<count<<"\n";
	}
	auto end_time = std::chrono::high_resolution_clock::now();
    	std::chrono::duration<double> diff = end_time - start_time;
    	
	cout<<"Time Taken : "<<diff.count()<<"s\n";
	return 0;
}

