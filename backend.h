//
// Created by ejedw838 on 7/26/2023.
//

#ifndef CLION_TESTS_BACKEND_H
#define CLION_TESTS_BACKEND_H

#endif //CLION_TESTS_BACKEND_H
#include <iostream>
#include <vector>

struct users{

    std::string Username{ };
    std::string Password{ };
    std::string SecureKey{ };
};




users f_User;


namespace loader
{
    int login(){
        std::vector<std::string> Usernames{ };
        std::vector<std::string> Passwords{ };
        std::string l_User{};
        std::string l_Pass{};
        std::cout << "**Login**" << "\n";
        std::cout << "Please enter your username: ";
        std::cin >> l_User;
        Usernames.push_back(l_User);
        std::cout << "\n" << "Please enter your password";
        std::cin >> l_Pass;
        Passwords.push_back(l_Pass);
        std::cout << Usernames[1];
        std::cout << Passwords[1];
        if (l_User != f_User.Username || l_Pass != f_User.Password)
            std::cout << "\n" << "Incorrect information";
        return 1;
    }

    int registration(){
        std::cout << "**Register**";
        std::cout << "\n" << "Please choose your desired username: ";
        std::cin >> f_User.Username;
        std::cout << "\n" << "Please choose your password: ";
        std::cin >> f_User.Password;
        return 1;
    }

}