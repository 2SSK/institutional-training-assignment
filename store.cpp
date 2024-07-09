#include "store.h"
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>

using namespace std;

Store::Store() { loadFromFile(); }

Store::~Store() { saveToFile(); }

void Store::addMedicine(const std::string &name, int quantity, double price) {
  medicines.push_back({name, quantity, price});
}

void Store::viewAllMedicines() const {
  for (const auto &medicine : medicines) {
    cout << endl
         << "Name: " << medicine.name << ", Quantity: " << medicine.quantity
         << ", Price: " << medicine.price << "\n";
  }
}

void Store::searchMedicine(const std::string &name) const {
  for (const auto &medicine : medicines) {
    if (medicine.name == name) {
      cout << endl
           << "Name: " << medicine.name << ", Quantity: " << medicine.quantity
           << ", Price: " << medicine.price << "\n";
      return;
    }
  }
  cout << "\nMedicine not found.\n";
}

void Store::loadFromFile() {
  std::ifstream file("medicines.txt");
  if (file.is_open()) {
    Medicine medicine;
    while (file >> medicine.name >> medicine.quantity >> medicine.price) {
      medicines.push_back(medicine);
    }
    file.close();
  } else {
    cerr << "\nFailed to open medicines.txt for reading.\n";
  }
}

void Store::saveToFile() const {
  std::ofstream file("medicines.txt");
  if (file.is_open()) {
    for (const auto &medicine : medicines) {
      file << medicine.name << " " << medicine.quantity << " " << medicine.price << "\n";
    }
    file.close();
  } else {
    cerr << "\nFailed to open medicines.txt for writing.\n";
  }
}
