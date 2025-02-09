#include "./Phonebook.hpp"

int Phonebook::total_contacts = 0;

Phonebook::Phonebook()
{
    contacts_list = new Contact[8];
}

std::string Phonebook::ten_characters_wide(int index)
{
    std::string character_wide;
    int counter;

    counter = 0;
    while(counter < 10)
    {
        if (counter == 0)
            character_wide +=  char('0' + index);
        else
            character_wide += ' ';
        counter++;
    }
    return character_wide;
}

void Phonebook::select_by_index_prompt(int limit)
{
    int index;

    while(1)
    {
        std::cout << "PLEASE SELECT ONE OF THE INDEX FROM SEARCH:" << std::endl;
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }
        if(index < limit && index >= 0)
        {
            this->contacts_list[index].print_contact_info_line_by_line();
            break;
        }
        else
        {
            std::cout << "Invalid index. Please select a valid index within range." << std::endl;
        }
    }

}

void Phonebook::empty_phonelist()
{
    delete [] contacts_list;
}

void Phonebook::add_contact()
{
    if (this->total_contacts < 8)
    {
        this->total_contacts++;
    }
    else
    {
        this->total_contacts = 1;
    }
    this->contacts_list[total_contacts].set_contact_info();
}

void Phonebook::display_non_empty_contacts()
{
    int counter;

    counter = 1;
    while(this->contacts_list[counter].get_first_name() != "")
    {
        std::cout <<  ten_characters_wide(counter);
        std::cout <<  " | ";
        std::cout <<  this->contacts_list[counter].get_first_name_list_version();
        std::cout <<  " | ";
        std::cout <<  this->contacts_list[counter].get_last_name_list_version();
        std::cout <<  " | ";
        std::cout <<  this->contacts_list[counter].get_nickname_list_version();
        std::cout << '\n';
        counter++;
    }
    select_by_index_prompt(counter);
}
