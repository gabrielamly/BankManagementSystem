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
    unsigned short int userChoice=0;
    bool result=false;

    std::cout << "1. Current Account\n";
    std::cout << "2. Savings Account\n";
    std::cout << "3. Go to Main Menu\n";

    std::cin >> userChoice;

    if ( userChoice == 1 || userChoice == 2 )
    {
        result = AccountFactory::CreateAccount(static_cast<ACCOUNT_TYPE>(userChoice))->openAccount();
    }

    return result;
}

bool display()
{
    AccountFactory::CreateAccount(ACCOUNT_TYPE::CURRENT_ACCOUNT)->checkBalance();
    return true;
}

int main()
{
    std::cout << "WELCOME\n";
    while(1)
    {
        unsigned short int userChoice = 0;
        std::cout << "1. New Account\n";
        std::cout << "2. Check Balance\n";
        std::cout << "6. Exit\n";

        std::cin >> userChoice;

        switch (userChoice)
        {
            case 1:
            {
                if( openAccount() == false )
                {
                    std::cout << "Error in Opening new account\n";
                }
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

