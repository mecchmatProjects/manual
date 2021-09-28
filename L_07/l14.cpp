#include <iostream>
#include <fstream>
using namespace std;
int main(){
 int n = 50;
  // Відкриваємо файл для виводу 
  ofstream ofile("Test.txt");
  if(!ofile) { 
    cout << "Файл не відкритий. "; 
    return -1; 
  } 
  ofile << "Hello!" << n; 
  // Закриваємо файл 
  ofile.close(); 
  // Відкриваємо той же файл для вводу 
  ifstream ifile("Test.txt"); 
  if(!ifile ) { 
    cout << "Файл не відкритий."; 
    return -1; 
  } 
  char str[80]; 
  ifile >> str >> n; 
  cout << str << " " << n << endl; 
  ifile.close(); // Закриваємо файл 
}

