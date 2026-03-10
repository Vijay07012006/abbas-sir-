// #include<stdio.h>
// int main(){
//     int n1=01,n2=1,n3,i,n;
//     printf("Enter the number of terms\n");
//     scanf("%d",&n);
//     printf("%d\n%d\n",n1,n2);
//     for(i=1;i<n;i++){
//         n3=n1+n2;
//         printf("%d\n",n3);
//         n1=n2;
//         n2=n3;  
//     }
// }

#include<stdio.h>
int main(){ 
    int n1=0,n2=1,n3,i,n,j; 
    printf("Enter the number of terms : "); 
    scanf("%d",&n); 
    printf("%d\n%d\n",n1,n2); 
    for(i=1;i<n;i++){ 
        n3=n1+n2; 
        for(j=1;j<=i;j++){ 
            printf("%d ",n3);
        }
        n1=n2; 
        n2=n3; 
        printf("\n");  
    } 
}   