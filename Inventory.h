#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;


// A class called Inventory
class Inventory
{
  // private variables name m_name, m_price, m_in_stock
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  // public functions
  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif