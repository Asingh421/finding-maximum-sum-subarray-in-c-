#include <iostream>
#include <bits/stdc++.h>
//int b=0,e=0;
using namespace std;

int find_sum(int arr[],int l,int r)
  {
      int sum=0;
      for(int i=l;i<=r;i++)
      {
        sum+=arr[i];
      }

     return sum;
  }

int find_end_points(int arr[],int l,int r)
  {
    int b;
    if(l==r)
     {b=l;
      return b;}
      b=find_end_points(arr,l,r-1);
     if(arr[r]+b>b)
        return r;
     else
        return b;


  }





int main()
{
int n;
cout<<"Enter no of elements "<<endl;
cin>>n;
int arr[n];
 int rarr[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++)
{cin>>arr[i];
rarr[n-i-1]=arr[i];

}

//int n=sizeof(arr)/sizeof(int);
 int k=find_end_points(arr,0,n-1);
 int m=find_end_points(rarr,0,n-1);
 cout<<"begining="<<n-1-m<<" end="<<k;
 cout<<endl<<"maximum sum="<<find_sum(arr,n-1-m,k);

}
