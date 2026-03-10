// //WAP to copy one string to another string using function pointer.
// #include<stdio.h>
// void xstrcpy(char *target,char *str){
//     while(*str!='\0'){
//         *target=*str;
//         target++;
//         str++;
//     }
//     *target='\0';

// }
// int main(){
//     char source[100],target[100],i;
//     printf("Enter a string : ");
//     fgets(source,sizeof(source),stdin);
//     xstrcpy(target,source);
//     printf("orignal string :%s\n",source);
//     printf("copied string :%s\n",target);
// }

#include <stdio.h>

void xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
}
int main()
{
    char source[100], target[100];
    printf("Enter a string : ");
    fgets(source, sizeof(source), stdin);
    xstrcpy(target, source);
    printf("Original string :%s",source);
    printf("Copied string :%s",target);

}