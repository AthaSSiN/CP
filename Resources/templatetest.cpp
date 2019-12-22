
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

#define forf(x,n) for(int x = 0; x < n; ++x)
#define forb(x,n) for(int x = n-1; x >= 0; --x)

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;


int main()
{
  fastio;
    int n;

    n=10;

    set <int> enemies;

    int p;
    vector<int> v;

    forf(i,n)
    {
      p=rand()%100;
      enemies.insert(p);
      v.pb(p);
    }

    itr(enemies,it)
      cout<<*it<<" ";

    cout<<"\n";

    sort(all(v));

    itr(v,ip)
      cout<<*ip<<" ";

}
