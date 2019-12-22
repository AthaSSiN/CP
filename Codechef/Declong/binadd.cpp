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

int main(){
	fastio;
	int quer;
	cin>>quer;
	while(quer--)
	{
    string A,B;
    cin>>A;
    cin>>B;
    
    int len = max(A.length(), B.length());
    int add = len - min(A.length(), B.length());
    
    string str;
    int maxi = INT_MIN;
    
    if(len == 100000)
    {
    
    forf(add, i)
    {
        str.pb('0');
    }
    
    A.length() > B.length() ? B = str + B : A = str + A;
    
    //cout<<A<<"\n"<<B;
    
    int a1 = 0, b1 = 0;
    forf(len,i)
    {
        if(A[i] == '1')
            ++a1;
        if(B[i] == '1')
            ++b1;
    }
    
    if(!b1)
    {
        cout<<0<<"\n";
        break;
    }
    
    else if(!a1)
    {
        cout<<1<<"\n";
        break;
    }
    
    else
    {
        
        forb(len ,i)
        {
            if((A[i]-'0') == 1 && (B[i] - '0') == 1 )
            {
                int ct = 1;
                forb(i,j)
                {
                    if((A[j]-'0')^(B[j] - '0') == 1)
                        ++ct;
                    else
                    {
                        ++ct;
                        i = j+1;
                        break;
                    }
                }
                maxi = max(ct,maxi);
            }
        }
    }

    cout<<maxi<<"\n";
    }
    
    else
    {
    int count = 0;
    if(len > 60000)
    {
        bitset<100000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 30000)
    {
        bitset<40000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 20000)
    {
        bitset<60000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 10000)
    {
        bitset<20000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 8000)
    {
        bitset<10000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 5000)
    {
        bitset<8000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 1000)
    {

        bitset<5000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 500)
    {
        bitset<1000> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 100)
    {
        bitset<500> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 50)
    {
        bitset<100> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else if(len > 10)
    {
        bitset<50> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    else
    {
        bitset<12> a(A), b(B), v;
        for(;;)
    {   
      if(b==0)
        break;
      ++count;
      v = a & b;
      a ^= b;
      b = v<<1;
    }
    }
    
    cout<<count<<"\n";

    }
	}
	return 0;
}

