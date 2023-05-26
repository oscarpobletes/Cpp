#include <iostream>
using namespace std;
/*Create a  node named list. Then ask the user if he wants to insert a node, if so:
Create a new node to receive the value to insert into the list.  The pointer to the struct node will be called new.
It will be necessary to locate some pointers that reach the end of the list to be able to insert the new node, 
this can be made by linking the node that we call new with the last node found in the list.
if there is only the list node, the new node will be linked to the list node.*/

struct node{
	int val;
	struct node *next;
};

void print(struct node *list){
	cout << "\nNumbers:" << endl;
	while(list->next!=NULL){
		list=list->next;
		cout << list->val << endl;
	}
}

int main (){
	struct node *list;
	struct node *p, *q;
	int ans;
	int num;
	list=new(node);
	list->next=NULL;
	cout << "\t-----------------------WELCOME-----------------------" << endl;
    do{
    	p=list;
    	q=p;
    	while(p!=NULL){
		q=p;
		p=p->next;
		}
		struct node *newn;
		newn=new(node);
		
   	cout << "\nWould you like to insert a new node? Yes=1 No=0" << endl;
	cin >> ans;
	
		if (ans==1){		
			cout << "Enter a number: ";
			cin >> num;
			newn->val=num;
		    q->next=newn;
		    newn->next=NULL;
		    
	 	}else if(ans==0){
		    cout << "\t-----------------------GOODBYE-----------------------" << endl;
		    print(list);
		    
		}else{
			cout << "Invalid Option" << endl;
		}
		
	}while(ans!=0);
	
	return 0;
}
