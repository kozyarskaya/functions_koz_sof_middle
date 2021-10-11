#include "middle.h"

int itc_min_num(long long number){
    if (number == 0){
        return 0;
    }
    else{
    int minn = 10, ch;
    if (number < 0)
        number *= -1;
    while(number > 0){
        ch = number % 10;
        if (minn > ch){
            minn = ch;
        }
        number /= 10;
    }
    return minn;
    }
}
