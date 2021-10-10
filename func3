#include <iostream>
#include "middle.h"
using namespace std;

int itc_max_num(long long num) { 
	long long num3 = itc_abs(num);
	int result = num3 % 10;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		if (num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1) > result)
			result = num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}

int itc_min_num(long long num) { 
	int result = num % 10;
	for (int n1 = itc_len_num(num); n1 > 0; n1--) {
		if (num % itc_pow(10, n1) / itc_pow(10, n1 - 1) < result)
			result = num % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}
