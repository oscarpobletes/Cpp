#include <iostream>

// Definition of the node struct
struct node{
    int info;
    struct node *next;
};

// Print the values of the list
void print(node *list){
	if(list->next==NULL){
		std:: cout << "Nothing to show.";
	}else{
        while(list->next!=NULL){
            list=list->next;
            std::cout << list->info << "\n";
        }
    }
}

// Remove a node from the list
void remove(node *list, int number){
    node *p, *q;	
    p=list;
	bool number_found = false;
	
	while(list->next!=NULL && !number_found){
    	q=list;
    	list=list->next;
    	if(list->info==number){
       		 number_found = true;
    	}
	}
	
	if(!number_found){
    	std::cout << "Number does not exist\n";
	} else {
   	 p=list->next;
     q->next=p;
     std:: cout << "Removed.";
	}
}

// Add a node to the list in ascending order
void order(node *list, int number){
    node *p, *q;
    p=list;

    if(p->next==NULL){
        node *new_node = new node;
        new_node->info=number;
        p->next=new_node;
        new_node->next=NULL;
    } else {
		while (p->next != NULL && p->next->info <= number) {
   		 q = p;
   		 p = p->next;
		}

		node *new_node = new node;
		new_node->info = number;
		new_node->next = p->next;
		p->next = new_node;
    }
}

int main(){
	//Create list
    node *list;
    //Indicate where list starts
    list = new node;
    list->next=NULL;
    //Pointers
    node *p, *q;
    //Menu
    int opt, num; 
    	do{
		std::cout << "\t-----MENU-----\n";
        std::cout << " 1) Add \n 2) Remove \n 3) Show \n 4) Exit\n";
        std::cout << "Option: ";
        std:: cin >> opt;

        switch(opt){
            case 1:
                std::cout << "Please enter a number: ";
                std::cin >> num;
                order(list,num);
                std::cout << "Added.";
                std::cout << "\n";
                break;
            case 2:	
			if(list->next==NULL){
	        	std:: cout << "The list is empty.";
	         }else{
                std::cout << "Enter the number you want to remove: ";
                std::cin >> num;
                remove(list,num);
             }
                std::cout << "\n";
                break;
            case 3:
                print(list);
                std::cout << "\n";
                break;
            case 4:
            	std:: cout << "Bye!";
                break;
            default:
                std::cout << "Invalid option.";
                std::cout << "\n";

        }
    }while(opt!=4);
    return 0;
}

