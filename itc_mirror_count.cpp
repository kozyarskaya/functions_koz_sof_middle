#include "middle.h"

int itc_mirror_count(long long number){
    int kol;
    if (number > 0){
    for (int i = 1; i <= number; i++){
    bool r = itc_mirror_num(i);
    if (r)
        kol++;
        }
      }
    else{
    for (int i = number ; i <= 1; i++){
    bool r = itc_mirror_num(i);
    if (r){
        kol++;
    }
    }
    }
    return kol;
   return -1;
}
