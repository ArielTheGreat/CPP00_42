/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:23:16 by frocha            #+#    #+#             */
/*   Updated: 2025/02/10 13:23:18 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Phonebook.hpp"
void process_response()
{
    std::string input;
    Phonebook phonebook;
    while(1)
    {
        std::cout << " ********************* "  << std::endl;
        std::cout << " Welcome to the phonebook. Please select one of 3 options: ADD / EXIT / SEARCH "  << std::endl;
        std::cout << " ********************* "  << std::endl;
        std::cin >> input;
        if (input == "EXIT")
        {
            phonebook.empty_phonelist();
            break;
        }else if(input == "ADD")
        {
            phonebook.add_contact();
            std::cout << "Contact sucesfully added!" << std::endl;
        }else if(input == "SEARCH")
        {
            phonebook.display_non_empty_contacts();
        }else{
            break;
        }
    }
}


int main()
{
    process_response();
    return 0;
}
