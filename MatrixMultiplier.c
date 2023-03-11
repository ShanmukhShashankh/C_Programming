#include<stdio.h>
#include<stdbool.h>
#include<limits.h>


int main(){
    int m,n,o,p;

    scanf("%d %d %d %d",&m,&n,&p,&o);

    if(p==n){
        int arr[m][n];
        int arr1[n][o];
        int arr2[m][o];

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&arr[i][j]);
            }
        }

        printf("\n");

        for(int i=0; i<n; i++){
            for(int j=0; j<o; j++){
                scanf("%d",&arr1[i][j]);
            }
        } 

        for(int i=0; i<m; i++){
            for(int j=0; j<o; j++){
                arr2[i][j] = 0;
                for(int k=0; k<n; k++){
                    arr2[i][j] += arr[i][k]*arr1[k][j];
                }
            }
        }


        for(int i=0; i<m; i++){
            printf("[ ");
            for(int j=0; j<o; j++){
                printf("%d ",arr2[i][j]);
            }
            printf(" ]");
            printf("\n");
        }
    }
    else{
        printf("Invalid Matrices");
    }

    return 0;
}