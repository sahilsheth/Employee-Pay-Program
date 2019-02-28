#include "person.cpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void readData(string fileName, Person a[], int size);
void writeData(string filename, Person a[], int lines);


int main()
{
  int N = 6;
  Person individual[20];
  readData("input.txt", individual, N);
  writeData("output.txt", individual, N);
  return 0;
}

void readData(string fileName, Person a[], int size)
{
  ifstream myfile;

    string first, last;
    float pay, hours;
    myfile.open(fileName.c_str());
    for(int i = 0; i < size; i++)
    {

        myfile >> first >> last >> pay >> hours;
        a[i].setFirstName(first);
        a[i].setLastName(last);
        a[i].setPayRate(pay);
        a[i].setHoursWorked(hours);

        cout << first << " " << last << " " << " " << pay << " " << hours <<endl;

      }


}

void writeData(string filename, Person a[], int lines)
{
  ofstream newFile;
  newFile.open(filename.c_str());
  if (!newFile.eof())
  {
    for(int i = 0; i < lines; i++)
    {
        newFile << a[i].fullName() << "  " << a[i].totalPay() << endl;
    }
  }
}
