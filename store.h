#ifndef STORE_H
#define STORE_H

#include <string>
#include <vector>

class Store {
public:
  struct Medicine {
    std::string name;
    int quantity;
    double price;
  };

  Store();
  ~Store();

  void addMedicine(const std::string &name, int quantity, double price);
  void viewAllMedicines() const;
  void searchMedicine(const std::string &name) const;
  bool purchaseMedicine(const std::string &name, int quantity);

private:
  std::vector<Medicine> medicines;
  void loadFromFile();
  void saveToFile() const;
};

#endif
