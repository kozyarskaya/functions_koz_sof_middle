#include "middle.h"

int itc_rev_covert_num(long long number, int ss){

    long long new_num = 0, pow_of_ss = 1;
    if (number < 0)
        return (itc_rev_covert_num((number * -1), ss))* -1;
    while(number > 0){
        new_num += number % 10 * pow_of_ss;
        number /= 10;
        pow_of_ss *= ss;
    }
    return new_num;
}
