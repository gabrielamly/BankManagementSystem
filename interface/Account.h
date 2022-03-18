/*
 * Account.h
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <vector>

/* structure to maintain information of account holders*/
struct PersonModel
{
    PersonModel(std::string pName, double pAccNo, double pAmount)
    {
        this->lName = pName;
        this->lAccNo = pAccNo;
        this->lAmount = pAmount;
    }
    std::string lName;
    double lAccNo;
    double lAmount;
};

/* Base class*/
class Account
{
public:
    virtual bool openAccount() = 0;
    virtual bool checkBalance() const = 0;
    virtual ~Account(){};

public:
    static std::vector<PersonModel> personData;
};

#endif /* ACCOUNT_H_ */
