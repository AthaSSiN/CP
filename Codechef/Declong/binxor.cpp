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
#define L 200001

/*

Fermat’s little theorem states that if p is a prime number, then for any integer
a, the number a^p – a is an integer multiple of p. In the notation of modular
arithmetic, this is expressed as:
a^p = a (mod p)
For example, if a = 2 and p = 7, 2^7 = 128, and 128 – 2 = 7 × 18 is an integer
multiple of 7.

If a is not divisible by p, Fermat’s little theorem is equivalent to the
statement (a^ (p- 1)) – 1 is an integer multiple of p, i.e
a^(p-1) = 1 (mod p)

If we multiply both sides by a-1, we get.
a^(p-2) = 1/a (mod p)
*/

ll modInv(ll a) //(1/a mod M = a^M-2), if a is not div by M and
{								// if M is prime by Fermat's lil theorem
    ll y = M-2;
    ll ans = 1;

    a %= M;	//code to calc (a^y)mod M
    while (y > 0)
    {
        if (y & 1)
            ans = (ans*a) % M;

        y = y>>1;
        a = (a*a) % M;
    }
    return ans;

}

int main(){

    ll fac[L];
    fac[0] = 1;

    fori(L,i,1)
    {
        fac[i] = i*fac[i-1]%M;
    }

    ll modIn[L];

    forf(L,i)
    {
        modIn[i] = modInv(fac[i]);
    }

	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
    int n;
    cin >> n;
    char num1[n+1], num2[n+1];
    cin>>num1>>num2;

    int set1 = 0, set2 = 0;
    forf(n,i)
    {
      if(num1[i] == '1')
        set1++;
      if(num2[i] == '1')
        set2++;
    }


    int max1 = set1 + set2 <= n? set1 + set2 : 2*n - set1 - set2;
    int min1 = abs(set1-set2);

    ll ans = 0;
    ll val;

    for(int i = max(0,min1); i <= min(n,max1); i += 2)
    {
      val = (fac[n]* modIn[i] % M * modIn[n-i]) % M;
      ans = (ans + val)%M;
    }

    cout<<ans<<"\n";

  }
	return 0;
}
