#include <bits/stdc++.h>
using namespace std;
char a[50001],rest[50001];
int num[50001];
int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int t,n,i,m,now=0,j,mx=0,ans,sum;
    cin>>t;
    while(t--){
        ans=0;mx=-1;sum=0;
        cin>>n>>m;
        for(i=0;i<=m;i++){num[i]=0;rest[i]='.';}
        for(i=0;i<n;i++){
            sum=0;
            scanf("%s",a);
            for(j=0;j<m;j++)if(a[j]=='*'){sum++;num[j]++;}
            if(sum>mx){mx=sum;for(j=0;j<m;j++)rest[j]=a[j];}
        }
        ans+=(m-mx);
        mx=-1;
        //for(i=0;i<m;i++)cout<<num[i]<<" ";
        //cout<<rest<<endl;
        for(i=0;i<m;i++){
            //cout<<rest[i]<<" ";
            if(rest[i]=='.')num[i]++;
            if(num[i]>mx)mx=num[i];
        }
        //cout<<mx<<endl;
        ans+=(n-mx);
        cout<<ans<<endl;
        //cout<<endl;
    }
return 0;
}
