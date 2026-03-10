//WAP to find the duplicate character in the string.
//wap to find the short name of full name like - pushkar sing -> p.s

#include<stdio.h>
int main(){
    char str[100],c,i,count;
    printf("Enter a string : \n");
    fgets(str,sizeof(str),stdin);
    printf("Enter a character :");
    scanf("%s",c); 
    for(i=0;str[i]!=0;i++){
        if(str[i]!=c){
            continue;
        }
        else{
            count++;
           
        }
    }
     printf("%d %s",count, str[i]);
}