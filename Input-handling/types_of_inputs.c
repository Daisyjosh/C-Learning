#include <stdio.h>

int main(){
    // %d - reads integer value
    printf("Integers\n");
    int age;
    scanf("%d",&age);
    printf("%d",age);
    // Types of inputs
    // i) 23abc = 23
    // ii)    23 = 23
    // iii) -23 = 23
    // iv) abc - fails random value is printed - undefined behaviour
    // after entering the input we press enter
    // integer is got by the scanf and the enter "/n" is present in the input buffer.

    // %c - reads exactly one character
    printf("Character\n");  
    char ch;
    scanf(" %c",&ch);
    printf("%c",ch);
    // does not skip whitespaces treats that as a character
    // newline is also considered as character
    // "%c" gets newline if present in the input buffer
    // " %c" tells scanf to skip any leading whitespaces, including spaces, tabs, and newlines, before reading a character.

    // %s - reads string input
    // tells scanf to read a sequence of non-whitespace characters and store them in a character array, followed by a special character called null terminator('\0')
    
    printf("Strings\n");
    char name[20];
    scanf("%19s",name);
    // we use name instead of &name because the array name provides a pointer to its first element in the context.
    // we use %19s instead %s to limit the input to 19 characters leaving room for '\0' in the 20 element array. - to prevent from undefined behavior
    // %s stops at whitespace. It reads first half and adds null terminator and leaves the separating space and second half of the input unread in the input stream.
    // if we want to read full sentence we need to use fgets().
    // automatically skips leading space
    printf("%s\n",name);

    // %f reads fload value
    // tells scanf to read a floating point number and convert it into a float value.
    // precision for float by default is 6 decimal points
    printf("Float\n");
    float value;
    scanf("%f",&value);
    printf("%f\n",value);
    // difference between %f and %lf
    // %f expects float and %lf expects doubt

    // %u - unsigned integer
    printf("Unsigned Integer.\n");
    unsigned int n;
    scanf("%u",&n);
    printf("%u\n",n);

    // %lf and %lld - larger integers.
    // %lf - long and %llf - long long
    // %e - expects float and scientific values
    // %g - also expects float value and chooses between fixed point and scientific notation to produce compact representation, removing unnecessary trailing zeros.
    // %f,%e,%g - expects float *
    // %lf,%le,%lg - expects double *
    // %p - pointers
    // %x - hexadecimal

    // scanf returns number of successfully assigned input items.

    // scansets [] lets us specify which character to read
    // scanf("%[^\n]",name); - this scanset reads until a newline is detected.
    // it does not skip the leading whitespaces and it does not consume the newline that stops the conversion.

    // scanf - reads and converts input according to the format string.
    // useful for simple, structured input, but leftover characters and conversion failures require care.

    // getchar - reads one character at a time from stdin,
    // It return type is int so it can represent every unsigned char value plus the special value EOF.

    // fgets - reads a line or a bounded portion of input into a character array.
    // often preferable for robust input because you can validate the complete line yourself.

    // fgets() - When space is available, fgets() reads through the newline and stores it in the array, followed by '\0'.
    // fgets() retains the newline if it reads one before reaching its size limit. if the buffer fills first, the newline may remain unread.
    
    // getchar - reads one character from stdin and returns it as an int
    
    return 0;

}