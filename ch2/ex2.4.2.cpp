// working with pointers and references
#include <cstdio>
int main(){
    std::printf("We're going to initialize some variables and see what happens\n");

    int i = -1;
    int &ri = i;
    int *pi = &i;

    std::printf("This is i = %d, &ri = %d, *pi = %d\n", i, ri, *pi);
    return 0;
}
