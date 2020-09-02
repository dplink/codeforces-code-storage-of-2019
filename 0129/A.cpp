#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;

int main(){
    //freopen("test.txt","r",stdin);
    //freopen("test.out","w",stdout);
    int l,r,i;
    cin>>l>>r;
    if(l+3==r){
        if(l%3==0)cout<<"3";
        else cout<<"2";
        return 0;
    }
    cout<<"2";
    /*if(l==r){cout<<l;return 0;}
    if(l+1==r){cout<<r;return 0;}
    if(r-l>4){cout<<"2";return 0;}
    if(l+2==r){
        if(l%2==0)cout<<"2";
        else cout<<"r";
        return 0;
    }
    if(l+3==r){
        if(l%3==0)cout<<"3";
        else cout<<"2";
        return 0;
    }
    if(l+4==r){
        if(l%3==0)cout<<"3";
        else cout<<"2";
        return 0;
    }*/
return 0;
}

#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	long int l,r;
	scanf("%ld%ld",&l,&r);
	if(l==r)
	{
		printf("%ld\n",l);
	}
	else
	{
		printf("2\n");
	}
	return 0;
}
