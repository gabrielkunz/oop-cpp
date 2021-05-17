//
// Created by Kunz, Gabriel on 07/05/21.
//

#ifndef ACCOUNT_ACCOUNT_H
#define ACCOUNT_ACCOUNT_H

#include <iostream>

class Account {
 public:
  Account(std::string acc_owner, int acc_number);
  void Credit(float amount);
  void Debit(float amount);
  void Transfer(Account* receiving_acc, float amount);
  int getAccountNumber();
  void printAccountDetails();
  virtual void updateAccount() = 0;
 protected:
  std::string acc_owner;
  int acc_number;
  float balance;
};

#endif //ACCOUNT_ACCOUNT_H
