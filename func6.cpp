#include "middle.h"

int itc_second_max_num(long long num)
{
    num = itc_abs(num);
    int last = itc_min_num(num);
    int maxx = itc_max_num(num);
    while(num != 0)
    {
        if(num & 10 > last && num % 10 < maxx)
            last = num % 10;
        num /= 10;
        
    }
    return last;
}

int itc_second_simple_max_num(long long num) {
	int max1 = itc_max_num(num);
	int max2 = itc_second_max_num(num);
	if (max1 != itc_sum_num(num) / itc_len_num(num))
		return max2;
	return -1;
}
