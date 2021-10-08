#include<bits/stdc++.h>
using namespace std;

int main()
{
     int x,y;
     cin>>x>>y;
     int ar[x];
     for(int i=0; i<x; i++)
     {
          cin>>ar[i];
     }
     for(int i=0; i<y; i++)
     {
          int temp=ar[0];
          for(int j=1; j<x; j++)
          {
               ar[j-1]=ar[j];
          }
          ar[x-1]=temp;
     }
     for(int i=0 ;i<x; i++)
     {
          cout<<ar[i]<<" ";
     }
     cout<<endl;

     return 0;
}
