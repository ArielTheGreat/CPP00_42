#include "./phonebook.hpp"

class Phonebook
{
    Contact *contacts_list;

    std::string ten_characters_wide(int index)
    {
        std::string character_wide;
        int counter;

        counter = 0;
        while(counter < 10)
        {
            if (counter == 0)
                character_wide +=  char('0' + index + 1);
            else
                character_wide += ' ';
            counter++;
        }
        return character_wide;
    }

    void select_by_index_prompt(int limit)
    {
        int index;

        while(1)
        {
            std::cout << "PLEASE SELECT ONE OF THE INDEX FROM SEARCH:" << std::endl;
            std::cin >> index;
            index = index - 1;
            if(index < limit && index >= 0)
            {
                contacts_list[index].print_contact_info_line_by_line();
                break;
            }
        }

    }

    public:
        Phonebook()
        {
            contacts_list = new Contact[8];
        }

        void empty_phonelist()
        {
            delete [] contacts_list;
        }

        void add_contact()
        {
            int counter;

            counter = 0;
            while(contacts_list[counter].get_first_name() != "")
            {
                counter++;
            }
            contacts_list[counter].set_contact_info();
        }

        void display_non_empty_contacts()
        {
            int counter;

            counter = 0;
            while(contacts_list[counter].get_first_name() != "")
            {
                std::cout <<  ten_characters_wide(counter);
                std::cout <<  " | ";
                std::cout <<  contacts_list[counter].get_first_name_list_version();
                std::cout <<  " | ";
                std::cout <<  contacts_list[counter].get_last_name_list_version();
                std::cout <<  " | ";
                std::cout <<  contacts_list[counter].get_nickname_list_version();
                std::cout << '\n';
                counter++;
            }
            select_by_index_prompt(counter);
        }
};