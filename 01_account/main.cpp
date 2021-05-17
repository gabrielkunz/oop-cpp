#include <iostream>
#include <string>

#include "Account.h"
#include "CheckingAccount.h"

int main() {
  int number_of_accounts = 0;
  auto * my_account = new CheckingAccount("Gabriel Kunz", number_of_accounts + 1, 32);
  number_of_accounts++;
  auto * customer_account = new CheckingAccount("John Doe", number_of_accounts + 1, 32);
  number_of_accounts++;

  std::cout << ">> Test for Credit() method" << std::endl;
  my_account->Credit(20);
  std::cout << ">> Test for Debit() method" << std::endl;
  customer_account->Debit(15);
  std::cout << ">> Test for printAccountDetails() method" << std::endl;
  my_account->printAccountDetails();

  return 0;
}
