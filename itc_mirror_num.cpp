#include "middle.h"

bool itc_mirror_num(long long number){
    if (number == 0){
        return true;
    }
    else{
        if (number < 0)
            number *= -1;
        int num = number, new1 = 0;
        while(number > 0){
            int ch = number % 10;
            new1 = new1 * 10 + ch;
            number /= 10;
        }
        if (num == new1)
            return true;
        return false;
    }
}
