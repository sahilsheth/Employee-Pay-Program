#pragma once
#include <string>
#include "person.h"

using namespace std;

//Constructor
Person::Person()
{
  firstName = " ";
  payRate = 0.0;
  lastName = " ";
  hoursWorked = 0.0;
}



void Person::setLastName(string lName)
{
  lastName = lName;
}



string Person::getLastName()
{
  return lastName;
}

void Person::setFirstName(string fName)
{
  firstName = fName;
}
string Person::getFirstName()
{
  return firstName;
}
void Person::setPayRate(float rate)
{

  payRate = rate;

}
float Person::getPayRate()
{

  return payRate;

}
void Person::setHoursWorked(float hoursWorked)
{
    (*this).hoursWorked = hoursWorked;
}



float Person::getHoursWorked()
{
  return hoursWorked;
}



float Person::totalPay()
{
  //float totalBalance;
  //totalBalance = payRate * hoursWorked;
  //return totalBalance;
  return getPayRate() * getHoursWorked();
}

string Person::fullName()
{
  return firstName + " " + lastName;
  //return getFirstName() + " " + getLastName();
}
