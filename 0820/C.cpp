#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int n,m,l[1000010],ans[1000010],mp[1001][1001];
int p[1001];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int i,j,k,now=0;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)for(j=0;j<n;j++)mp[i][j]=a[i][j]-'0';

    cin>>m;
    for(i=0;i<m;i++)scanf("%d",&l[i]);
    for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    if(mp[i][j]>mp[i][k]+mp[k][j] )mp[i][j]=mp[i][k]+mp[k][j];
    ans[now]=l[0];now++;
    for(i=1;i<m;i++){
        if(mp[l[i]]!=0){ans[now]=l[i];now++;}
    }



    now++;
    ans[now]=l[m-1];

    cout<<now+1<<endl;
    for(i=0;i<=now;i++)printf("%d ",ans[i]);
    cout<<endl;
return 0;
}
/*ans[now]=l[0];
    p[ans[now]]=1;
    for(i=1;i<m;i++){
        for(j=1;j<=n;j++){// && j!=l[i-1]
            //for(int o=1;o<=n;o++)cout<<p[o]<<" ";cout<<endl;
            if(p[j]==1 && mp[l[i]][j]==1){
                now++;
                ans[now]=l[i-1];
            }

        }
        p[l[i]]=1;
    }*/
