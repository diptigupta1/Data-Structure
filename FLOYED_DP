#include <bits/stdc++.h>

using namespace std;
#define V 4
#define INF 99999
void Print(int D[][V]);
void floyed(int G[][V])
{
    int D[V][V],i,j,k;
    for(i=0;i<V;i++)
        for(j=0;j<V;j++)
        D[i][j]=G[i][j];
    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
            for(j=0;j<V;j++)
            {
                if(D[i][k]+D[k][j]<D[i][j])
                    D[i][j]=D[i][k]+D[k][j];
            }
        }
    }
   Print(D);
}
void Print(int D[][V])
{
    cout<<"Shortest distance between every Pair is";
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(D[i][j]==INF)
                cout<<"INF"<<" ";
            else
                cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int G[V][V]={ {0,5,INF,10},
                  {INF,0,3,INF},
                  {INF,INF,0,1},
                  {INF,INF,INF,0}
                };
    floyed(G);
    return 0;
}
