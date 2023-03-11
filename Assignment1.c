/*Ramesh works for a abc company and has to work with customer data and one of his task to find the unique letter in a customer name to make it into a unqiue id*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int main(){
  int n,k=0;
  char s[100],r[100];
  int t[100];
  
  printf("Enter the string: ");
  gets(s);
  n=strlen(s);

  for(int i=0;i<n;i++)
    s[i]=tolower(s[i]);
  
  for(int i=0; i<n; i++){
    bool exists = false;
    for(int j=0; j<k; j++){
      if(r[j]==s[i]){
        exists=true;
        break;
      }
    }
    if(exists==false){
      if(s[i]!=' '){
        r[k]=s[i];
        k++;
      }
    }
  }

  printf("Unique Letters: ");
  for(int i=0; i<k; i++)
    printf("%c ",r[i]);

  printf("\n");
  
  for(int i=0; i<k; i++){
    int count=0;
    for(int j=0; j<n; j++){
      if(s[j]==r[i]){
        count++;
      }
    }
    if(r[i]!=' '){
      printf("Count of %c is %d \n",r[i],count);
      t[i] = count;
    }
  }

  printf("UserID: ");
  for(int i=0; i<k; i++)
    if(r[i]!=' ')
      printf("%c",r[i]);
  printf("@");
  for(int i=0; i<4; i++)
    printf("%d",t[i]);
  
  printf("\n");
  
  return 0;
}