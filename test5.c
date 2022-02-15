#include<stdio.h>
int main()
{
    char str1[] = "Hello";
    char*p = "Hello";
    
    //str1 = "Bye"; //[ERROR] assignment to expression with array type.
    //str1 = 'b'; //[ERROR given by text editor] expression must be a modified lvalue.
                  //[ERROR] assignment to expression with array type
    //*str1 = "Bye"; //[WARNING] assignment makes integer from pointer without a cast.
    *str1 = 'b'; //This works as string is not constant. It prints string "bello".
    *(str1+2) = 'p'; //This works as string is not constant. After above change, it prints string "beplo".

    p = "b"; //This works and prints string "b". It overwrites string "Hello".
    //p = 'b'; //[WARNING] assignment makes integer from pointer without a cast.
    //*p = "Bye"; //[WARNING] assignment makes integer from pointer without a cast.
    //*p = 'b'; //[ERROR] doesn't give error while compiling but when program executed, it stopped working.
                //in book, the reason is that string is constant.
    printf("%s\n", str1);
    puts(p);
    return 0;
}