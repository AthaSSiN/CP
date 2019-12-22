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
    //int flag;
    int dist;
	forf(quer,qe)
	{
        int n;
        cin>>n;
        vector<int> vals(n);
        vals[0] = 0;
        vals[1] = 0;
        //cout<<vals[0]<<" "<<vals[1]<<" ";
        fori(n,i,2)
        {
            dist = 0;
            forb(i-1,j)
            {
                if (vals[i-1]== vals[j])
                {
                    dist = i-j-1;
                    break;
                }
            }
            vals[i] = dist;
            //cout<<vals[i]<<" ";
        }

        int num=0;
        forf(n,i)
        {
            if(vals[i]==vals[n-1])
                num++;
        }

        cout<<num<<"\n";
	}
	return 0;
}
