#include <iostream>
#include "middle.h"
using namespace std;

int itc_second_max_num(long long num) {
	long long num1 = itc_abs(num);
	int max1 = num1 % 10;
	int max2 = 0;
	for (int n1 = itc_len_num(num1); n1 > 0; n1--) {
		if (num1 % itc_pow(10, n1) / itc_pow(10, n1 - 1) > max1)
			max1 = num1 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
		else if ((num1 % itc_pow(10, n1) / itc_pow(10, n1 - 1) < max1) && (num1 % itc_pow(10, n1) / itc_pow(10, n1 - 1) > max2))
			max2 = num1 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	if (max1 == itc_sum_num(num) / itc_len_num(num))
		return max1;
	return max2;
}

int itc_second_simple_max_num(long long num) {
	int max1 = itc_max_num(num);
	int max2 = itc_second_max_num(num);
	if (max1 != itc_sum_num(num) / itc_len_num(num))
		return max2;
	return -1;
}
