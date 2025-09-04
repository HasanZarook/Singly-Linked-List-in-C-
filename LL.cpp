
#include <string>
#include<iostream>
#include<stdio.h>
using namespace::std;

class node
{
public:
string data;
    node* link;
};



class Linklist
{
 node* head;
node * tail;
 
 node* getAt(int u)
 {
  node* tptr=head;
  int x=0;
  if(head!=NULL)
  while(x<u)
   {
     tptr=tptr->link;
     x++;
   }
 return tptr;
}

public:
 Linklist()
  {
   head=NULL;
  }

 void insertH(string y)
 {
  node* nptr=new node;
  nptr->data=y;

  nptr->link=head;
  head=nptr;
  //cout<<"---"<<head->data<<endl;
 }
 

 void insertT(string y)
 {
  node* nptr=new node;
  nptr->data=y;

 
   nptr->link=NULL;
 if(head!=NULL)
   tail->link=nptr;
 else 
   head=nptr;
 
 tail=nptr;

 }
 
 void deleteY(string y)
 {
  node* tptr=head, *pptr=head;

  while(tptr!=NULL)
    {
      if(y.compare(tptr->data)==0)    //data is found
      {
       if(tptr==head)                    // data is found at head
          {
           tptr=tptr->link;
 	       head=head->link;          // deleting at head

	  }
       else                              // data is found anywhere else in list it could be on consective nodes or not
          {
	   pptr->link=tptr->link;
           tptr=pptr->link;
          }
       }
      else                    // if data is not found just move ahead
       {
        pptr=tptr;
        tptr=tptr->link;
       }
    }
 }

 //returns the presense of node  being searched
 int search(string y)
 {
  node * tptr=head;
  int fFound=0;
  int x=1;
  while(tptr!=NULL)
    {
      if(y.compare(tptr->data)==0)
       {
         fFound=1;                        
         break;
       }
      else
       {
        tptr=tptr->link;
        x++;
       }
    }
  return fFound;

 }
 
 //return the value at particular i node
 string get(int i)
 {
  node* hold=getAt(i);
  return hold->data;
 }
 
 void print()
 {
  node * tptr=head;
  while(tptr!=NULL)
    {
      cout<<tptr->data<<" -> ";
      tptr=tptr->link;

    }
  cout<<"NULL\n"	;
 }

 int getLength()
 {
  node * tptr=head;
  int x=0;
  while(tptr!=NULL)
    {
      tptr=tptr->link;
      x++;
    }
  return x	;
 }

 int isEmpty()
 {
   if(head==NULL)
    return 1;  // for true
   else return 0;  // for false
 }
};
/*
int main()
{
}*/
