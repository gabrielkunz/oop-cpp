#include <iostream>
#include <string>

#include "Account.h"

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
