//
// Created by Kunz, Gabriel on 17/05/21.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string acc_owner, int acc_number, float monthly_fee) : Account(acc_owner, acc_number) {
  this->monthly_fee = monthly_fee;
}

void CheckingAccount::updateAccount() {
  balance -= monthly_fee;
}
