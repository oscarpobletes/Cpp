#include <iostream>
#include <string.h>
using namespace std;

struct rec{
   char name[15];
   int id;
   int age;
   double sal;
   };


main(){
   struct rec emp;
   strcpy(emp.name, "OSCAR");
   emp.id = 14;
   emp.age = 22;
   emp.sal =777.77;

   cout << "Employee name and memory address: "<<  emp.name << " "<< &emp.name << endl;
   cout << "Employee ID and memory address: "<<  emp.id << " " << &emp.id << endl;
   cout << "Employee age and memory address: "<<  emp.age << " " << &emp.age << endl;
   cout << "Employee salary and memory address: "<<  emp.sal << " " << &emp.sal << endl;
   }
