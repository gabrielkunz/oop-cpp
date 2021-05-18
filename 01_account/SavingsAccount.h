//
// Created by Kunz, Gabriel on 17/05/21.
//

#ifndef ACCOUNT_SAVINGSACCOUNT_H
#define ACCOUNT_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
 public:
  SavingsAccount(std::string acc_owner, int acc_number, float interest_rate);
  void updateAccount();
 private:
  float interest_rate;
};

#endif //ACCOUNT_SAVINGSACCOUNT_H
