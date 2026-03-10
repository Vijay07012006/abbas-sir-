//WAP to take coordinates of a point as input and find its quadrant.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter X-cordinate : ");
    scanf("%d",&x);
    printf("Enter Y-cordinate : ");
    scanf("%d",&y);
    if(x>0){
        if(y>0){
            printf("first  quadrant\n");
        }
        else{
            printf("forth quadrant\n");
        }
    }
    else if(x<0){
        if(y>0){
            printf("second  quadrant\n");
        }
        else{
            printf("Third  quadrant\n");
        }
    }
    else if(x==0 & y>0){
        printf("postive Y-axis\n");
    }
    else if(y==0 & x>0){
        printf("postive X-axis\n");
    }
    else if(x==0 & y<0){
        printf("Negative Y-axis\n");
    }
    else if(y==0 & x<0){
        printf("Negative X-axis\n");
    }
    else{
        printf("Point is on origin\n");
    }
}