#include <bits/stdc++.h>

using namespace std;

int main(){
	long long x,y,m;
	cin >> x >> y >> m;
	if(x <= 0 && y >= 0)
		swap(x,y);
	//now x >= 0 and y <= 0 
	//or both have the same signs
	if(x >= m || y >= m)
		return cout << "0\n",0;
	long long ans = 0, delta = 0;
	if((x >= 0 && y >= 0 && m <= 0) || (x <= 0 && y <= 0 && m >= 0)) 
		return cout << "-1\n",0;
	//now we can assume all numbers have the same sign
	if(x <= 0 && y <= 0 && m <= 0)
		return cout << "-1\n",0;
	//now there is only the case m >= 0
	//and possible cases are: x >= 0 y >= 0
	//						  x >= 0 y <= 0
	//in all of them solution does exist
	if (x >=0 && y <= 0){
		delta = abs(y) / x;
		y = y + delta*x;
	}
	long long f = max(x,y), k = min(x,y);
	while(f < m){
		long long c = f + k;
		k = c;
		long long f1 = max(f,k), k1 = min(f,k);
		f = f1; k = k1;
		ans++;
	}
	cout << ans + delta << '\n';
	return 0;
}
	
