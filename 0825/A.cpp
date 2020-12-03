#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    long long a,b,c,n,T;cin>>T;
    while(T--){
        cin>>a>>b>>n;
        c=a^b;
        if(n%3==0)cout<<a<<endl;
        if(n%3==1)cout<<b<<endl;
        if(n%3==2)cout<<c<<endl;
    }


    return 0;
}
