/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:22:44 by frocha            #+#    #+#             */
/*   Updated: 2025/02/10 13:22:45 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        std::string make_string_search_list_visible(std::string str);
        std::string get_non_empty_input(std::string prompt);

    public:
        Contact(void);
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
        void set_contact_info(void);
        void print_contact_info_line_by_line(void);
        std::string get_first_name_list_version(void);
        std::string get_last_name_list_version(void);
        std::string get_nickname_list_version(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
};

#endif
