#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    int k;
    char *str1 = argv[1];
    char *str2 = argv[2];

    if (argc == 3)
    {
        while (str1[i])
        {
            j = 0;

            // search str1[i] inside str2
            while (j < i)
            {
                if (str1[i] == str1[j])
                    break;
                j++;
            }
            if (j == i)
            {
                k = 0;
                while (str2[k])
                {
                    if (str1[i] == str2[k])
                    {
                        write (1, &str1[i], 1);
                        break;
                    }
                    k++;
                }
                
            }
            i++;
        }
    }
    write(1, "\n", 1);
}