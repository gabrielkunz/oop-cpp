#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class Account {
 public:
  Account(string acc_owner, int number_of_accounts);
  void Credit(float amount);
  void Debit(float amount);
  void Transfer(Account* receiving_acc, float amount);
 private:
  string acc_owner;
  int acc_number;
  float balance;
};

Account::Account(string acc_owner, int number_of_accounts) {
  this->acc_owner = acc_owner;
  acc_number = number_of_accounts + 1;
  balance = 0;

  cout << "New account created:" << endl;
  cout << setw(4) << "Owner: " << this->acc_owner << endl;
  cout << setw(4) << "Account Number: " << acc_number << endl;
  cout.precision(2);
  cout << setw(4) << "Balance: R$ " << balance << endl;
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
