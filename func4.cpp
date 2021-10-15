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

int itc_null_count(long long num)
{
    int counter=0;
    int bw;
    int len=itc_len_num(num);
    for(int i=0; i<len;i++)
    {
        bw=num%10;
        if(bw==0){
            counter=counter+1;
        }
        num=num/10;
    }
    return counter;
}
