//Sahil Sheth
//CPSC 301-01

#include "person.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


void readData(vector<Person> &a);
void writeData(vector<Person> &a);


int main()
{
  vector<Person> individual;
  readData(individual);
  writeData(individual);
  return 0;
}

void readData(vector<Person> &a)
{
    string first, last, line;
    float pay, hours;
    ifstream myfile;
    myfile.open("input.txt");
     while(!myfile.eof())
    {
        myfile >> first >> last >> pay >> hours;
        getline(myfile, line);
        a.emplace_back(first, last, pay, hours);
    }
  
   /* for(unsigned int i = 0; i<a.size(); i++)
  {
      cout << a.at(i).getFirstName() << endl;
      cout << a.at(i).getLastName() << endl;
      cout << a.at(i).getPayRate() << endl;
      cout << a.at(i).getHoursWorked() << endl;
      //cout << a.at(i).getPayRate() << endl;
  }*/
  
  myfile.close();


}

void writeData(vector<Person> &a)
{
  ofstream newFile;
  newFile.open("output.txt");
  string writeName;
  float writeAmount;
    for(int i = 0; i < a.size(); i++)
    {
        writeName = a[i].fullName();
        writeAmount = a[i].totalPay();
        newFile << writeName << " " << writeAmount << endl;
        cout << writeName << " " << writeAmount << endl;
    }
  
    newFile.close();
}
