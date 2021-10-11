#include <iostream>
#include "middle.h"
using namespace std;

void itc_num_print(int num) { 
	cout << num << endl;
}

int itc_len_num(long long num) {
	long long num1 = itc_abs(num);
	int counter = 0;
	while (num1 != 0) {
		if (num1 / 10 > 0) {
			counter++;
			num1 /= 10;
		}
		else {
			if (num1 % 10 >= 0)
				counter++;
			return counter;
		}
	}
	return counter;
}
