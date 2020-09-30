#include <bits/stdc++.h>
using namespace std;
int num[10001],now[1001],need[1001];
char s[10001],p[10001],t[10001];
int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int tt,i,j,l=0,ll,lll,f,tmp=0;
    cin>>tt;
    while(tt--){
        for(i=0;i<100;i++){num[i]=0;now[i]=0;need[i]=0;}
        scanf("%s",s);
        scanf("%s",t);
        scanf("%s",p);
        f=0;tmp=0;
        ll=strlen(s);
        for(i=0;i<ll;i++)now[s[i]-'a']++;
        lll=strlen(t);
        for(i=0;i<lll;i++)need[t[i]-'a']++;
        l=strlen(p);
        for(i=0;i<l;i++)num[p[i]-'a']++;
        if(ll>lll)f=1;
        for(i=0;i<ll;i++){
            while(tmp<lll){
                if(s[i]==t[tmp])break;
                else tmp++;
            }
            if(tmp>=lll && i<ll)f=1;
        }
        for(i=0;i<26;i++){
            if(need[i]>num[i]+now[i])f=1;
            //cout<<now[i]<<" "<<need[i]<<" "<<num[i]<<endl;
        }
        if(f==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}
