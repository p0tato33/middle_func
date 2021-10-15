#include "middle.h"

int itc_rev_num(long long num)
{
    if(num==0)
    {
        return 1;
    }
    int counter=num%10;
    while( counter == 0)
    {
        num=num/10;
        counter=num%10;

    }
    return(itc_len_num(num));
}

int itc_null_count(long long num) { // 8
	int result = 0;
	for (int n1 = itc_len_num(num); n1 > 0; n1--) {
		if (num % itc_pow(10, n1) / itc_pow(10, n1 - 1) == 0)
			result++;
	}
	return result;
}
