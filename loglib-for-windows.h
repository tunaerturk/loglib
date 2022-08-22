#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Account{
  private:
  string user;
  string passw;
  string userl;
  string passwl;
  string securitycode;
  string scl;
  public:
  bool logCheck = false;
  void createAcc(){
   cout << "Enter Username: ";
   cin >> user;
   cout << "Enter Password: ";
   cin >> passw;
   system("cls");
   
   srand(time(NULL));
   securitycode = rand();
   cout << "Your Security Code: " << securitycode << endl;
   
   ofstream file;
   file.open(securitycode);
   file << user << endl;
   file << passw << endl;
   file.close();
  }
  void loginAcc(){
     cout << "Enter Username: ";
     cin >> userl;
     cout << "Enter Password: ";
     cin >> passwl;
     cout << "Enter Security Code: ";
     cin >> scl;
     
     ifstream file;
     file.open(scl);
     file >> user;
     file >> passw;
     file.close();

     if(user == userl && passw == passwl) {cout << "Login Succes" << endl; logCheck = true;}
     else{cout << "Login Error" << endl;}
     
  }
};
