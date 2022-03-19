/*
 * SavingsAccount.h
 *
 *  Created on: Mar 13, 2022
 *      Author: Gabriela
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include "../interface/Account.h"

class SavingsAccount : public Account
{
public:
	virtual bool openAccount() override;
	virtual bool checkBalance() const override;
};


#endif /* SAVINGSACCOUNT_H_ */
