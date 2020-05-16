#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n,k;
     cin>>n;
     cin>>k;
     int height[n];

     for(int i=0;i<n;i++)
     {

         cin>>height[i];
     }
      
      int high=height[0];
      for(int i=1;i<n;i++)
      {
          if(height[i]>high)
          {
              high=height[i];
          }
      }
     
     int ret=abs(high-k);
     if(k>high)
     {
         cout<<'0';
     }
     else {
         cout<<ret;
     }

}
