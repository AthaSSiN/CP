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
        string a[9];
        forf(9,i)
            cin>>a[i];
        char temp;
        
        /*temp = sud[0][0];
        sud[0][0] = sud[1][3];
        sud[1][3] = sud[2][6];
        sud[2][6] = temp;
        
        temp = sud[3][1];
        sud[3][1] = sud[4][4];
        sud[4][4] = sud[5][7];
        sud[5][7] = temp;
        
        temp = sud[6][2];
        sud[6][2] = sud[7][5];
        sud[7][5] = sud[8][8];
        sud[8][8] = temp;*/
        
        a[0][1] = a[1][1];
        a[1][3] = a[1][4];
        a[2][7] = a[1][7];
        a[4][0] = a[4][1];
        a[5][4] = a[4][4];
        a[3][8] = a[4][7];
        a[7][2] = a[7][1];
        a[6][5] = a[7][4];
        a[8][6] = a[7][7];
        
        forf(9,i)
            cout<<a[i]<<"\n";
        
        
        
	}
	return 0;
}

