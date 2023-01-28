#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
    int arg;

    arg = 1;
    if (ac == 1)
        std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
    else
    {
        while(arg != ac)
        {
            for ( size_t i = 0; i < strlen(av[arg]); i++ )
                std::cout << (char)toupper(av[arg][i]);
            arg++;
        }
    }
}
