//Sahil Sheth
//CPSC 301-01


#pragma once
#include <string>
#include "person.h"

using namespace std;

//Constructor
Person::Person(string fName, string lName, float  rate, float
       hours)
{
  firstName = fName;
  payRate = rate;
  lastName = lName;
  hoursWorked = hours;
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

  return getPayRate() * getHoursWorked();
}

string Person::fullName()
{
  return firstName + " " + lastName;

}
