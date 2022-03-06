/*
 * AccountFactory.cpp
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#include "../interface/AccountFactory.h"

std::unique_ptr<Account> AccountFactory::CreateAccount(int type)
{
    if ( type == 1)
    {
        std::cout << "Account type = 1\n";
    }
    return nullptr;
}


