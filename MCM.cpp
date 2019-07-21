#include <bits/stdc++.h>

using namespace std;
int MCM(int a[],int i,int j)
{
    if(i==j)
        return 0;
    int k;
    int min1=INT_MAX;
    int count1;
    for(k=i;k<j;k++)
    {
        count1=MCM(a,i,k)+MCM(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(count1<min1)
            min1=count1;
    }
  return min1;
}
int main()
{
   int a[]={1,2,4,3,3};
   int n=sizeof(a)/sizeof(a[0]);
   cout<<"min number of multiplication of matrices is"<<MCM(a,1,n-1);
    return 0;
}
