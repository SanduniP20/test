#include "test.h"
#include <iostream>
#include <cstring>
using namespace std;
Customer ::Customer(const char CFName[],const char CLName[],const char Email[],const char Contact[],const char Country[])
{
  strcpy(customerFName,CFName);
  strcpy(customerLName,CLName);
  strcpy(customerEmail,Email);
  strcpy(contactnumber,Contact);
  strcpy(country,Country);
}
void Customer::setCoustemerID(const char CID[])
{
  strcpy(customerID,CID);
}
void Customer::displayCustomerDetails()
{
  cout<<"Customer Name:"<<customerFName<<" "<<customerLName<<endl;
  cout<<"Customer ID:"<<customerID<<endl;
  cout<<"Customer Email:"<<customerEmail<<endl;
  cout<<"Customer Contact Number:"<<contactnumber<<endl;
  cout<<"Customer Country:"<<country<<endl;
}