#include<bits/stdc++.h>

using namespace std;

int main()
{

  set<int> da;

  for(int i=0; i<10; ++i)
  {
    int t = rand()%100;
    cout<<t<<" ";
    da.insert(t);
  }

  cout<<"\n";

  for(auto it=da.begin(); it!=da.end(); ++it)
    cout<<*it<<" ";

  return 0;
}
