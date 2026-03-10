// WAp and take input from users->,name,city,team.-----score,strike rate,and boundries
#include<stdio.h>
struct player
{
    char name[25], city[30], team[50];
    int score, boundries, jersey_number;
    float strike_rate;
};
int main()
{
    int a, i;
    printf("Enter number of players : ");
    scanf("%d", &a);
    struct player emp[a];
    printf("-----------Enter Employee details----------------\n");
    for (i = 0; i < a; i++)
    {
        printf("Enter player details : %d \n", i + 1);

        getchar();
        printf("player name : ");
        scanf("%[^\n]", &emp[i].name);
        getchar();
        printf("player city name : ");
        scanf("%[^\n]", &emp[i].city);
        getchar();
        printf("player team name : ");
        scanf("%[^\n]", &emp[i].team);

        printf("Player score : ");
        scanf("%d", &emp[i].score);

        printf("Player boundries : ");
        scanf("%d", &emp[i].boundries);

        printf("player Jersey number : ");
        scanf("%d", &emp[i].jersey_number);

        printf("Player Strike_rate : ");
        scanf("%f",&emp[i].strike_rate);
    }
    printf("-----------player Details----------\n");
    for (i = 0; i < a; i++)
    {
        printf("player name :%s\n", emp[i].name);
        printf("player city_name :%s\n", emp[i].city);
        printf("player team_name :%s\n", emp[i].team);
        printf("player score :%d\n", emp[i].score);
        printf("player total boundries :%d\n", emp[i].boundries);
        printf("player Jersey-number:%d\n", emp[i].jersey_number);
        printf("player strike_rate:%.2f\n",emp[i].strike_rate);

    }
    printf("-----------player Details End----------\n");
}
