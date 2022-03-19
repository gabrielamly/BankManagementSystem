/*
 * CurrentAccount.h
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#ifndef CURRENTACCOUNT_H_
#define CURRENTACCOUNT_H_

#include "../interface/Account.h"


class CurrentAccount :
    public Account
{
public:
	virtual bool openAccount() override;
	virtual bool checkBalance() const override;
};



#endif /* CURRENTACCOUNT_H_ */
