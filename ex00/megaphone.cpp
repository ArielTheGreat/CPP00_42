#include <iostream>

void print_uppercase(char *str)
{
    int counter;
    int tmp;
    counter = 0;

    while(str[counter])
    {
        if (str[counter] >= 'a' &&  str[counter] <= 'z')
            tmp = int(str[counter]) - 32;
        else
            tmp = int(str[counter]);
        std::cout << char(tmp);
        counter++;
    }
}

int main(int argc,char **argv)
{
    int counter;

    if (argc == 1)
    {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }else
    {
        counter = 1;
        while(counter < argc)
        {
            print_uppercase(argv[counter]);
            counter++;
        }
        std::cout << '\n';
    }
    return 0;
}