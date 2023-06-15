#include stdio.h;
/**
 * main - A program that prints the size of diffrent computer types
 * Return 0 (Success)
 */
int main(void)
{       
        char a;
        int b;
        long int c;
        long long int d;
        float f;
        
pritf("Size of a char: %1u byte(s)\n",(unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
pritf("Size of a long int: %1u byte(s)\n",(unsigned long)sizeof(c));
pritf("Size of a long long int: %1u byte(s)\n",(unsigned long)sizeof(d));
pritf("Size of a float: %1u byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
