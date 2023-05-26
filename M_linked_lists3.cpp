#include <iostream>
using namespace std;

struct node{
	int val;
	struct node *next;	
};

int main(){
	struct node *p;
	struct node *p1;
	struct node *p2;
	struct node *p3;
	
	p1=new(node);
	p2=new(node);
	p3=new(node);
	
	p1->val= 45;
	p2->val= 56;
	p3->val= 12;
	
	p1->next =p2;
	p2->next =p3;
	p3->next= NULL;
	
	p=p1; // Pointer p initializes in the same address that p1 points.
	
	while(p!=NULL){ // Now the pointer goes through each of the list nodes and prints each of the nodes values.
		cout << (*p).val << endl;
		p=p->next;
	}

}
