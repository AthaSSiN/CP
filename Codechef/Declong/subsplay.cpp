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
    int n;
    cin>>n;

    vector<int> arr[26];
    char a;
    forf(n,i)
    {
      cin>>a;
      arr[a-'a'].pb(i);
    }

    int l;

    int mini = INT_MAX;

    forf(26,i)
    {
      l = arr[i].size();
      if(l>1)
        forf(l-1, j)
            mini = min(mini, arr[i][j+1] - arr[i][j]);
    }

    if(mini == INT_MAX)
      cout<< 0 << "\n" ;
    else
      cout<< n - mini << "\n";

  }
  return 0;
}
