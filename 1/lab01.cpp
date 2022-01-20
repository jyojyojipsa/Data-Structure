#include <iostream>

 using namespace std;


unsigned int converter(unsigned int);

int main() {
	unsigned int num, count=0;

	while (cin >> num) {
		cout << num;
		for(; num >= 10; num = converter(num)) {
			cout  << " -> " << converter(num);
			count++;
				

		}
		cout << " persistence = " << count<< "\n";
		count = 0;
	}

		}
	



unsigned int converter(unsigned int num){
	int digit, product;
	
	product = num == 0 ? 0 : 1;
	
	while (num != 0) {
		digit = num % 10;
		product *= digit;
		num /= 10;
	}

	return product;
}
