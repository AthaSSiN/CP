#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define D 1000000007
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

#define M 100000

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
    string A,B;
    cin>>A;
    cin>>B;
    bitset<M> a(A), b(B);

    int count = 0;
    while(b.any())
    {
      count++;
      bitset<M> u = a ^ b;
      bitset<M> v = a & b;
      a = u;
      b = v<<1;
    }

    cout<<count<<"\n";
	}
	return 0;
}
