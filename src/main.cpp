/*
 * main.cpp
 *
 *  Created on: Mar 4, 2022
 *      Author: Gabriela
 */


#include <iostream>
#include "../interface/AccountFactory.h"

std::vector<PersonModel> Account::personData;

bool openAccount()
{

    AccountFactory::CreateAccount(ACCOUNT_TYPE::CURRENT_ACCOUNT)->openAccount();
    return true;
}

bool display()
{
    AccountFactory::CreateAccount(ACCOUNT_TYPE::CURRENT_ACCOUNT)->checkBalance();
    return true;
}

int main()
{
    unsigned int userChoice = 0;
    while(1)
    {
        std::cout << "1. New Account\n";
        std::cout << "2. Check Balance\n";
        std::cout << "6. Exit\n";

        std::cin >> userChoice;

        switch (userChoice)
        {
        case 1:
        {
            openAccount();
            break;
        }

        case 2:
        {
            display();
            break;
        }

        case 6:
        {
            std::cout << "Good Bye\n";
            break;
        }

        default:
        {
            std::cout << "Wrong Choice\n";
            break;
        }
        }

    }


    return 0;
}

