#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addition(int a[2][2], int b[2][2], int r[2][2]){for(int i=0;i<2;i++)for(int j=0;j<2;j++)r[i][j]=a[i][j]+b[i][j];}
void subtract(int a[2][2], int b[2][2], int r[2][2]){for(int i=0;i<2;i++)for(int j=0;j<2;j++)r[i][j]=a[i][j]-b[i][j];}
void multiply(int a[2][2], int b[2][2], int r[2][2]){for(int i=0;i<2;i++)for(int j=0;j<2;j++){r[i][j]=0;for(int k=0;k<2;k++)r[i][j]+=a[i][k]*b[k][j];}}
void transpose(int a[2][2], int r[2][2]){for(int i=0;i<2;i++)for(int j=0;j<2;j++)r[j][i]=a[i][j];}
void print(int x[2][2]){for(int i=0;i<2;i++){for(int j=0;j<2;j++)printf("%d ",x[i][j]);printf("\n");}}
int main(){
    int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}},r[2][2];
    addition(a,b,r);printf("addition:\n");print(r);
    subtract(a,b,r);printf("subtraction:\n");print(r);
    multiply(a,b,r);printf("multiplication:\n");print(r);
    transpose(a,r);printf("transpose of a:\n");print(r);
    return 0;

}
