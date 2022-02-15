#include<stdio.h>
#include<string.h>
#include<conio.h>

int main() {
	int a[] = {1,2,3,4,5};
	int *ptrint;
	ptrint = a;
	for(int i=0; i<5; i++) {
		printf("%d:%d ", *(ptrint + i), ptrint[i]); // ptrint[i] = *(ptrint + i)
	}
	printf("\n%d %d %d\n\n", ptrint, a, &a[0]); //address of base element of array


	char c[] = "hello!";
	char *ptrchar;
	ptrchar = c;
	printf("%c\n", ptrchar[5]);
	printf("%s\n", ptrchar);
	for(int i=0; i<strlen(c); i++) {
		printf("%c:%c ", ptrchar[i], *(ptrchar + i)); // ptrchar[i] = *(ptrchar + i)
	}
	printf("\n%d %d %d\n", ptrchar, c, &c[0]); //address of base element of array
	printf("%d %d\n", sizeof(ptrint), sizeof(ptrchar));


	char arr[] = "goodbye!"; //string literal stored in the space of array arr[]
	arr[3] = 'r';
	printf("%s\n", arr);

	// char *arrconst = "goodbye!"; //string literal stored as constant string during compilation
	// // arr[3] = 'r'; //invalid because string literal is constant string
	// printf("%s", arrconst);


	int B[2][4] = {{1,2,3,4}, {10,20,30,40}};
	int (*p)[4] = B;
	printf("%d %d %d %d %d\n", B, &B[0], B[0], *B, &B[0][0]);


	int var = 5;
	int *varptr;
	varptr = &var;
	printf("%d %d\n", var, *varptr);
	printf("%d %d\n", &var, varptr);
	printf("%d\n", &varptr);
	getch();
	return 0;
}