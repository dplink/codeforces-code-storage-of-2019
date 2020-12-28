#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 510
#define inf 0x3f3f3f3f
inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
    return x*f;
}
int n,f,d,h[N],num=1,lev[N],T=500;
struct edge{
    int to,next,val;
}data[50000];
inline void add(int x,int y,int val){
    data[++num].to=y;data[num].next=h[x];h[x]=num;data[num].val=val;
    data[++num].to=x;data[num].next=h[y];h[y]=num;data[num].val=0;
}
inline bool bfs(){
    queue<int>q;memset(lev,0,sizeof(lev));
    q.push(0);lev[0]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=h[x];i;i=data[i].next){
            int y=data[i].to;if(lev[y]||!data[i].val) continue;
            lev[y]=lev[x]+1;q.push(y);
        }
    }return lev[T];
}
int dinic(int x,int low){
    if(x==T) return low;int tmp=low;
    for(int i=h[x];i;i=data[i].next){
        int y=data[i].to;if(lev[y]!=lev[x]+1||!data[i].val) continue;
        int res=dinic(y,min(tmp,data[i].val));
        if(!res) lev[y]=0;tmp-=res;data[i].val-=res;data[i^1].val+=res;
        if(!tmp) return low;
    }return low-tmp;
}
int main(){
//  freopen("a.in","r",stdin);
    n=read();f=read();d=read();
    for(int i=1;i<=f;++i) add(0,i+200,1);
    for(int i=1;i<=d;++i) add(i+300,T,1);
    for(int i=1;i<=n;++i){
        int f1=read(),d1=read();add(i,i+100,1);
        while(f1--){
            int x=read();add(x+200,i,1);
        }while(d1--){
            int x=read();add(i+100,x+300,1);
        }
    }int ans=0;while(bfs()) ans+=dinic(0,inf);
    printf("%d\n",ans);
    return 0;
}
