#include <iostream>
#include "middle.h"
using namespace std;

void itc_num_print(long long num) {
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

int itc_sum_num(long long num) {
	long long num3 = itc_abs(num);
	int result = 0;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		result += num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}
int itc_multi_num(long long num) {
	long long num3 = itc_abs(num);
	int result = 1;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		result *= num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}
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

int itc_rev_num(long long num) {
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

int itc_null_count(long long num) { 
	int result = 0;
	for (int n1 = itc_len_num(num); n1 > 0; n1--) {
		if (num % itc_pow(10, n1) / itc_pow(10, n1 - 1) == 0)
			result++;
	}
	return result;
}

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

int itc_second_max_num(long long num) { // 11
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

int itc_second_simple_max_num(long long num) { // 12
	int max1 = itc_max_num(num);
	int max2 = itc_second_max_num(num);
	if (max1 != itc_sum_num(num) / itc_len_num(num))
		return max2;
	return -1;
}

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
}long long itc_bin_num(long long num) {
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

long long itc_abs(long long num1) {
	if (num1 >= 0)
		return num1;
	return (num1 * -1);
}

long long itc_pow(long long num1, long long num2) {
	long long num3;
	num3 = num1;
	for (int n1 = 1; n1 < itc_abs(num2); n1++) {
		num3 *= num1;
	}
	if (num2 > 0)
		return num3;
	if (num2 == 0)
		return 1;
}
