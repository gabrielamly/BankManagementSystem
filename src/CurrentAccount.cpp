/*
 * CurrentAccount.cpp
 *
 *  Created on: Mar 6, 2022
 *      Author: Gabriela
 */

#include "../header/CurrentAccount.h"

#include <string>

bool CurrentAccount::openAccount()
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

bool CurrentAccount::checkBalance() const
{
	std::cout << "*****************************************\n";
	std::cout << "checking balance\n";
	std::cout << "size of person data: " << personData.size();

	for (int i=0; i<personData.size(); i++)
	{
		std::cout << "\nName: "<< personData[i].lName;
		std::cout << "\nName: "<< personData[i].lAccNo;
		std::cout << "\nName: "<< personData[i].lAmount;
		std::cout << "\n*****************************************\n";
	}

	return true;

}
