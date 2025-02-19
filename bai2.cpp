#include <iostream>

using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		int len = s.length();
		if(s[0] == s[len-1]) cout<<"YES\n";
		else cout <<"NO\n";
	}
	return 0;
}