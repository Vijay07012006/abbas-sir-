// // WAP to check givin string is palindrome or not using function.
// #include <stdio.h>
// #include <string.h>

// void palind(char str[]) {
//     int i, len,k=0;
//     char rev[100];
//     str[strcspn(str, "\n")] = '\0';
//     len = strlen(str);
//     for(i=len-1;i>=0;i--){
//         rev[k]=str[i];
//         k++;
//     }
//     rev[k] = '\0';
//     if (strcmp(str, rev) == 0) {
//         printf("String is palindrome.\n");
//     } else {
//         printf("String is not palindrome.\n");
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter a string : ");
//     fgets(str, sizeof(str), stdin);
//     palind(str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int check(char str[])
{
    int i, l, n = 0;
    char revstr[50];
    str[strcspn(str, "\n")] = '\0';
    l = strlen(str);
    for (i = l - 1; i >= 0; i--)
    {
        revstr[n] = str[i];
        n++;
    }
    revstr[n] = '\0';
    if (strcmp(str, revstr) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char str[50];
    int res;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    res = check(str);
    if (res == 0)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
}