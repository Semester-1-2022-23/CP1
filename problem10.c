/*Write a C programme that does the following:
1. asks the user to enter two numbers R and C where the values of R and C are less than 10;
2. asks the user to enter the elements of the matrix (of order R rows * C columns) and
prints it out on the screen;
3. asks the user to enter the elements of the matrix (of order C rows * R columns) and
prints it out on the screen;
4. multiplies the two matrices and displays the result on the screen.
Also check whether a user has provided integers for R and C and if they are a positive number
and less than 10. If the input values for R and C are not positive integer and are not lower than
10, print out the error message.*/
#include<stdio.h>

void print_matrix(int dC, int dR, int dMatrix[dR][dC]){
    for(int i=0; i<dR; i++){
        for (int j = 0; j < dC; j++)
            printf("%d ", dMatrix[i][j]);
        printf("\n");
    }
}

int main(){

    int dR=-1;
    int dC=-1;

    while((dR>=10 || dR<=0) || (dC>=10 || dC<=0)){
        printf("Enter positive integers R and C: ");
        scanf("%d", &dR);
        scanf("%d", &dC);
    }

    int dMatrix1[dR][dC];
    int dMatrix2[dC][dR];

    printf("Enter elements of the first matrix %dx%d: \n", dR, dC);
    for(int i=0; i<dR; i++){
        for (int j = 0; j < dC; j++){
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &dMatrix[i][j]);
        }
    }
    printf("Entered first matrix: \n");
    print_matrix(dC, dR, dMatrix1);

    printf("Enter elements of the second matrix %dx%d: \n", dC, dR);
    for(int i=0; i<dC; i++){
        for (int j = 0; j < dR; j++){
            printf("Enter element %d%d: ", i, j);
            scanf("%d", &dMatrix2[i][j]);
        }
    }
    printf("Entered second matrix: \n");
    print_matrix(dR, dC, dMatrix2);


    int dMatrix[dR][dR];

    for(int i=0; i<dR; i++){
        for(int j=0; j<dC; i++){
            dMatrix[i][j]=
        }
    }

    
    
    
    return 0;
}