/*Only solves pow(x, 3.0)-4.0*x-0.0=0*/
#include<stdio.h>
#include<math.h>
int main() {
    double x = 0.0;
    double y = pow(x, 3.0)-4.0*x-9.0;
    double root, a, b;
    if(y<0) {
        while(y<0) {
            x++;
            y = pow(x, 3.0)-4.0*x-9.0;
            if(y>0)
                break;
        }
        a = x-1;
        b = x;
        root = (a + b)/2.0;
        printf("%Lf\n", root);
        for(int i=0; i<11; i++) {
            y = pow(root, 3.0)-4.0*root-9.0;
            if(y<0) {
                a = root;
                root = (a + b)/2.0;
                printf("%Lf\n", root);
            }
            else {
                b = root;
                root = (b + a)/2.0;
                printf("%Lf\n", root);
            }
        }
    }
    return 0;
}