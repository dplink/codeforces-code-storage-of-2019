#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int h,w,mp[1001][1001];
int r[1001],c[1001];

int exe(int a){
    long long as=1;
    while(a--){as*=2;as%=MOD;}
return as;
}

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    cin>>h>>w;
    for(int i=0;i<h;i++)scanf("%d",&r[i]);
    for(int i=0;i<w;i++)scanf("%d",&c[i]);

    for(int i=0;i<=h;i++){
        for(int j=0;j<=w;j++){
            mp[i][j]=-1;
        }
    }



    for(int i=0;i<h;i++){
        for(int j=0;j<r[i];j++){
            mp[i][j]=1;
        }
        mp[i][r[i]]=0;
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<c[i];j++){
            if(mp[j][i]==0){printf("0\n");return 0;}
            mp[j][i]=1;
        }
        if(mp[c[i]][i]==1){printf("0\n");return 0;}
        mp[c[i]][i]=0;
    }
    int sum=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(mp[i][j]==-1)sum++;
            //cout<<mp[i][j]<<" ";
        }
        //cout<<endl;
    }
    if(sum==0){printf("1\n");return 0;}
    long long ans=exe(sum)%MOD;
    printf("%lld\n",ans);
return 0;
}
