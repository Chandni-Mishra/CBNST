#include<stdio.h>
int main(){
    printf("Enter row in a matrix:- ");
    int n;
    scanf("%d",&n);
    float arr[n][n+1];
    printf("Enter Augmented Matrix\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n+1;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    // Coverting to diagonal form
    float ratio = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i != j){
                ratio = arr[j][i] / arr[i][i];
                for(int k = 0;k<n+1;k++){
                    arr[j][k] = arr[j][k] - (ratio * arr[i][k]);
                }
            }
        }
    }
    // printing diagonal form of matrix
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n+1;j++){
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }
    // printing Answer
    for(int i = 0;i<n;i++){
        printf("%f\n",arr[i][n] / arr[i][i]);
    }
    return 0;
}
