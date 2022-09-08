#include<bits/stdc++.h>
using namespace std;
class Node{         // creation of Node 
public:
	int data;        // implimentation of data
	Node* next;      // implimentation of address
};
int main(){
	Node* head;
	Node* one = NULL;        // creation of empty node with the assined values of NULL
	Node* two = NULL;
	Node* three = NULL;


	one = new Node();         
	two = new Node();         // allocating the nodes into heap or allocating the memory 
	three = new Node();

	one->data  = 100;           // assigning the data to first node  
	one->next = two;            // assigning the address to the first node 

	two->data = 200;
	two->next = three;

	three->data = 300;
	three->next = NULL;
 
    head = one;                 //decliaring the head of a linked list 
                                // all the lined list are starts with the head 

    while(head != NULL){
    	cout<<head->data<<" ";       // loop for printing the linked list 
    	head = head->next;
    }
    return 0;

}