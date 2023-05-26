#include <iostream>
using namespace std;

struct node{
	int number;
	node *next;
};

bool isEmpty(node *head){
	if(head==NULL){
		return true;
	}else{
		return false;
	}
}


int menu(){
	int choice;
	cout << "\t-----MENU-----\n";
	cout << "1. Add\n";
	cout << "2. Remove\n";
	cout << "3. Show\n";
	cout << "4. Exit\n";
	cout << "Option: ";
	cin >> choice;

	
	return choice;
}

void insertAsFirstElement(node *&head, node *&last, int number){
	node *temp=new node;
	temp->number=number;
	temp->next=NULL;
	head=temp;
	last=temp;
}

void insert(node *&head, node *&last, int number){
	if(isEmpty(head)){
		insertAsFirstElement(head,last,number);
	}else{
		node *temp=  new node;
		temp->number=number;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}	
}

void remove(node *&head, node *&last){
	if(isEmpty(head)){
		cout << "The list is empty.\n";
		}else if (head==last){
			delete head;
			last=NULL;
			head=NULL;
			
			cout << "List is now empty.\n";
		}else{
			node *temp = head;
			head=head -> next;
			delete temp;
			cout << "Removed.";
		}
}
	


void showList(node *current){
	if (isEmpty(current)){
		cout << "The list is empty.\n";
		}else{
			cout << "The list contains: \n";
			while(current !=NULL){
				cout << current -> number << endl;
				current =current->next;
			}
		}
	}
	


int main(){
	node *head=NULL;
	node *last=NULL;
	int choice;
	int number;
	do{
		choice=menu();
		
		switch(choice){
			case 1: cout << "Please enter a number: ";
				cin >> number;
				insert(head,last,number);
				cout << "Added.";
				cout << endl;
				break;
			case 2: remove(head,last);
				cout << endl;
				break;
			case 3: showList(head);
				cout << endl;
				break;
			case 4: cout << "Bye!";
				cout << endl;
				break;	
			default: cout << "Invalid option.";
				cout << endl;
		}
		
	}while (choice!=4);
	return 0;
}
