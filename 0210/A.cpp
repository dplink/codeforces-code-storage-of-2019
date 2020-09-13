#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;

int main(){
    int a,b,c,x,y,z,i;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(x>a){cout<<"NO";return 0;}
    a-=x;
    if((a+b+c)<z){cout<<"NO";return 0;}
    if(z-c>0)z-=c;
        else z=0;
    if((y+z)>(a+b)){cout<<"NO";return 0;}
    else cout<<"YES";
return 0;
}
