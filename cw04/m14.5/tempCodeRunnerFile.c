    int k = n * 2, g = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k - 1; j++)
        {
            printf("*");
        }
        k -= 2;

        // gap
        if (i != 0)
        {
            for (int l = 0; l < g; l++)
            {
                printf(" ");
            }