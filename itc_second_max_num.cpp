#include "middle.h"

int itc_second_max_num(long long number){
    if (itc_len_num(num) == 1){
        return -1;
    }
    if (number < 0)
        number *= -1;
    int second_max = 0, maxx = 0;
    if (itc_len_num(number) == 1){
        second_max = number;
        maxx = number;
    }
    else{
    while(number > 0){
        int ch = number % 10;
        if (ch >= maxx){
            second_max = maxx;
            maxx = ch;
        }
        if (ch >= second_max && ch < maxx){
            second_max = ch;
        }
        number /= 10;
    }
    return second_max;
    }
    return -1;
}

