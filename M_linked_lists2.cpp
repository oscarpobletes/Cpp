#include <iostream>
using namespace std;
/* Create three pointers that point to some node struct: p1,p2,p3.
Save in each node: 45,46,12.
Link the first node with the second and the second with the third, using *next of each node.
*next of the third node must point to NULL.
Print the values of all three nodes.*/

struct node{
	int val;
	struct node *next;	
};

int main(){
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

	
	cout << (*p1).val << endl;
	cout << (*p2).val << endl;
	cout << (*p3).val << endl;
}
