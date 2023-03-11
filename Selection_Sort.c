#include<stdio.h>

void selectionSort(int arr[],int n){
    int i,j;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}

int main(){
    int i,n;
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    selectionSort(arr,n);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}