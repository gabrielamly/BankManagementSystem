/*
 * AccountFactory.h
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#ifndef ACCOUNTFACTORY_H_
#define ACCOUNTFACTORY_H_

#include <memory>
#include "Account.h"

/* Factory Method.
 * This function will be called to access pointer of Different account types */

class AccountFactory
{
public:
    static std::unique_ptr<Account> CreateAccount(int type);
};



#endif /* INTERFACE_ACCOUNTFACTORY_H_ */
