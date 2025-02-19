#include <iostream>

using namespace std;

long long USCLN(int a, int b){
	while(b!= 0){
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

long long BSCNN(int a, int b){
	return (a*b)/USCLN(a, b);
}
int main(){
	int test; cin >> test;
	while(test--){
		int a, b; cin >> a >> b;
		cout << USCLN(a,b) << " " <<BSCNN(a, b)<<"\n";
	}
	return 0;
}