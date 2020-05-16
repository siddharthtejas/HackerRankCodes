#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    int pairs=0;
    for(int i=0;i<n;i++)
    {
       cin>>ar[i];
    }

 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         int u=(ar[i]+ar[j])%k;

         if(u==0)
         {
             pairs++;

         }

     }

 }
     cout<<pairs;
}
