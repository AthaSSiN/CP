
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int quer;
  cin>>quer;

  for(int qe = 0; qe<quer; ++qe)
  {
    int n,r;
    cin>>n>>r;

    set <int> enemies;

    enemies.insert(0);

    int p;

    for(int i=0; i<n; ++i)
    {
      cin>>p;
      enemies.insert(p);
    }

    auto it = enemies.end();

    int arr[*(--it)];


    int *ptr = arr;
    int count = 0;

    for(; &arr[*it] > ptr; --it)
    {
      ptr+=r;
      count++;
    }

    cout<<count<<"\n";
  }
}
