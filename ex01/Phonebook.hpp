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
        Contact *contacts_list;
        std::string ten_characters_wide(int index);
        void select_by_index_prompt(int limit);
};

#endif
