/* Filename: searchfiles.cpp */
//
//
#include <fstream>
#include <iostream>
using namespace std;

main()
{
int location = 0, found = 0, i = 0;
int key;
int data_array[10500];


ifstream data_file;
ofstream out_file;

data_file.open("numbers.txt");

if (!data_file){
   cerr << "could not open file\n";
   perror("");
   exit(1);}

cout << "Enter an integer to be located: ";
cin >> key;

while (i < 10500 && found != 1){
    data_file >> data_array[i];
      if (key == data_array[i]) {
         found = 1;
         location = i; }
      else 
         ++i;  }

if (found)
    cout << key << " is in index location " << location << endl;
else
    cout << key << " is not in the array." << endl;

data_file.close();

return(0);
}

