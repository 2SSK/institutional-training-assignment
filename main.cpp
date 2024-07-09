#include "interface.h"
#include "store.h"
#include <iostream>

using namespace std;

int main() {
  Store store;
  Interface interface;
  int choice;

  while (true) {
    interface.displayMenu();
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    switch (choice) {
    case 1:
      interface.addMedicine(store);
      break;
    case 2:
      interface.viewAllMedicines(store);
      break;
    case 3:
      interface.searchMedicine(store);
      break;
    case 4:
      cout << "Exiting...\n";
      return 0;
    default:
      cout << "Invalid choice. Please try again.\n";
    }
    cout << "Press Enter to continue...";
    cin.get();
  }

  return 0;
}
