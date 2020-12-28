#include <bits/stdc++.h>
using namespace std;
char a[10001];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int i,t,len;
    cin>>t;
    while(t--){
        cin>>len;
        cin>>a;
        int f=0,mx=len;
        for(i=0;i<len-1;i++){
            if(a[i]=='1'){f=1;break;}
        }
        if(f==1)mx=max(mx,(len-i)*2);
        f=0;
        for(i=len-1;i>=0;i--)
        if(a[i]=='1'){f=1;break;}
        if(f==1)mx=max(mx,(i+1)*2);
        cout<<mx<<endl;
    }
    return 0;
}
