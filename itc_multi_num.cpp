#include "middle.h"

long long itc_multi_num(long long number){
    if (number == 0){
        return 0;
    }
    else{
    int product = 1;
    if (number < 0)
        number *= -1;
    while(number > 0){
        product *= number % 10;
        number /= 10;
    }
    return product;
    }
    return -1;
}
