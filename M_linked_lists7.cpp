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
    cout << "4. Find Position\n";
    cout << "5. Exit\n";
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
        cout << "Removed.\n";
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

int findPosition(node *current, int number){
    int position = 0;
    while (current != NULL) {
        position++;
        if (current->number == number) {
            return position;
        }
        current = current->next;
    }
    return -1;
}
    
int main(){
    node *head=NULL;
    node *last=NULL;
    int choice;
    int number;
    int position;
    do{
        choice=menu();

        switch(choice){
            case 1:
                cout << "Please enter a number: ";
                cin >> number;
                insert(head,last,number);
                cout << "Added.\n";
                break;
            case 2:
                remove(head,last);
                break;
            case 3:
                showList(head);
                break;
            case 4:
                cout << "Please enter a number to find its position: ";
                cin >> number;
                position = findPosition(head, number);
                if (position == -1) {
                    cout << "Number not found.\n";
                } else {
                    cout << "Position of first " << number << " in the list is " << position << ".\n";
                }
                break;
            case 5:
                cout << "Bye!\n";
                break;  
            default:
                cout << "Invalid option.\n";
        }

    }while (choice!=5);
    return 0;
    
}
