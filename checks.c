#include <stdio.h>

int only_legit_args(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (j < argc)
    {
        while(argv[j][i])
        {
            if (argv[j][i] == '-' || argv[j][i] == '+' || argv[j][i] == 32 || (argv[j][i] >= '0' && argv[j][i] <= '9'))
                i++;
            else
                return (1);
        }
        i = 0;
        j++;
    }
    return (0);
}




int main(int argc, char **argv)
{
    printf("%d\n", only_legit_args(argc, argv));
}