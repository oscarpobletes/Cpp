#include<iostream>
using namespace std;

struct node{ // Node that will be used for linked list
	int info; // Field
	struct node *next; // Points to other node struct
};

int main(){
	struct node *nodeptr; // A pointer is needed to declare each node on the list
	nodeptr=new(node); // Create the node
	nodeptr->info=25; // Insert a value into info
	cout << (*nodeptr).info; // Print the inserted value
	return 0;
}
