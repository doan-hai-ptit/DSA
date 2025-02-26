#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string ChuanHoa1(string s){
	int len = s.length();
	if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
	for(int i = 1; i < len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	return s;
}

string ChuanHoa2(string s){
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
	}
	return s;
}
int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		vector<string> v;
		string s, s1; getline(cin, s);
		stringstream ss(s);
		while(ss >> s1){
			s1 = ChuanHoa1(s1);
			v.push_back(s1);
		}
		int len = v.size();
		for(int i = 1; i < len-1; i++){
			cout << v[i] <<" ";
		}
		v[0] = ChuanHoa2(v[0]);
		cout<<v[len-1] <<", " << v[0]<<"\n";
	}
	return 0;
}