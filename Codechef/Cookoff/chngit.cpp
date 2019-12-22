#include <bits/stdc++.h>
using namespace std;
#define forf(n,i) for(int i =0; i< n; ++i)
#define pb push_back
int main() {
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
	    int n;
	    cin>>n;
	    int k;
	    int a[101] = {0};
	    forf(n,i)
	    {
	        cin >> k;
	        a[k]++;
	    }
	    sort(a,a+101);
	    cout<<n - a[100]<<"\n";
	}
	return 0;
}
