#include<stdio.h>

int main(){
    int a = 100;
    printf("\n%d",a);
    printf("\n%10d",a);
    printf("\n%010d",a);
    printf("\n%2d",a);

// %d → Prints normally.
// %10d → Right-aligns within 10 spaces.
// %010d → Pads with leading zeros instead of spaces.
// %2d → Ensures a minimum width of 2 characters.

// Output ---> 
// 100
//        100
// 0000000100

    return 0;
}