#include <iostream>
using namespace std;

void swap(int *, int *);

int main(){
   int x, y;
   x = 10;
   y = 127;
   swap(&x, &y);
   cout << x << "\n" << y ;
}

void swap(int  *a, int *b){
   int i;
   i = *a;
   *a = *b;
   *b = i;
}
