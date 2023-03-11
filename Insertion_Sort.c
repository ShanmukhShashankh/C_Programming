#include<stdio.h>

void insertionSort(int arr[],int n){
    int i,j,current;

    for(i=1;i<n;i++){
        current = arr[i];
        j=i-1;
        while(arr[j]>current && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
        arr[j+1]=current;
    }
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    insertionSort(arr,n);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
}