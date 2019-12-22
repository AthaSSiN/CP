#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int quer;
  cin>>quer;
  long long a,b;
  for(int qe=0; qe<quer; ++qe)
  {
    cin>>a>>b;

    if(a-b ==1 || a-b == -1)
      cout<<"NO\n";
    else
      cout<<"YES\n";
  }
  return 0;
}
