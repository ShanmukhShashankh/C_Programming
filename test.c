#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int prime;
    int* ptr;
    int k=0;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    for(int i=2; i<=n; i++){
        prime = 1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime = 0;
                break;
            }
            else{
                prime = 1;
            }
        }
        if(prime == 1){
            ptr[k]=i;
            k++;
        }
    }
    for(int i=0; i<k; i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}