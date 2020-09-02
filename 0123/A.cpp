#include"stdio.h"
#include"stdlib.h"
#include"iostream"
#include"math.h"
using namespace std;

int main(){
    //freopen("A.in",'r',stdin);
    //freopen("A.out",'w',stdout);
    int n,r1,r2,l1,l2,i;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>l1>>r1>>l2>>r2;
    	if(l1==r2){l1++;l2--;}
		cout<<l1<<" "<<r2<<endl;
	}
return 0;
}

