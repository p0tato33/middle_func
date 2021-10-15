#include "middle.h"

void itc_num_print(int num) { 
	cout << num << endl;
}

int itc_len_num(long long num)
{
    int counter=0;
    if(num<0)
    {
        num=num*(-1);
    }
    if(num==0)
    {
        return 1;
    }
    while(num>0)
    {
        counter=counter+1;
        num=num/10;
    }
    return (int(counter));
}
