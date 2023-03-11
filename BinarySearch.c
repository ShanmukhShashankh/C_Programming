#include<stdio.h>

void selectionSort(int arr[],int n){
    int i,j;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j];
        }
    }
}

int binarySearch(int arr[],int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key)
            return mid;

        else if(arr[mid]>key)
            e=mid-1;
        
        else if(arr[mid]<key)
            s=mid+1;
    }

    return -1;
}   

int main(){
    int i,n,key;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    selectionSort(arr,n);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    printf("\n");
    scanf("%d",&key);

    printf("%d",binarySearch(arr,n,key));
    return 0;
}

