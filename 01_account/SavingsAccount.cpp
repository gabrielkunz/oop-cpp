//
// Created by Kunz, Gabriel on 17/05/21.
//
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string acc_owner, int acc_number, float interest_rate)
  : Account(acc_owner, acc_number) {
  this->interest_rate = interest_rate;
}

void SavingsAccount::updateAccount() {
  balance *= interest_rate;
}
