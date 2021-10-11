#include "middle.h"

int itc_rev_num(long long number){
    int kol = 0;
    long long new_num = 0;
    if (number < 0)
        number *= -1;
    while(number > 0){
        new_num = new_num * 10 + number % 10;
        number /= 10;
    }
    return itc_len_num(new_num);
}

