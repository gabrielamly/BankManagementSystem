/*
 * SavingsAccount.cpp
 *
 *  Created on: Mar 13, 2022
 *      Author: Gabriela
 */

#include "../header/SavingsAccount.h"

#include <string>

bool SavingsAccount::openAccount()
{
    std::string name = "";
    double accNumber;
    double amount;

    std::cout << "Enter Name: ";
    std::cin.ignore();
    getline(std::cin, name);

    std::cout << "Enter Account number: ";
    std::cin >> accNumber;

    std::cout << "Enter Amount: ";
    std::cin >> amount;

    personData.push_back(PersonModel(name, accNumber, amount));

    return true;
}

bool SavingsAccount::checkBalance() const
{
	std::cout << "*****************************************\n";
	std::cout << "checking savings balance\n";
	std::cout << "size of person data: " << personData.size();

	for (unsigned int i=0; i < personData.size(); i++)
	{
		std::cout << "\nName: "<< personData[i].lName;
		std::cout << "\nName: "<< personData[i].lAccNo;
		std::cout << "\nName: "<< personData[i].lAmount;
		std::cout << "\n*****************************************\n";
	}
	return true;

}


