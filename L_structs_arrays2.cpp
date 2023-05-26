#include <iostream>
using namespace std; 

struct student{
int id;
float grade[3];
float avg;
};

main(){
     int i, j;
     float sum=0;
     //Create a structure array
     struct student data[2];
     
   for (i=0; i<2; i++){
    sum=0;
    cout<< "Enter the " << i+1 << " student ID: ";
    cin >> data[i].id;

    
     for(j=0; j<3; j++){
     cout<< "Enter the " << j+1 << " grade of " << i+1 << " student: ";
     cin >> data[i].grade[j];
           sum=sum+data[i].grade[j];
     } 
   data[i].avg=sum/3;
  }
  
cout << "STUDENT\tID\tAVG\n";
cout << "Oscar\t"  << data[0].id << "\t" << data[0].avg << endl;
cout << "Arturo\t" << data[1].id << "\t" << data[1].avg;

}
