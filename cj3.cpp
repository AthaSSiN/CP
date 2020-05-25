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
	forf(quer,t)
	{
        int n;
        cin>>n;
        vector< vector <int> > arr(n);
        vector< vector <int> > temp(n);
        forf(n,i)
        {
            arr[i] = vector<int>(2);
            temp[i] = vector<int>(3);
            cin>>arr[i][0]>>arr[i][1];
            temp[i][0] = arr[i][0];
            temp[i][1] = arr[i][1];
            temp[i][2] = i;
        }

        sort(all(temp));
        
        string ans = "JC";
        int jjob1 = 1, jjob2 = 0;
        int job1 = temp[0][1], job2 = temp[1][1];
        int bk = 0;
        for(int i = 2; i < n; ++i)
        {
            if(temp[i][0] >= job1)
            {
                //job1 = job2;
                job1 = temp[i][1];
                
                if(jjob1)
                    ans+="J";
                else
                    ans+="C";
            
            }
            else if(temp[i][0] >= job2)
            {
                job2 = temp[i][1];
                if(jjob2)
                    ans+="J";
                else
                    ans+="C";
            }
            else
            {
                bk = 1;
                break;
            }
            
        }

        if(bk)
        {
            cout<<"Case #"<<t+1<<": "<<"IMPOSSIBLE\n";
            continue;
        }
        char finalans[n+1];
        finalans[n] = '\0';
        forf(n,i)
        {
            finalans[temp[i][2]] = ans[i];
        }
        cout<<"Case #"<<t+1<<": "<<finalans<<"\n";
	}
	return 0;
}
