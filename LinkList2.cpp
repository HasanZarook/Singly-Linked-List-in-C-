
#include<iostream>
#include<stdio.h>
using namespace::std;

class node
{
public:
    int data;
    node* next;
};

class Linklist
{
    node* head;
    
public:
    Linklist()
    {
        head=NULL;
    }
    
    // insert at the start of the list
    void insertH(int y)
    {
       node *SNnode = new node();
       SNnode->data=y;
       node * temp = head;
       head = SNnode;
       head->next = temp;
        
    }
    // insert at the end of the list
    void insertT(int y)
    {
        node *LNnode = new node();
        LNnode->data = y;
        LNnode->next =NULL;
        
        if(head!= NULL){
        node *temp = head;
        while(temp->next!= NULL){
        	temp= temp->next;
		}
		temp->next = LNnode;
		}
		
		else
		head=LNnode;
        
    }
    
    // position starting from 0
    void insertAfter(int y,int pos)
    {
       node *MNnode = new node();
       MNnode->data=y;
       node *temp = head;
       node *temp2;
	   while(pos>1){
	   		temp2 = temp->next->next;
	   		temp=temp->next;
			pos-=1;	
	   }
	   temp->next=MNnode;
	   MNnode->next=temp2;
	    
        
        
        
    }
    // delete from the head/start of the list
    void deleteH()
    {
    	if(head==NULL){
        	cout<<endl;
            cout<<"it is empty. we didn't add any values yet"<<endl;}
            else{
			
 		node *temp = head;
        head = head->next;
        delete temp;}
        
    }
    
    // delete from the tail of the list and return the deleted value
    void deleteT()
    {	if(head==NULL){
        	cout<<endl;
            cout<<"it is empty. we didn't add any values yet"<<endl;}
        else{	
        node * temp = head;
        node*back;
        while(temp->next!= NULL){
        	back = temp;
        	temp= temp-> next;
        	
		}
		back->next=NULL;
		delete temp;}
        
        
        
    }
    
    
    //returns the no of node  being searched
    void search(int y)
    {
    	node * temp = head;
    	int no_of_nodes=1;
    	int count_of_same_nodes = 0;
     	while(temp->next!=NULL){
     		if(temp->data==y){ 
     		count_of_same_nodes+=1;
     		cout<<"the position of your value is "<<no_of_nodes<<" ,still searching dfrnt same value position"<<endl;
     		}
     		no_of_nodes+=1;
     		temp=temp->next;
		 }
		 if(temp->data==y){
		 	count_of_same_nodes+=1;
		 	cout<<"the position of your value is "<<no_of_nodes<<" ,still searching dfrnt same value position"<<endl;
		 }
		 cout<<endl;
		 cout<<"No more places."<<endl;
		 cout<<"total places of your value is "<<count_of_same_nodes<<endl;
        
    }
    
    void print()
    {
        node * tptr=head;
        while(tptr!=NULL)
        {
            cout<<tptr->data<<" -> ";
            tptr=tptr->next;
            
        }
        cout<<"NULL\n"    ;
    }
    
   
    void isEmpty()
    {
        if(head==NULL){
        	cout<<endl;
            cout<<"yes, it is empty. we didn't add any values yet"<<endl;}  // for true
        else {
			cout<<endl;
			cout<<"No, it is not empty. we already have some values. we can see it by print fn"<<endl;}  // for false
    }
};




    /////////////////////Sample Driver Program/////////////////////////////
int main()
{	
	
   
    Linklist ll;
    Linklist *a =&ll;
    cout<<a<<endl;
    cout<<&a;
    ll.isEmpty();
    
    
    ll.insertT(1);
    cout<<endl;
    ll.print();
    
    ll.isEmpty();
    
    ll.insertH(3);
    cout<<endl;
    ll.print();
    
    ll.insertT(3);
    cout<<endl;
    ll.print();
    
    ll.insertH(5);
    cout<<endl;
    ll.print();
    
    ll.insertH(7);
    ll.insertH(6);
    cout<<endl;
    ll.print();
    
    ll.insertAfter(3,2);     //i(zrk) add new value after position 2...it means add at 3rd position.
    cout<<endl;
    ll.print();
    
    cout<<"++++ \n";
	ll.search(3);
    ll.deleteH();
    cout<<endl;
    ll.print();
    
    ll.deleteT();
    cout<<endl;
    ll.print(); 
    
    
}

