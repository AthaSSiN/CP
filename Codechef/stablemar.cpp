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
    int n;
    cin >> n;
    int women[n][n], men[n][n];

    forf(n,i)
    {
      forf(n,j)
      {
        cin >> men[i][j];
        men[i][j] -= n;
      }
    }
    forf(n,i)
    {
      forf(n,j)
      {
        cin >> women[i][j];
      }
    }

    int pair[n];
    int wife[n];
    ini(pair,-1);
    ini(wife,-1);
    int allMar = 0;

  while(!allMar)
  {
    int w,l,paired;
    forf(n,i)
    {
      if(wife[i] != -1)
        continue;
      forf(n,j)
      {
        w = men[i][j];
        if(pair[w] == -1)
        {
          pair[w] = i;
          wife[i] = w;
          break;
        }
        else
        {
          l = 0;
          paired = pair[w];
          forf(n,k)
          {
            if(women[w][k] == i)
            {
              l=1;
              break;
            }

            else if(women[w][k] == paired)
              break;
          }
          if(l)
          {
            wife[i] = w;
            wife[paired] = -1;
            pair[w] = i;
          }
        }
      }
    }
    allMar = 1;
    forf(n,i)
    {
      if(pair[i] == -1 || wife[i] == -1)
      {
        allMar = 0;
        break;
      }
    }
  }

  cout<<"WOMEN MEN\n";
  forf(n,i)
    cout<<wife[i] + n <<"\t"<<i<<"\n";

	return 0;
}
