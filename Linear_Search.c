#include<stdio.h>

int linearSearch(int arr[], int n, int key){
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==key)
            return i;
    
    return -1;
}

int main(){
    int i;
    int n,key;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    scanf("%d",&key);

    printf("%d",linearSearch(arr,n,key));

}