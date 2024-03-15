/*
5

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 


*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
      int mat[2000][2000];
      int k=2*n-1;
    if(n>=1 && n<=1000){
    for(int i=0;i<n-1;i++){
        //top
        
        for(int j=0;j<k-(i*2);j++){
            mat[i][j+i]=n-i;
        }

        //right
        for(int j=0;j<k-1-(i*2);j++){
            mat[j+1+i][k-i-1]=n-i;
        }
        //bottom
        for(int j=0;j<k-(i*2);j++){
            mat[k-i-1][j+i]=n-i;
        }
        //left
        for(int j=0;j<k-2-(i*2);j++){
            mat[j+1+i][i]=n-i;
        }
    }
        mat[n-1][n-1]=1;

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}
