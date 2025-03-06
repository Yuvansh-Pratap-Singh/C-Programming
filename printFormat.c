#include<stdio.h>

int main(){
    int x = printf("KG");
    printf("%d ",x);

	int a = printf("Hello");
	printf("%d ",a);

    printf("%d %d",printf(" Hello "), printf("World "));

    return 0;
}


// printf() returns the number of characters printed.
// Nested printf() calls execute inside-out.
// The output may look confusing because printf() prints first and then returns the character count.
