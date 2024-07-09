#ifndef INTERFACE_H
#define INTERFACE_H

#include "store.h"

class Interface {
public:
  void displayMenu() const;
  void addMedicine(Store &store) const;
  void viewAllMedicines(const Store &store) const;
  void searchMedicine(const Store &store) const;
};

#endif
