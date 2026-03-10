// C & DSA Questions for task:-
/*
1.WAP to create a stack of five elements.Perform PUSH , POP And Traverse Operations.
*/
#include<stdio.h>
#define N 5
int main(){
    int stack[N],i,item,ch=0,top=-1;
    while(ch!=4){
        printf("1-> PUSH\n");
        printf("2-> POP\n");
        printf("3-> TRAVERSE\n");
        printf("4-> EXIT\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            if(top==N-1){
                printf("OVERFLOW\n");
            }
            else{
                top=top+1;
                printf("Enter a Element to insert : ");
                scanf("%d",&item);
                stack[top]=item;
            }
            break;
            case 2:
            if(top==-1){
                printf("UNDERFLOW\n");
            }
            else{
                item=stack[top];
                printf("Deleted Item=%d\n",item);
                top=top-1;
            }
            break;
            case 3:
            if(top==-1){
                printf("Stack is Empty\n");
            }
            else{
                printf("Elements of stack\n");
                for(i=top;i>=0;i--){
                    printf("%d\n",stack[i]);
                }
            }
            break;
            case 4:
            break;
            default :
            printf("choice not valid\n");
            break;
        }

    }
}
