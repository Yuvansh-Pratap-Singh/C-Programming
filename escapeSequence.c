#include<stdio.h>

int main(){
    printf("Window\b\bing\rF");
    // Output : Finding


    // \b  - Backspace (Deletes the previous character)
    printf("Hello\b!\n");  // Output: Hell!

    // \n  - Newline (Moves cursor to the next line)
    printf("Hello\nWorld\n");  
    // Output:
    // Hello
    // World

    // \r  - Carriage Return (Moves cursor to the beginning of the line)
    printf("Hello\rWorld\n");  // Output: World

    // \t  - Horizontal Tab (Inserts a tab space)
    printf("Hello\tWorld\n");  // Output: Hello    World

    // \"  - Double Quote (Prints a " inside a string)
    printf("She said, \"Hello!\"\n");  
    // Output: She said, "Hello!"

    // \'  - Single Quote (Prints a ' inside a string)
    printf("It\'s a beautiful day\n");  
    // Output: It's a beautiful day

    // \\  - Backslash (Prints a backslash \)
    printf("C:\\Users\\Admin\n");  
    // Output: C:\Users\Admin

    // \a  - Alert/Bell (Produces a beep sound)
    printf("\a");  // (You hear a beep sound if supported)

    // \v  - Vertical Tab (Moves cursor down, similar to newline)
    printf("Hello\vWorld\n");  
    // Output (Varies by system):
    // Hello
    //      World

    // \f  - Form Feed (Moves to a new page, mainly used in printers)
    printf("Hello\fWorld\n");  
    // Output (Depends on system behavior)

    return 0;
}

