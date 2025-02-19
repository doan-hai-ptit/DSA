#include <iostream>
#include <sstream>
using namespace std;

string ChuanHoa(string s){
	int len = s.length();
	if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
	for(int i = 1; i < len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	return s;
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s, s1; getline(cin, s);
		stringstream ss(s);
		while(ss >> s1){
			s1 = ChuanHoa(s1);
			cout << s1 <<" ";
		}
		cout<<"\n";
	}
	return 0;
}