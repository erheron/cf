#include <bits/stdc++.h>

using namespace std;

#define fi(n) for(int i=0;i<(n);i++)
#define fj(n) for(int j=0;i<(n);j++)

static const int maxn = 1000000;


int main(){
	ios::sync_with_stdio(false);
	int n;
	int a,b,c;
	bool ok = false;
	cin >> n;
	vector<int> f(n);
	fi(n)
		cin >> f[i];
	if(n == 2){cout <<"NO\n"; return 0;}
	fi(n){
		b = f[i];
		c = f[b-1];
		a = f[c-1];
		if(a == i+1){ok = true;break;}
	}
	if(ok)
		cout << "YES";
	else cout << "NO";
			
	return 0;
}
