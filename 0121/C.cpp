#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=3e5;
struct{
   ll kin,cos;
}node[maxn];
int n;
ll a,b,c,d,lim,sta;
int main()
{   while(~scanf("%d%lld%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d,&sta,&lim)){
          for(int i=0;i<n;i++){
              scanf("%lld%d",&node[i].cos,&node[i].kin);
          }
          ll mn=1e17;
          ll ans=sta;
          ll sum2=0;
          int now=0;
          bool flag=false;
          int kk;
          for(int i=0;i<n;i++){
              ll tt;
              if(i==0)tt=0;
              else tt=node[i-1].cos+1;//计算i活动第一个被影响时，茶话会开始的日期
              while(now<n&&(node[now].cos-tt)<lim){
                  if(node[now].kin==0)
                      sum2-=d;
                  else
                      sum2+=c;
                  mn=min(sum2,mn);
                 now++;
              }
              if(mn+ans>=0){
                 flag=true;
                 kk=i;
                 if(kk==0)
            printf("0\n");
          else
            printf("%lld\n",node[kk-1].cos+1);
            break;              }
              if(node[i].kin==1){
                 mn-=c;
                 sum2-=c;
                 ans+=a;
              }
              else {
                 mn+=d;
                 sum2+=d;
                 ans-=b;
              }
              if(ans<0){
                //puts("-1");
                flag=true;
                break;
              }
          }
          if(!flag)
          printf("%lld\n",node[n-1].cos+1);



    }


    return 0;
}
