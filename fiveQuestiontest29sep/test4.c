// WAP to search a number in list using linear search.
#include<stdio.h>
int main(){
    int list[10],ele,i,f=0;
    printf("Enter numbers:\n ");
    for(i=0;i<10;i++){
        scanf("%d",&list[i]);
    }
    printf("Enter a number to check in list  : ");
    scanf("%d",&ele);
  for(i=0;i<10;i++){
      if(ele==list[i])
    {
       f=1;
    }
    
  }
  if(f==1){
    printf("no is found");
  }
  else{
    printf("no is not found");
  }

    
}