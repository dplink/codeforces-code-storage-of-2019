#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;

int main(){
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int l,n,i,j,o,r,p=0,ans=2147483646,tmp=0,f=0;
    char a[101][101],b[101][101];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    l=strlen(a[0]);

    for(i=0;i<n;i++){//比较对象
        tmp=0;
        p=0;
        for(j=0;j<n;j++){//bi jiao chuan
            p=0;
            for(o=0;o<l;o++){//bi jiao chuan de kaitou weizhi
                f=0;
                for(r=0;r<l;r++){
                    if(a[i][r]==a[j][(o+r)%l])continue;
                        else f=1;
                }
                if(f==0)tmp+=o;
                else p++;
            }
        if(p>=l){cout<<"-1";return 0;}//
        }
        if(tmp<ans)ans=tmp;
    }
    cout<<ans;
return 0;
}
