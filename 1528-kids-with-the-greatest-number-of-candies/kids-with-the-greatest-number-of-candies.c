/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    int large = candies[0];
    *returnSize = candiesSize;

    for(int i = 0; i < candiesSize; i++)
    {
        if(large <= candies[i])
        {
            large = candies[i];
        }
    }
    
    for (int i = 0; i < candiesSize; i++)
    {
        candies[i] = candies[i] + extraCandies;
    }

    bool *result = malloc(candiesSize * sizeof(bool));

    for (int i = 0; i < candiesSize; i++)
    {
        if(candies[i] >= large)
        {
            result[i] = TRUE;
        }
        else
        {
            result[i] = FALSE;
        }
    }

    return result;
}