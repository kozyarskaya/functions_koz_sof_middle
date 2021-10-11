#include "middle.h"

int itc_max_num(long long number){
    int maxx = 0, ch;
    if (number < 0)
        number *= -1;
    while(number > 0){
        ch = number % 10;
        if (maxx < ch){
            maxx = ch;
        }
        number /= 10;
    }
    return maxx;
}
