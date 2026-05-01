#include <unistd.h>

int seen(char *str, char c, int end)
{
    int i = 0;
    while (i < end)
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    char *str1 = argv[1];
    char *str2 = argv[2];

    if (argc == 3)
    {
    
        while (str1[i])
        {
            if (!seen(str1, str1[i], i))
                write(1, &str1[i], 1);
            i++;
        }
        j = 0;
        while (str2[j])
        {
            if (!seen(str1, str2[j], i) && !seen(str2, str2[j], j))
                write(1, &str2[j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
}