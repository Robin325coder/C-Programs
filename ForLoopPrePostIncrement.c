/* Understanding pre-increment and post-increment operator in for()
   loop update expression part.
*/
#include<stdio.h>
int main() {
	for(int i=0; i<5; i++) {
		printf("%d ", i);
	}

	printf("\n");

	for(int j=0; j<5; ++j) {
		printf("%d ", j);
	}
	
	printf("\n");

	int i = 0;
	int j = i;
	while(j < 5) {
    		printf("%d ", i); //0 1 2 3 4
    		j = ++i;
	}
	
	printf("\n");
	
	int a = 0;
	int b = a;
	while(b < 5) {
    		printf("%d ", a); //0 1 2 3 4 5
    		b = a++;
	}
	return 0;
}