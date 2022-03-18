/*
 * AccountFactory.cpp
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#include <memory>
#include "../interface/AccountFactory.h"
#include "../header/CurrentAccount.h"
#include "../header/SavingsAccount.h"

std::unique_ptr<Account> AccountFactory::CreateAccount(ACCOUNT_TYPE type)
{
    if ( type == 1)
    {
        std::cout << "Account type = 1\n";
        return std::make_unique<CurrentAccount>();
    }

    else if ( type == 2)
    {
    	std::cout << "Account type = 2\n";
    	return std::make_unique<SavingsAccount>();
    }
    return nullptr;
}


