#include"stdio.h"
#include"iostream"
#include"stdlib.h"
#include"algorithm"
#include"math.h"
#include"string.h"
#include"queue"
using namespace std;
int g=1,k;
long long as=9223372036854771807ll;
int main(){
	long long n,v;
	cin>>n>>v;
	for(long long t=2;t*t<=v;t++)
        {
		if(v%t==0)
		{
			k=0;g=t;
			while(v%t==0)
			{
				v/=t;k++;
			}
			long long mt=n,a=t,ns=0;
			while(a<=mt)
			{
				ns+=mt/a;
				if(a<=mt/t) a*=t;
				else break;
			}
            ns/=k;
			if(as>ns) as=ns;
		}
	}
	if(v!=1)
        {
		long long mt=n,a=v,ns=0;
		while(a<=mt)
		{
			ns+=mt/a;
			if(a<=n/v) a*=v;
			else break;
		}
		if(as>ns) as=ns;
	}
	cout<<as;
return 0;
}
