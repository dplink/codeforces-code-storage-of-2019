#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,T;
    long long x,y;
    cin>>T;
    while(T--){
        cin>>x>>y;
        cin>>a>>b;
        int ans=0;
        if(x==0 || y==0){cout<<x*a+y*a<<endl;continue;}
        if(a*2<=b){
            ans+=x*a;
            ans+=y*a;
        }
        else{
            if(x*y<0){
                ans+=abs(x*a);
                ans+=abs(y*a);
            }
            else {
                ans+=abs(min(x,y))*b;
                ans+=abs(x-y)*a;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}
