#include "middle.h"

int itc_mirror_count(long long number){
    int kol;
    if (number > 0){
    for (long long i = 1; i <= number; i++){
    //bool r = itc_mirror_num(i);
    if (itc_mirror_num(i))
        kol++;
        }
      }
    else{
    for (long long i = number ; i <= 1; i++){
    //bool r = itc_mirror_num(i);
    if (itc_mirror_num(i)){
        kol++;
    }
    }
    }
    return kol;
}
