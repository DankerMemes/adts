#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2, L3;
 
 L1.insert(5,1);
 L1.insert(6,2);
 L1.insert(18,3);

L1.checkposition(3);
L1.clear();
cout << endl << endl <<endl  << "size of list = " << L1.size() <<endl <<endl;
 //Do some stuff with L1, L2, ...
 // ...

}
