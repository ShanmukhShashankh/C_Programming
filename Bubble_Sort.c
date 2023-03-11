#include<stdio.h>

void bubbleSort(int arr[],int n){
    int i,counter=1;

    while(counter<n){
        for(i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                arr[i]=arr[i]+arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
            }
        }
        counter++;
    }
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    bubbleSort(arr,n);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
}