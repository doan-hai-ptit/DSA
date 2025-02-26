#include <iostream>

using namespace std;

void selectionSort(vector<int> a, int n){
	for(int i = 0; i < n; i++){
		int idx = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[idx]){
				idx = j;
			}
		}
		swap(a[i], a[idx]);
	}
	for(auto i : a) cout << i <<" ";
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		int a[100] = {0};
		for(int i = 0; i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9') a[s[i] - '0']++;
		}
		for(int i = 0; i<= 9; i++){
			if(a[i] > 0) cout << i <<" ";
		}
		cout<<"\n";
	}
	return 0;
}