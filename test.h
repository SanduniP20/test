#include <iostream>
#include <cstring>
using namespace std;
class Customer
{
 private:
char customerFName[10];
char customerLName[10];
char customerID[10];
char customerEmail[30];
char contactnumber[20];
char country[20];

public:
Customer(const char CFName[],const char CLName[],const char Email[],const char Contact[],const char Country[]);
void setCoustemerID(const char CID[]);
void displayCustomerDetails();
};