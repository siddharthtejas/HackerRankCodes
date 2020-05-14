#include <bits/stdc++.h>

using namespace std;

int main()
    {
       int n,k,sum=0,actual;
       cin>>n>>k;
       int bill[n];
       int b;
       
       for(int i=0;i<n;i++)
       {
           cin>>bill[i];
           sum=sum+bill[i];
       }
          actual=(sum-bill[k])/2;
          cin>>b;
        if(b==actual)
        {
            cout<<"Bon Appetit";
        }
        else
        {   
            cout<<b-actual;
        }

    }
