/*
    Write definition of det() using Gauss Elimination method
*/

#include<stdio.h>
#define MAX 100
double det(int, double[][MAX]); //calculates determinant of a matrix
void inverse_calc(int, double[][MAX]); //calculates inverse of a matrix
void rowtransform(int, double[][MAX], double[][MAX], int, int); //performs elementary row transformations on the matrix
void rowswap(int, double[][MAX], double[][MAX], int, int); //swaps the rows to make the matrix able for applying row transformations
int main() {
    int order;
    printf("Enter the order of square matrix: ");
    scanf("%d", &order);
    double a[order][order];
    printf("Enter the numbers in the matrix: ");
    for(int i=0; i<order; i++) {
        for(int j=0; j<order; j++) {
            scanf("%Lf", &a[i][j]);
        }
    }
    inverse_calc(order, a);
    return 0;
}

double det(int order, double a[][order]) { //calculates determinant of a matrix
    return -1;
}

void inverse_calc(int order, double a[][order]) { //calculates inverse of a matrix
    int i, j;
    double ident[order][order];
    for(i=0; i<order; i++) {
        for(j=0; j<order; j++) {
            if(i==j)
                ident[i][j] = 1.0;
            else
                ident[i][j] = 0.0;
        }
    }
    if(det(order, a) == -1) { //To be changed to value 0 and NOT -1
        int status=0;
        for(i=0; i<order; i++) {
            if(i!=0)
                status=-1;
            if(a[i][i]==0) {
                rowswap(order, a, ident, i, status);
            }
        }
        for(i=0; i<order; i++) {
            double diagonalElement; //change
            diagonalElement = a[i][i];
            for(int k=0; k<order; k++) {
                a[i][k] /= diagonalElement;
                ident[i][k] /= diagonalElement;
            }
            int flag=0;
            for(int k=0; k<order; k++) {
                if(k!=i) {
                    if(flag==0) {
                        if(a[i][k]!=0) {
                            rowtransform(order, a, ident, i, k);
                        }
                        flag=-1;
                    }
                    else {
                        for(int n=0; n<k; n++) {
                            if(n!=i) {
                                if(a[k][n]!=0) {
                                    rowtransform(order, a, ident, k, n);
                                }
                            }
                        }
                        if(a[i][k]!=0) {
                            rowtransform(order, a, ident, i, k);
                        }
                    }
                }
            }

        }
        printf("Inverse of matrix using Gauss Jordan Method:\n");
        for(i=0; i<order; i++) {
            for(j=0; j<order; j++) {
                ident[i][j] /= a[i][i];
                printf("%Lf\t", ident[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Inverse of matrix doesn't exist as determinant is 0");
    }
}

void rowtransform(int order, double matrix[][order], double ident[][order], int i, int k) { //performs elementary row transformations on the matrix
    double temp; 
    temp = matrix[i][k] / matrix[k][k];
    if(temp!=0) {
        for(int index=0; index<order; index++) {
            matrix[k][index] *= temp;
            matrix[i][index] -= matrix[k][index];
            ident[k][index] *= temp;
            ident[i][index] -= ident[k][index];
        }
    }
}

void rowswap(int order, double matrix[][order], double ident[][order], int i, int flag) { //swaps the rows to make the matrix able for applying row transformations
    int temp=0;
    for(int index=0; index<order; index++) {
        if(index!=i) {
            if(matrix[index][i]!=0) {
                if(flag==-1 && matrix[i][index]!=0) {
                    for(int j=0; j<order; j++) {
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[index][j];
                        matrix[index][j] = temp;
                        temp = ident[i][j];
                        ident[i][j] = ident[index][j];
                        ident[index][j] = temp;
                    }
                    break;
                }
                else {
                    for(int j=0; j<order; j++) {
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[index][j];
                        matrix[index][j] = temp;
                        temp = ident[i][j];
                        ident[i][j] = ident[index][j];
                        ident[index][j] = temp;
                    }
                    break;
                }
            }
        }
    }
}

