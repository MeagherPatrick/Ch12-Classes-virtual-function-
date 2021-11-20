#include "personType.h"
 
using namespace std;

class studentType : public personType
{
public:
  studentType();
  studentType(string, personType, int, double );
  void setMajor();
  void getMajor() const;

  void setAddress();
  void getAddress() const;
  void setID();
  void getID() const;
  void setGPA();
  void getGPA() const;



private:
  string major;
 personType address;
  int id;
  double gpa;
  
};