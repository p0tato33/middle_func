#include <iostream>
#include "middle.h"
using namespace std;

long long itc_bin_num(long long num) { 
	long long n = 0;
	int i = 0;
	long long n_abs = itc_abs(num);
	while (n_abs > 0) {
		n += n_abs % 2 * itc_pow(10, i);
		n_abs /= 2;
		i += 1;
	}
	return n;
}

long long itc_oct_num(long long num) { 
	long long n = 0;
	int i = 0;
	long long n_abs = itc_abs(num);
	while (n_abs != 0) {
		n += n_abs % 8 * itc_pow(10, i);
		n_abs /= 8;
		i += 1;
	}
	return n;
}
