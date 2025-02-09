#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class Phonebook
{
    public:
        Phonebook();
        void empty_phonelist(void);
        void add_contact(void);
        void display_non_empty_contacts(void);

    private:
        static int total_contacts;
        Contact *contacts_list;
        std::string ten_characters_wide(int index);
        void select_by_index_prompt(int limit);
};

#endif
