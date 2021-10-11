#include "middle.h"

int itc_rev_bin_num(long long number){

    long long new_num = 0, pow_of_two = 1;
    if (number < 0)
        if (number < 0)
        return (itc_rev_bin_num(number * -1))* -1;
    while(number > 0){
        new_num += number % 10 * pow_of_two;
        number /= 10;
        pow_of_two *= 2;
    }
    return new_num;
}
