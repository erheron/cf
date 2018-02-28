#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int ans = 0;
	cin >> n;
	vector<int> a(n);
	set<int> s;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		s.insert(a);
	}
	ans = (int)s.size();
	if(s.find(0) != s.end())
		ans--;
	cout << ans << '\n';
	return 0;

}
