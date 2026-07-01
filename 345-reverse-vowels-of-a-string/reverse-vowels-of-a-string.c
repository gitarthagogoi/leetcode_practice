#include<stdio.h>
#include<string.h>

char* reverseVowels(char* s) {
    int len = strlen(s);
    int j = len - 1;
    char a;
    for (int i = 0; i <= j; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            a = s[i];
            while(i < j) 
            {
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
                {
                    s[i] = s[j];
                    s[j] = a;
                    j--;
                    break;
                }
                j--;
            }
        }
    }

    return s;
}