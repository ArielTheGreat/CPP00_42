#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::string make_string_search_list_visible(std::string str)
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

    public:
        Contact()
        {
            first_name = "";
            last_name = "";
            nickname = "";
            phone_number = "";
            darkest_secret = "";
        }

        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone_number = phone_number;
            this->darkest_secret = darkest_secret;
        }

        void set_contact_info()
        {
            std::cout << "First Name: ";
            std::cin >> first_name;
            std::cout << "Last Name: ";
            std::cin >> last_name;
            std::cout << "Nickname: ";
            std::cin >> nickname;
            std::cout << "Phone number: ";
            std::cin >> phone_number;
            std::cout << "Darkest Secret: ";
            std::cin >> darkest_secret;
        }

        void print_contact_info_line_by_line()
        {
            std::cout << "First Name: " + first_name << std::endl;
            std::cout << "Last Name: " + last_name << std::endl;
            std::cout << "Nickname: " + nickname << std::endl;
            std::cout << "Phone number: " + phone_number << std::endl;
            std::cout << "Darkest Secret: " + darkest_secret << std::endl;
        }

        std::string get_first_name_list_version()
        {
            return make_string_search_list_visible(first_name);
        }

        std::string get_last_name_list_version()
        {
            return make_string_search_list_visible(last_name);
        }

        std::string get_nickname_list_version()
        {
            return make_string_search_list_visible(nickname);
        }

        std::string get_first_name()
        {
            return first_name;
        }

        std::string get_last_name()
        {
            return last_name;
        }

        std::string get_nickname()
        {
            return nickname;
        }
};