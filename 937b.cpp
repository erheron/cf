#include <bits/stdc++.h>

using namespace std;

int main(){
	int y,p;
	int ans = -1;
	cin >> p >> y;
	int s = (int)(sqrt(y))+1;
	bool stop = false, ok = true;
	for(int x=y; x>max(s-1,p);--x){
		ok = true;
		for(int i=2;i*i<=x && i <= p;i++){			
			if(x % i == 0){
				ok = false;
				break;
			}
			else if(i > p){
				stop = true;
				ans = x;
				break;
			}
		}
		if(ok){
			ans = x;
			break;
		}
		if(stop)
			break;
	}
	cout << ans << '\n';
	return 0;

}
