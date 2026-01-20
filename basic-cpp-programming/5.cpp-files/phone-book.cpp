#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Crea un book agenda y añade el número de contactos definido.
void createPhoneBook(int numContacts){
  string name;
  string lastName;
  string phone;  
  
  cout << "Contacts: " << numContacts << endl;
  int i=0;

  ofstream book("book.txt"); // crea book de agenda

  while(i<numContacts){
    cout << "\nAdd name: \n";
    cin >> name;
    cout << "\nAdd lastName: \n";
    cin >> lastName;
    cout << "\nAdd phone: \n";
    cin >> phone;

    string contact[3] = {name, lastName, phone};

    if(book.is_open()){
      for(int i=0; i < 3; i++){
        book << contact[i] << "; ";
      }
      book << endl;
      cout << "\n Added --> " << name << " | " << lastName << " | " << phone;
    }

    i++;
    cout << "\n Add another contact...";
  }

  book.close();
}

void addContact(){
  int numContacts;
  cout << "How many contacts will you add to the book? (Insert number)" << endl;
  cin >> numContacts;

  if(numContacts < 0){
    cout << "\nERROR: Enter a number greater than 0 to enter a contact, or 0 to exit the program.";
  }else if(numContacts == 0){
    cout << "\n Exiting..";
  }else{
    createPhoneBook(numContacts);
  }
}

void listContacts(){
  ifstream book("book.txt"); // Read book phone

  if (!book.is_open())
  {
    cout << "Error openning book.txt\n" << "ERROR: This file can not exist." << endl;
    exit(EXIT_FAILURE);
  }

  string phoneBook;
  while (getline(book, phoneBook)){
    cout << phoneBook << endl;
  }
}

// Main program
int main(){
  int option=0;

  // Main menu
  do{
    cout << "--PHONE BOOK--\n";
    cout << "Select an option\n";
    cout << "1. Add contacts\n";
    cout << "2. List contacts\n";
    cout << "0. Exit\n";
    cin >> option;
  }while(option < 0 || option > 2);

  switch(option){
    case 1: addContact(); break;
    case 2: listContacts(); break;
    default: 
      cout << "Exiting..." << endl;
  }

  return 0;
}