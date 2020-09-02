#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    string s;
	cin >> s;
	int ans = 0, y = 0, q = 0;
	for (int i = 0; i<s.size(); i++){
		if (s[i] == 'Q'){
			ans += y;
			q++;
		}
		if (s[i] == 'A')y += q;
	}
	cout << ans << endl;
	return 0;
}


