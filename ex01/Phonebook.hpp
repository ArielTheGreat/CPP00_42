/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha <frocha@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:23:10 by frocha            #+#    #+#             */
/*   Updated: 2025/02/10 13:23:11 by frocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class Phonebook
{
    public:
        void add_contact(void);
        void display_non_empty_contacts(void);

    private:
        static int total_contacts;
        static Contact contacts_list[8];
        std::string ten_characters_wide(int index);
        std::string Phonebook::ten_characters_wide_string(std::string str);
        void select_by_index_prompt(int limit);
};

#endif
