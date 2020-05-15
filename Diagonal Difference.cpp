#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n][n];
     int i,j;
     int sum=0,sum2=0;

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
            cin>>arr[i][j];
         }
     }
     
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               sum=sum+arr[i][j]; 
            }

        }


     }

      for(i=0;i<n;i++)
     {
          int k=n-(i+1);
         sum2=sum2+arr[i][k];

     }
     
     int diff=abs(sum-sum2);
     cout<<diff;


          


}
