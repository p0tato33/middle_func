#include <iostream>
#include "middle.h"
using namespace std;

bool itc_mirror_num(long long num) { 
	long long num3 = itc_abs(num);
	int num1 = 0;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		num1 += (num3 % itc_pow(10, itc_len_num(num3) - n1 + 1) / itc_pow(10, itc_len_num(num3) - n1) * itc_pow(10, n1 - 1));
	}
	if (num1 == num)
		return true;
	return false;
}

int itc_mirror_count(long long num) { 
	int count = 0;
	for (int n1 = 1; n1 < itc_abs(num) + 1; n1++) {
		if (itc_mirror_num(n1) == true)
			count++;
	}
	return count;
}
