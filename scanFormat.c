#include<stdio.h>

int main(){
    int a,b,x;
    x = scanf("%d %d", &a, &b);
    printf("%d", x);
    // Output : 2

    return 0;
}

// If input : 10 'A' then Output : 1
// If input : 'A' 10 then Output : 0
// scanf() returns the number of successfully scanned inputs.
// If all inputs are valid, it returns the total number of matched inputs.
// If an input does not match the format specifier, scanning stops immediately, and scanf() returns the count of successfully read inputs before the mismatch.


