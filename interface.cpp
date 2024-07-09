#include "interface.h"
#include <bits/stdc++.h>

using namespace std;

void Interface::displayMenu() const {
  system("clear");
  cout << "\n============ Janta Medical Store ==========\n\n";

  cout << "1. Add Medicine\n";
  cout << "2. View All Medicines\n";
  cout << "3. Search Medicine by Name\n";
  cout << "4. Purchase Medicine\n";
  cout << "5. Exit\n";
  cout << "\nEnter your choice: ";
}

void Interface::addMedicine(Store &store) const {
  std::string name;
  int quantity;
  double price;

  cout << "Enter medicine name: ";
  getline(cin, name);
  cout << "Enter quantity: ";
  cin >> quantity;
  cout << "Enter price: ";
  cin >> price;
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

  store.addMedicine(name, quantity, price);
  cout << "Medicine added successfully!\n";
}

void Interface::viewAllMedicines(const Store &store) const {
  store.viewAllMedicines();
}

void Interface::searchMedicine(const Store &store) const {
  std::string name;
  cout << "Enter medicine name to search: ";
  getline(cin, name);
  store.searchMedicine(name);
}

void Interface::purchaseMedicine(Store &store) const {
  std::string name;
  int quantity;

  cout << "Enter medicine name to purchase: ";
  getline(cin, name);
  cout << "Enter quantity to purchase: ";
  cin >> quantity;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  store.purchaseMedicine(name, quantity);
}
