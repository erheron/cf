#include <vector>
#include <string>
#include <iostream>


using namespace std;




bool change_0(char a,char b){
	if((a == '0' && b == 'o' ) || (a == 'o' && b == '0'))
		return true;
	return false;
}
bool change_1(char a,char b){
	if((a == '1' && (b == 'l' || b == 'i')) ||
		(b == '1' && (a == 'l' || a == 'i')) ||
		(a == 'l' && b == 'i') ||
		(a == 'i' && b == 'l'))
			return true;
	return false;
}
int main(int argc, char **argv)
{
	string s;
	int n;
	vector<string> a;
	cin >> s;
	for(int i=0;i<s.length();i++)
		s[i] = tolower(s[i]);
	cin >> n;
	a.resize(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	bool ans = false;
	for(int i=0;i<n;i++){
		bool cur = true;
		if(a[i].length() == s.length()){
			for(size_t j=0;j<s.length();j++){
					a[i][j] = tolower(a[i][j]);
					if(a[i][j] != s[j])
						if(!(change_0(a[i][j],s[j]) || change_1(a[i][j],s[j]))){
							//cout << s << " " << a[i] << '\n';
							cur = false;
							break;
						}
			}
		if(cur){
			ans = true;
			break;
		}
		}
	}
	if(ans)
		cout << "No";
	else cout << "Yes";
	return 0;
}
