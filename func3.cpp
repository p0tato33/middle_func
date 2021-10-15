#include "middle.h"

int itc_max_num(long long num) { 
	long long num3 = itc_abs(num);
	int result = num3 % 10;
	for (int n1 = itc_len_num(num3); n1 > 0; n1--) {
		if (num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1) > result)
			result = num3 % itc_pow(10, n1) / itc_pow(10, n1 - 1);
	}
	return result;
}

int itc_min_num(long long num)
{
    if(num < 0)
    {
        num = num * (-1);
    }
    long long minnum = num % 10;
    long long counter;
    int len = itc_len_num(num);
    for(int i = 0; i < len; i++)
    {
        counter = num % 10;
        if(counter < minnum)
        {
            minnum = counter;
        }
        num = num / 10;
    }
    return(int(minnum));
}
