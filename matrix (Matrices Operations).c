#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void oneinput(int); //for input of single matrix
void twoinput(int); //for input of two matrices
void sum(int[][3], int[][3]); //sum of matrices
void diff(int[][3], int[][3]); //difference of matrices
void prod(int[][3], int[][3]); //product of matrices
void trans(int[][3]); //transpose of a matrix
void inver(int[][3]); //inverse of a matrix
int deter(int[][3]); //determinant of a matrix
int**adjoin(int[][3]); //adjoint of a matrix
int**cofac(int[][3]); //cofactor of a matrix
int**minor(int[][3]); //minor of a matrix


int main()
{
  int choice;
  
  printf("3X3 MATRIX OPERATIONS:\n\n");
  printf("Choose one of the following:\n");
  printf("1. Sum\n");
  printf("2. Difference\n");
  printf("3. Product\n");
  printf("4. Transpose\n");
  printf("5. Inverse\n");
  printf("6. Determinant\n");
  printf("7. Adjoint\n");
  printf("8. Cofactor\n");
  printf("9. Minor\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch(choice)
  {
    case 1:twoinput(choice);
           break;
    case 2:twoinput(choice);
           break;
    case 3:twoinput(choice);
           break;
    case 4:oneinput(choice);
           break;
    case 5:oneinput(choice);
           break;
    case 6:oneinput(choice);
           break;
    case 7:oneinput(choice);
           break;
    case 8:oneinput(choice);
           break;
    case 9:oneinput(choice);
           break;
    default:printf("Option not available");
  }
  return 0;
}


void oneinput(int choice) //For input of single matrix
{
  int i, j, a[3][3];

  printf("Enter the numbers in the matrix: ");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Input matrix:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  switch(choice)
  {
    case 4:trans(a);
           break;
    case 5:inver(a);
           break;
    case 6:deter(a);
           break;
    case 7:adjoin(a);
           break;
    case 8:cofac(a);
           break;
    case 9:minor(a);
           break;
  }
}


void twoinput(int choice) //For input of two matrices
{
  int i, j, a[3][3], b[3][3];

  printf("Enter the values of matrix A: ");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("Enter the values of matrix B: ");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }

  printf("Matrix A:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  printf("Matrix B:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }

  switch(choice)
  {
    case 1:sum(a, b);
           break;
    case 2:diff(a, b);
           break;
    case 3:prod(a, b);
           break;
  }
}


void sum(int a[][3], int b[][3]) //Sum of matrices
{
  int i, j, c[3][3];

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("Sum of A and B (A + B):\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}


void diff(int a[][3], int b[][3]) //Difference of matrices
{
  int i, j, c[3][3];

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      c[i][j] = a[i][j] - b[i][j];
    }
  }

  printf("Difference of A and B (A - B):\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}


void prod(int a[][3], int b[][3]) //Product of matrices
{
  int i, j, k, c[3][3];

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      c[i][j]=0;
    }
  }

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      for(k=0; k<3; k++)
      {
        c[i][j] += (a[i][k] * b[k][j]);
      }
    }
  }

  printf("Product of A and B (A * B):\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
}


void trans(int a[][3]) //Transpose of matrices
{
  int i, j, b[3][3];

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      b[j][i]=a[i][j];
    }
  }

  printf("Transpose of matrix:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
}


int deter(int a[][3]) //Determinant of a matrix
{
  int i, det=0;
  
  for(i=0; i<3; i++)
  {
    if(i==0)
    {
      det += (a[0][i]) * ((a[1][i+1] * a[2][i+2]) - (a[1][i+2] * a[2][i+1]));
    }
    if(i==1)
    {
      det -= (a[0][i]) * ((a[1][i-1] * a[2][i+1]) - (a[1][i+1] * a[2][i-1]));
    }
    if(i==2)
    {
      det += (a[0][i]) * ((a[1][i-2] * a[2][i-1]) - (a[1][i-1] * a[2][i-2]));
    }
  }

  printf("Determinant of matrix: %d\n", det);
  return det;
}


int**minor(int a[][3]) //Minors' matrix
{
  int i, j, m, n;
  int**b;

  b = malloc(sizeof(int*) * 3); //Memory allocation to matrix 'b'
  for(i=0; i<3; i++)
  {
    b[i] = malloc(sizeof(int*) * 3);
  }
  
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      if(j==0)
      {
        m = j+1;
        n = j+2;
      }
      else if(j==1)
      {
        m = j-1;
        n = j+1;
      }
      else if(j==2)
      {
        m = j-2;
        n = j-1;
      }

      if(i==0)
      {
        b[i][j] = ((a[i+1][m] * a[i+2][n]) - (a[i+1][n] * a[i+2][m]));
      }
      else if(i==1)
      {
        b[i][j] = ((a[i-1][m] * a[i+1][n]) - (a[i-1][n] * a[i+1][m]));
      }
      else if(i==2)
      {
        b[i][j] = ((a[i-2][m] * a[i-1][n]) - (a[i-2][n] * a[i-1][m]));
      }
    }
  }

  printf("Minor of matrix:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }

  return b;
}


int**cofac(int a[][3]) //Cofactors' matrix
{
  int i, j;
  int**mino;
  
  mino = malloc(sizeof(int*) * 3); //Memory allocation to 'mino' matrix
  for(i=0; i<3; i++)
  {
    mino[i] = malloc(sizeof(int*) * 3);
  }
  mino = minor(a);

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      mino[i][j] = pow((-1), (i+j)) * mino[i][j];
    }
  }

  printf("Cofactor of matrix:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", mino[i][j]);
    }
    printf("\n");
  }

  return mino;
}


int**adjoin(int a[][3]) //Adjoint of a matrix
{
  int i, j;
  int**cof;
  int**adj;
  
  cof = malloc(sizeof(int*) * 3); //Memory allocation to matrix 'cof'
  for(i=0; i<3; i++)
  {
    cof[i] = malloc(sizeof(int*) * 3);
  }
  cof = cofac(a);

  adj = malloc(sizeof(int*) * 3); //Memory allocation to matrix 'adj'
  for(i=0; i<3; i++)
  {
    adj[i] = malloc(sizeof(int*) * 3);
  }

  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      adj[j][i] = cof[i][j];
    }
  }

  printf("Adjoint of matrix:\n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d\t", adj[i][j]);
    }
    printf("\n");
  }

  return adj;
}


void inver(int a[][3]) //Inverse of a matrix
{
  int i, j, det;
  int**inv;
  
  det = deter(a);

  if(det!=0)
  { 
    inv = malloc(sizeof(int*) * 3); //Memory allocation to matrix 'inv'
    for(i=0; i<3; i++)
    {
      inv[i] = malloc(sizeof(int*) * 3);
    }
    inv = adjoin(a);

    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        inv[i][j] = (1/det) * inv[i][j];
      }
    }

    printf("Inverse of matrix:\n");
    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        printf("%d\t", inv[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("As determinant is 0, so inverse of matrix doesn't exist");
  }
  
  /*for(i=0; i<3; i++) //For freeing the memory allocated to matrix 'inv'
  {
    free(inv[i]);
  }
  free(inv);*/
}