#include "middle.h"

int itc_rev_num(long long num) { // 7
	long long num3 = itc_abs(num);
	long long num1 = 0;
	long counter = 0;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		num1 += (num3 % itc_pow(10, itc_len_num(num3) - n1 + 1) / itc_pow(10, itc_len_num(num3) - n1) * itc_pow(10, n1 - 1));
	}
	for (int n1 = itc_len_num(num1); n1 > 0; n1--) {
		counter += 1;
	}
	return counter;
}

int itc_null_count(long long num) { // 8
	int result = 0;
	for (int n1 = itc_len_num(num); n1 > 0; n1--) {
		if (num % itc_pow(10, n1) / itc_pow(10, n1 - 1) == 0)
			result++;
	}
	return result;
}
