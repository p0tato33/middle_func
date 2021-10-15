#include "middle.h"
int itc_second_max_num(long long num)
{
    num = itc_abs(num);
    int maxi = -1, sndmax = -2, b = itc_len_num(num);
    for (int i = 0; i < b; i++){
        if (num % 10 > maxi){
            sndmax = maxi;
            maxi = num % 10;
        }
        else if((num % 10 <= maxi) && (num % 10 > sndmax)){
            sndmax = num % 10;
        }
        num = num / 10;
    }
    return (sndmax);
}

int itc_second_simple_max_num(long long num)
{
    num = itc_abs(num);
    if (num < 10){
        return -1;
    }
    int check = 0, max1 = 0, max2 = 0;
    while (num > 0){
        if (num % 10 >= max1){
            max2 = max1;
            max1 = num % 10;
        }
        if ((num % 10 < max1) && (num % 10 > max2)){
            max2 = num % 10;
        }
        num = num / 10;
    }
    if (max1 == max2){
        return -1;
    }
    return (max2);
}
