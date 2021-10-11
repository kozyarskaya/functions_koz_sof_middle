#include "middle.h"

int itc_sum_num(long long number){
    int summ = 0;
    if (number < 0)
        number *= -1;
    while(number > 0){
        summ += number % 10;
        number /= 10;
    }
    return summ;
}
