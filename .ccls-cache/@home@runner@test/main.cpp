#include "customer.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  Customer * cus1= new Customer("Amal","Mendis","amal@123gmail.com","0715422386","Sri Lanka");
  
  cus1-> setCoustemerID("C001");
  cus1-> displayCustomerDetails();
  
  delete cus1;
  return 0;
}