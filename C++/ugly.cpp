#include <iostream>
using namespace std;

bool onlyPrimeFactors(int x){
	int i = 2, temp = x;
	while (temp != 1){
		if (i > 5)
			return false;
		if (temp % i == 0)
			temp /= i;
		else	++i;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int ugly = 0;
	int uglyNums = 2, count = 1;
	if (n > 104){
		cout << "Exceeded limit :\t" << endl;
		return -1;
	}
	while (count <= n){
		if (onlyPrimeFactors(uglyNums)){
			cout << uglyNums << ' ';
			ugly = uglyNums;
			++count;		
		}
		++uglyNums;		
	}	
	cout << endl << n << " th ugly number is " << ugly << endl;
	return 0;
}