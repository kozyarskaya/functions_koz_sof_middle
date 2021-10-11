#include "middle.h"

long long itc_oct_num(long long number){

    long long new_num = 0, pow_of_ten = 1;
    if (number < 0)
        return (itc_oct_num(number * -1))* -1;
    while(number > 0){
        new_num += number % 8 * pow_of_ten;
        number /= 8;
        pow_of_ten *= 10;
    }
    return new_num;
}
