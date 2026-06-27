#include<stdio.h>
#include<string.h>

char * mergeAlternately(char * word1, char * word2){
    int m = strlen(word1);
    int n = strlen(word2);

    char *result = malloc(m+n+1);
    //result[0] = '\0';

    int i = 0;
    int j = 0;
    int size = 0;
    while(i < m || j < n)
    {   
        if(i < m)
        {
            //size = strlen(result);
            result[size++] = word1[i];
        }
        if(j < n)
        {
            //size = strlen(result);
            result[size++] = word2[j];
        }
        i++;j++;
    }
    //size = strlen(result);
    result[size] = '\0';
    return result;
}