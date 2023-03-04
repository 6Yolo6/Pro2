#include<stdio.h>
#include<string.h>

int main1525()
{
    int i, j, l, flag;
    char str[105] = { 0 };
    scanf("%s", str);
    l = strlen(str);
    for (i = 1; i <= l; i++)
    {
        flag = 0;
        if (l % i == 0)
        {
            for (j = i; j < l; j++)
            {
                if (str[j % i] != str[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("%d", i);
                break;
            }
        }
    }
    /*int len, i, j, t, k;
    char a[100]; char c[100];
    scanf("%s", &a);
    len = strlen(a);
    for (i = 1; i <= len / 2; i++)
    {
        strncpy(c, a, i);
        for (j = 0; j < len; j += i)
        {
            t = 0;
            for (k = 0; k < i; k++)
            {
                if (c[k] == a[k + j]) 
                    t++; 
                else 
                    k = i + 10; 
            }
            if (k != i)  
                j = len + 10; 
        }

        if (j >= len && j < len + 10) 
        { 
            printf("%d", t);
            break; 
        }
    }
    if (i > len / 2)
        printf("%d\n", len);*/
    return 0;
}