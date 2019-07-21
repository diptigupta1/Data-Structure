#include <bits/stdc++.h>

using namespace std;
int MCMDP(int a[],int n)
{
    int M[n][n];
    int i,j,k,l,q;
    for(i=1;i<n;i++)
        M[i][i]=0;
    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            M[i][j]=INT_MAX;
            for(k=i;k<=j-1;k++)
            {
                q=M[i][k]+M[k+1][j]+a[i-1]*a[k]*a[j];
                if(q<M[i][j])
                    M[i][j]=q;
            }
        }
    }
    return M[1][n-1];
}
int main()
{
   int a[]={1,2,3,4};
   int n=sizeof(a)/sizeof(a[0]);
   cout<<"minimum MCM is"<<MCMDP(a,n);
       getchar();

    return 0;
}
