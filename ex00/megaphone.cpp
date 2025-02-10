/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:21:51 by frocha            #+#    #+#             */
/*   Updated: 2025/02/10 13:21:53 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
