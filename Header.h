#include <iostream>
#include <sstream>
#include <string>
 
using namespace std;
class PersonType
{
public:
  virtual void print();
  virtual void getAddress();
  virtual void setAddress();

};
class studentType : public PersonType
{
private:
  string major, address;
  int id;
  double gpa;
  
};