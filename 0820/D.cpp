#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
    int e[1010][1001],k,i,j,n,m,t1,t2,t3;
    int inf=99999999;
    scanf("%d",&n);
    for(i=1;i<=n;i++)for(j=1;j<=n;j++)if(i==j)e[i][j]=0;
    else e[i][j]=inf;
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)for(j=0;j<n;j++)e[i][j]=a[i][j]-'0';
    //Floyd-Warshall算法核心语句
    for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(e[i][j]>e[i][k]+e[k][j] )
                        e[i][j]=e[i][k]+e[k][j];
    //输出最终的结果
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
                printf("%10d",e[i][j]);
            }
            printf("\n");
        }
}
