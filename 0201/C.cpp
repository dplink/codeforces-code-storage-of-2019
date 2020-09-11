#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
const int maxn=200005;
int fa[maxn];
vector<int>q[maxn];
vector<int>o[maxn];
int find(int x){
    int xx=x;
    while(x!=fa[x])x=fa[x];
    while(fa[xx]!=x){
        int t=fa[xx];
        fa[xx]=x;
        xx=t;
    }
return x;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i = 1 ; i <= n  ;i++)
    fa[i]=i;
    while(k--){
        int a,b;
        scanf("%d%d",&a,&b);
        q[a].push_back(b);
        q[b].push_back(a);
        int qaq1=find(a);
        int qaq2=find(b);
        if(qaq1!=qaq2);
        fa[qaq1]=qaq2;
    }
    for(int i  = 1 ; i <= n  ; i++)o[find(i)].push_back(i);
    int cnt=0;
    for(int i = 1 ; i <= n ; i++){
        if(o[i].size()>2){
            bool or2=1;
            for(int j = 0 ; j < o[i].size()&&or2;j++){
                if(q[o[i][j]].size()!=2)or2=0;
            }
            if(or2)cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
