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

  std::cout << "--------------------" << std::endl;
  std::cout << "New account created:" << std::endl;
  std::cout << "Owner: " << this->acc_owner << std::endl;
  std::cout << "Account Number: " << acc_number << std::endl;
  std::cout.precision(2);
  std::cout << "Balance: R$ " << balance << std::endl;
  std::cout << "--------------------" << std::endl;
}

void Account::Credit(float amount) {
  float previous_balance = balance;
  balance = balance + amount;

  std::cout << "--------------------" << std::endl;
  std::cout << "Credit operation in account " << acc_number << std::endl;
  std::cout.precision(2);
  std::cout << "Previous balance: R$ " << previous_balance << std::endl;
  std::cout << "Balance: R$ " << balance << std::endl;
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

int main() {
  int number_of_accounts = 0;
  Account *my_account, *customer_account;

  my_account = new Account("Gabriel Kunz", number_of_accounts);
  number_of_accounts++;
  customer_account = new Account("John Doe", number_of_accounts);
  number_of_accounts++;

  std::cout << ">> Test for Credit() method" << std::endl;
  my_account->Credit(20);

  std::cout << ">> Test for Debit() method" << std::endl;
  customer_account->Debit(15);

  std::cout << ">> Test for Transfer() method" << std::endl;
  my_account->Transfer(customer_account, 17);

  return 0;
}
