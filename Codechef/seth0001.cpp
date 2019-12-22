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
	forf(quer,qe)
	{
			char arr[100];
			cin>>arr;
			int c;
			cin>>c;
			//rec(arr,c);


			while(1){
				int len = strlen(arr);
				int beg = len - c;
				if(beg <= 0)
				{
					fori(c,i,len)
						arr[i] = '0';
					arr[c]= '\0';
					break;
				}
				else
				{
				char last[c+1];
				strcpy(last,arr + beg);
				ll sum = 0;
				forf(c,i)
					sum+= last[i] - '0';
				if(sum)
				{
					sum%=9;
					if(!sum)
						sum = 9;
				}

				if(sum < 5)
				{
					fori(len,i,beg)
						arr[i] = '\0';
				}

				else
				{
					arr[beg] = sum;
					fori(len,i,beg+1)
						arr[i] = '\0';
				}
			}
		}

		cout<<arr<<"\n";
	}


	return 0;
}
