#include<iostream>
#include "Salesman.h"

using namespace std;

//Class Methods Definition

Salesman::Salesman(){}

//Assign
void Salesman::setSalesmanDetails(int sID, const char* sName, int sSalary, int sContact)
{
  salesmanId = sID;
  salesmanName = sName;
  salary = sSalary;
  contactNo = sContact;
}
void Salesman::displaySalesmanDetails()
{
  cout << endl << "salesmanId = " << salesmanId << endl;

  cout << "salesmanName = " << salesmanName << endl;

  cout << "salary = " << salary << endl;
  
  cout << "contactNo = " << contactNo << endl; 
}

void Salesman::setSalesmanContactNo()
{
  cout << "Input new contact number of salesman " << salesmanId << " : ";
  cin >> contactNo;
}

Salesman::~Salesman(){}