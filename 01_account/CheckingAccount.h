//
// Created by Kunz, Gabriel on 17/05/21.
//

#ifndef ACCOUNT_CHECKINGACCOUNT_H
#define ACCOUNT_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
 public:
  CheckingAccount(std::string acc_owner, int acc_number, float monthly_fee);
  void updateAccount();
 private:
  float monthly_fee;
};

#endif //ACCOUNT_CHECKINGACCOUNT_H
