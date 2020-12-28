#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    long long n,p,w,d;
    cin>>n>>p>>w>>d;
    if(p==0){cout<<"0 0 "<<n<<endl;return 0;}
    if(n*w<p){cout<<"-1"<<endl;return 0;}
    if(p<w){
        if(p%d==0)cout<<"0 "<<p/d<<" "<<n-p/d<<endl;
        else cout<<"-1"<<endl;
        return 0;
    }
    for(long long i=p/w;i>=0;i--){
        if((p-i*w)%d==0 && ((p-i*w)/d)>=0 && n-i-((p-i*w)/d)>=0){cout<<i<<" "<<n-i-(n-i-((p-i*w)/d))<<" "<<n-i-((p-i*w)/d)<<endl;return 0;}
        if(i*w+(n-i)*d<p)break;
    }
    cout<<-1<<endl;
    return 0;
}
/*for(int i=0;i*d<p;i++){
        //if(((p-i*d)/w) > n-i-(n-i-((p-i*d)/w))+1)break;
        if((p-i*d)%w==0 && n-i-(n-i-((p-i*d)/w))>=0 && n-i-((p-i*d)/w)>=0){cout<<n-i-(n-i-((p-i*d)/w))<<" "<<i<<" "<<n-i-((p-i*d)/w)<<endl;return 0;}
        if(n-i-((p-i*d)/w)<0)break;
    }*/
/*if(p>=w*(n/3)){

    }
    else {
        for(int i=0;i<=p/w;i++){
            if((p-i*w)%d==0 && n-i-((p-i*w)/d)>=0){cout<<i<<" "<<n-i-(n-i-((p-i*w)/d))<<" "<<n-i-((p-i*w)/d)<<endl;return 0;}
        }
    }*/
