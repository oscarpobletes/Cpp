#include <iostream>
#include <string.h>
using namespace std;

struct test {
int a;
char name[20];
};

void save(struct test *);

main(){
   struct test r;
   save(&r);
   cout << r.a << r.name;
}


void save(struct test *s){
s->a = 7;
strcpy(s->name, " POBLETE");
}


