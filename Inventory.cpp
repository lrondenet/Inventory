#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using namespace std;
  

//A function called inventory that holds the name, price, and count
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// A function called sell that sell what is in stock
void Inventory::sell()
{
  m_in_stock--;
  if (m_in_stock == 0) {
    cout << "Sorry, that item is out of stock" << endl;
  }
}

// A function that prints out the name and how much the cupcake cost
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}