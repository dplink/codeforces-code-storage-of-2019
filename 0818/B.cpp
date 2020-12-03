#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    long long n,m,evl=0,pos=0,ans=0,zo=0;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]>0)pos++;
        if(a[i]<0)evl++;
        if(a[i]==0){zo++;continue;}
        ans+=abs((abs(a[i])-1));
    }
    if(evl%2!=0){
        if(zo!=0)ans+=zo;
        else {ans+=2;}
    }
    else ans+=zo;
    cout<<ans<<endl;
    return 0;
}
