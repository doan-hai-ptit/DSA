#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int test; cin >> test;
	for(int j = 1; j <= test; j++){
		int n; cin >> n;
		int i = 2, count = 0;
	//	for(int i = 2; i <= sqrt(n); i++){
	//		if(n % i == 0) 
	//	}
		cout << "Test "<<j<<": ";
		while(n != 1){
			if(n % i == 0){
				n /= i;
				count++;
			}
			else{
				if(count > 0) cout << i << "(" << count <<") ";
				i++;
				count = 0;
			}
		}
		cout << i << "(" << count <<")\n";
	}
	return 0;
}