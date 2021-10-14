#include "middle.h"

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
