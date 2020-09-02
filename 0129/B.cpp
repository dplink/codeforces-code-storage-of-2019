#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;
int n,k,a[100001],b[100001],tmp=0;
int a1[100001],b1[100001];

int exe(int t,int now,int h){
    if(tmp==1)return 0;
    if(now==1 && a1[h]>=15)return 1;
    if(now==2 && b1[h]>=15)return 1;
    if(t>=h){if(now==1)a1[h]++;if(now==2)b1[h]++;return 1;}
    if(h>n){tmp=1;return 0;}
    if(now==1 && a[h]==0){if(now==1)a1[h]++;if(now==2)b1[h]++;return 1;}
    if(now==2 && b[h]==0){if(now==1)a1[h]++;if(now==2)b1[h]++;return 1;}
    //cout<<now<<" "<<h<<endl;
    if(now==1){if(b[h+k]==1 || h+k>n)exe(t+1,2,h+k);}
    if(now==2){if(a[h+k]==1 || h+k>n)exe(t+1,1,h+k);}
    if(now==1){exe(t+1,1,h+1);exe(t+1,1,h-1);}
    if(now==2){exe(t+1,2,h+1);exe(t+1,2,h-1);}
return 1;
}

int main(){
    //freopen("test.txt","r",stdin);
    //freopen("test.out","w",stdout);
    std::ios::sync_with_stdio(false);
    int i;
    char t;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>t;
        if(t=='-')a[i]=1;
        else a[i]=0;
    }
    for(i=1;i<=n;i++){
        cin>>t;
        if(t=='-')b[i]=1;
        else b[i]=0;
    }
    exe(0,1,1);
    if(tmp==1)cout<<"YES";
    else cout<<"NO";
return 0;
}
