#include "middle.h"

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

int itc_rev_oct_num(long long num)
{
    int counter = 1;
    int last;
    int perevod = 0;
    int len = itc_len_num(num);
    for(int i = 0; i < len; i++)
    {
        last = num % 10;
        perevod = perevod + last * counter;
        counter = counter * 8;
        num = num / 10;
    }
    return perevod;
}
