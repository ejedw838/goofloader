#include <iostream>
#include "backend.h"



bool rl_done = false;


int caseselect(int x){

    switch (x){
        case 1:
            loader::login();
            rl_done = true;
            return 2;

        case 2:
            loader::registration();
            return 2;
        case 3:

            return 2;

        default:
            std::cout << "nA";
            return 9;


    }
}

int main(){


    std::cout << "Please choose an option" << "\n";
    std::cout << "[1] Login" << "\n";
    std::cout << "[2] Register" << "\n";
    int choice{};
    std::cin >> choice;
    caseselect(choice);
    std::cout << "\n";

};