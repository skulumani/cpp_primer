#include "Chapter6.h"

void swap_pointer(int *p1, int *p2){
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
}


