#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int a,b,c,d,k,t,ans1,ans2;
    cin>>t;
    while(t--){
        int f=0;
        cin>>a>>b>>c>>d>>k;
        for(int i=0;i<=k;i++){
            ans1=i;
            ans2=k-i;
            if(ans1*c>=a && ans2*d>=b){cout<<ans1<<" "<<ans2<<endl;f=1;break;}
        }
        if(f==0)cout<<-1<<endl;
    }


    return 0;
}
