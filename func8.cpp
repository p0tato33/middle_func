#include <iostream>
#include "middle.h"
using namespace std;

int itc_rev_bin_num(long long num) {
	long long n = 0;
	int i = 0;
	long long n_abs = num;
	while (n_abs != 0) {
		n += itc_pow(2, i) * (n_abs % 2);
		n_abs /= 10;
		i += 1;
	}
	return n;
}

int itc_rev_oct_num(long long num) { 
	long long n = 0;
	int i = 0;
	long long n_abs = num;
	while (n_abs != 0) {
		n += itc_pow(8, i) * n_abs % 10;
		n_abs /= 10;
		i += 1;
	}
	return n;
}
