#include "middle.h"

int itc_sum_num(long long num) {
	long long num3 = itc_abs(num);
	int result = 0;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		result += num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}
long long itc_multi_num(long long num) { 
	long long num3 = itc_abs(num);
	int result = 1;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		result *= num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}
