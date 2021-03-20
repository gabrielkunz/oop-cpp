#include <stdio.h>
#include <iostream>
#include <string>

class Account {
 public:
  Account(std::string acc_owner, int number_of_accounts);
  void Credit(float amount);
  void Debit(float amount);
  void Transfer(Account* receiving_acc, float amount);
 private:
  std::string acc_owner;
  int acc_number;
  float balance;
};

Account::Account(std::string acc_owner, int number_of_accounts) {
  this->acc_owner = acc_owner;
  acc_number = number_of_accounts + 1;
  balance = 0;

  std::cout << "New account created:" << std::endl;
  std::cout << " Owner: " << this->acc_owner << std::endl;
  std::cout << " Account Number: " << acc_number << std::endl;
  std::cout.precision(2);
  std::cout << " Balance: R$ " << balance << std::endl;
}

void Account::Credit(float amount) {
  this->balance = this->balance + amount;
}

void Account::Debit(float amount) {
  this->balance = this->balance - amount;
}

void Account::Transfer(Account* receiving_acc, float amount) {
  this->balance = this->balance - amount;
  receiving_acc->Credit(amount);
}

int main() {
  int number_of_accounts = 0;
  Account *my_account;

  my_account = new Account("Gabriel Kunz", number_of_accounts);
  number_of_accounts++;

  return 0;
}
