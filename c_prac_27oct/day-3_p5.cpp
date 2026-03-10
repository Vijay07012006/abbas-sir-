#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],i,len1=0,len2=0,c=0;
    printf("Enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
     printf("Enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(i=0;str1[i]!='\0';i++){
        len1++;
    }
    for(i=0;str2[i]!='\0';i++){
        len2++;
    }
    if(len1!=len2){
        printf("Both string are not equal\n");
    }
    else{
        for(i=0;i<len1;i++){
            if(str1[i]!=str2[i]){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("Both string are equal\n");
        }
        else{
            printf("Both string are not equal\n");
        }
    }
}