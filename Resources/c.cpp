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

bool sortcol( const vector<float>& v1, 
               const vector<float>& v2 ) { 
 if (v1[0] != v2[0])
    return v1[0] < v2[0];
return v1[1] > v2[1];
} 

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
        int n;
        cin>>n;
        vector<int> arr(n), brr(n);
        vector<vector<float>> res(n);
        forf(n,i)
            cin>>arr[i]>>brr[i];
        for(int i=0; i<n; ++i)
        {
            res[i] = vector<float>(3);
            if(i!= n-1)
            {
                res[i][0] = float(min(arr[i+1], brr[i]))/arr[i];
            }
            else
                res[i][0]= float(min(arr[0], brr[i]))/arr[i];
            res[i][1] = arr[i];
            res[i][2] = i;
        }
        sort(all(res), sortcol);
        ll bulls = 0;
        int a = (res[0][2]+1)>=n?0:(res[0][2]+1);
        arr[a]-= min(arr[a], brr[res[0][2]]);
        forf(n,i)
        {
            bulls+=arr[i];
        }
        cout<<bulls<<"\n";
        
	}
	return 0;
}

