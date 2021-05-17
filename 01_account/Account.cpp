//
// Created by Kunz, Gabriel on 07/05/21.
//

#include "Account.h"

Account::Account(std::string acc_owner, int acc_number) {
  this->acc_owner = acc_owner;
  this->acc_number = acc_number;
  balance = 0;
}

void Account::Credit(float amount) {
  float previous_balance = balance;
  balance = balance + amount;

  std::cout << "--------------------" << std::endl;
  std::cout << "Credit operation in account " << acc_number << std::endl;
  std::cout.precision(2);
  std::cout << "Previous balance: R$ " << previous_balance << std::endl;
  std::cout << "New balance: R$ " << balance << std::endl;
  std::cout << "--------------------" << std::endl;
}

void Account::Debit(float amount) {
  float previous_balance = balance;
  balance = balance - amount;

  std::cout << "--------------------" << std::endl;
  std::cout << "Debit operation in account " << acc_number << std::endl;
  std::cout.precision(2);
  std::cout << "Previous balance: R$ " << previous_balance << std::endl;
  std::cout << "New balance: R$ " << balance << std::endl;
  std::cout << "--------------------" << std::endl;
}

void Account::Transfer(Account* receiving_acc, float amount) {
  float previous_balance = balance;
  this->balance = balance - amount;
  receiving_acc->Credit(amount);

  std::cout << "--------------------" << std::endl;
  std::cout << "Transfer operation from account " << this->acc_number;
  std::cout << " to account "<< receiving_acc->acc_number << std::endl;
  std::cout.precision(2);
  std::cout << "Previous balance: R$ " << previous_balance << std::endl;
  std::cout << "New balance: R$ " << balance << std::endl;
  std::cout << "--------------------" << std::endl;
}

int Account::getAccountNumber() {
  return acc_number;
}

void Account::printAccountDetails() {
  std::cout << "--------------------" << std::endl;
  std::cout << "Account: " << acc_number <<std::endl;
  std::cout << "Owner: " << acc_owner <<std::endl;
  std::cout.precision(2);
  std::cout << "Balance: " << balance <<std::endl;
  std::cout << "--------------------" << std::endl;
}
