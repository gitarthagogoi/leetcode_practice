bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) 
{
    if (n==0)
    {
        return TRUE;
    }

    if(flowerbedSize == 1 && flowerbed[0] == 0)
    {   
        flowerbed[0] = 1;
        n--;
    }

    if (flowerbed[0]==0 && flowerbedSize > 1)
    {
        if (flowerbed[1]==0)
        {
            flowerbed[0] = 1;
            n--;
        }
    }

    for (int i = 1; i < flowerbedSize; i++)
    {
        if (i < flowerbedSize-1 && flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0 )
        {
            flowerbed[i] = 1;
            n--;
        }
        if(flowerbed[i]==0 && flowerbed[i-1]==0 && i == flowerbedSize-1)
        {
            flowerbed[i] = 1;
            n--;
        }
    }

    if (n <= 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}