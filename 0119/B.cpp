#include<bits/stdc++.h>
using namespace std;
int dp[555][555],A[555],B[555],path[555][555],n,m;
bool print(int x) {
    if(!x) return false;
    if(print(path[n][x])) printf(" %d",B[x]);
    else printf("%d",B[x]);
    return true;
}
int main() {
    int i,j,tp,ans,pos;
    while(~scanf("%d",&n)) {
        for(i=1;i<=n;i++) scanf("%d",&A[i]);
        scanf("%d",&m);
        for(i=1;i<=m;i++) scanf("%d",&B[i]);
        memset(dp,0,sizeof dp);
        for(i=1;i<=n;i++) {
            tp=pos=0;
            for(j=1;j<=m;j++) {
                dp[i][j]=dp[i-1][j];
                path[i][j]=path[i-1][j];
                if(A[i]==B[j]&&tp+1>dp[i][j])
                    dp[i][j]=tp+1,path[i][j]=pos;
                if(B[j]<A[i]&&dp[i-1][j]>tp)
                    tp=dp[i-1][j],pos=j;
            }
        }
        ans=1;
        for(i=1;i<=m;i++) if(dp[n][i]>dp[n][ans]) ans=i;
        printf("%d\n",dp[n][ans]);
        if(dp[n][ans]) print(ans);
        printf("\n");
    }
    return 0;
}
