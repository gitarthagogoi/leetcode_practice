#include<stdio.h>
#include<string.h>
char* gcdOfStrings(char* str1, char* str2)
{
    char res1[strlen(str1)+strlen(str2)+1];
    char res2[strlen(str2)+strlen(str1)+1];

    strcpy(res1, str1);
    strcpy(res2, str2);

    strncat(res1, str2, strlen(str2));
    strncat(res2, str1, strlen(str1));

    int len = strlen(res1);
    for (int i = 0; i < len; i++)
    {
        if(res1[i]!=res2[i])
        {
            return "";
        }
    }

    int a = strlen(str1);
    int b = strlen(str2);

    while (b != 0 )
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    char *num = malloc(a+1);
    strncpy(num, str1, a);
    num[a] = '\0';
    return num;
}