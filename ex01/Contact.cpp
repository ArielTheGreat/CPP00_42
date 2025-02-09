
#include "./Contact.hpp"

std::string Contact::make_string_search_list_visible(std::string str)
{
    int counter;
    std::string new_str;

    counter = 0;
    while(str[counter] && counter < 10)
    {
        new_str += str[counter];
        counter++;
    }
    if (str[counter])
    {
        new_str.back() = '.';
    }
    return new_str;
} 

Contact::Contact()
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void Contact::set_contact_info()
{
    std::cout << "First Name: ";
    std::cin >> this->first_name;
    std::cout << "Last Name: ";
    std::cin >> this->last_name;
    std::cout << "Nickname: ";
    std::cin >> this->nickname;
    std::cout << "Phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Darkest Secret: ";
    std::cin >> this->darkest_secret;
}

void Contact::print_contact_info_line_by_line()
{
    std::cout << "First Name: " + this->first_name << std::endl;
    std::cout << "Last Name: " + this->last_name << std::endl;
    std::cout << "Nickname: " + this->nickname << std::endl;
    std::cout << "Phone number: " + this->phone_number << std::endl;
    std::cout << "Darkest Secret: " + this->darkest_secret << std::endl;
}

std::string Contact::get_first_name_list_version()
{
    return make_string_search_list_visible(this->first_name);
}

std::string Contact::get_last_name_list_version()
{
    return make_string_search_list_visible(this->last_name);
}

std::string Contact::get_nickname_list_version()
{
    return make_string_search_list_visible(this->nickname);
}

std::string Contact::get_first_name()
{
    return this->first_name;
}

std::string Contact::get_last_name()
{
    return this->last_name;
}

std::string Contact::get_nickname()
{
    return this->nickname;
}
