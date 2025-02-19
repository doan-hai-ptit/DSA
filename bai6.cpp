#include <iostream>

using namespace std;

string result(string s){
	int len = s.length();
	bool tang = false, giam = false;
	for(int i = 0; i < len - 1; i++){
		if(s[i] > s[i+1]) giam = true;
		else if(s[i] < s[i+1]) tang = true;
		if(tang && giam) return "NO\n";
	}
	return "YES\n";
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		cout << result(s);
	}
	return 0;
}