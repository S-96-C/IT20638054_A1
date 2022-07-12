//IT Number - IT20638054
//Name - Cooray P S L T
//Paper Version - Version U

#include <iostream>
#include "Salesman.h"

using namespace std;

int main()
{
  //Create an Objects
  Salesman sm1, sm2, sm3;

  //Set Values to Objects
  sm1.setSalesmanDetails(1, "John", 30000, 772358375);
  sm2.setSalesmanDetails(2, "Ann", 40000, 773029452);
  sm3.setSalesmanDetails(3, "Leema", 35000, 778294526);

  //Calling Set Salesman Contact No Method 
  sm1.setSalesmanContactNo();
  sm2.setSalesmanContactNo();
  sm3.setSalesmanContactNo();

  //Calling Display Salesman Details Method
  sm1.displaySalesmanDetails();
  sm2.displaySalesmanDetails();
  sm3.displaySalesmanDetails();

  return 0;

}