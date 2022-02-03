#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
  char data[100];

  ofstream outputFile;
  outputFile.open("simplefile.dat");

  cout << "Writing to the file" << endl;
  cout << "Enter Your Name : ";
  cin.getline(data, 100);

  outputFile << data << endl;

  cout << "Enter Your Age : ";
  cin >> data;
  cin.ignore();

  outputFile << data << endl;
  outputFile.close();

  ifstream inputFile;
  inputFile.open("simplefile.dat");

  cout << "Reading from the simplefile.dat" << endl;
  stringstream strStream;

  strStream << inputFile.rdbuf();
  cout << strStream.str();

//   cout << "=================================\n";

//   while (!inputFile.eof())
//     cout << inputFile.get();

  inputFile.close();
}