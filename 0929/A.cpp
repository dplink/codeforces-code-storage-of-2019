#include <bits/stdc++.h>
using namespace std;
char a[10001];
int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    int l,r,len,tmp;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        tmp=i;
        len=0;
        int flag=0;
        while(tmp>0){
            a[len]=tmp%10;
            tmp/=10;
            len++;
        }
        for(int j=0;j<len;j++){
            for(int o=0;o<len;o++){
                if(o!=j && a[o]==a[j])flag=1;
            }
        }
        if(flag==0){cout<<i<<endl;return 0;}
    }
    cout<<-1<<endl;
    return 0;
}
