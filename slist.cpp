#include <iostream>
#include<stdlib.h>	
using namespace std;
void insert();
void display();
void delete1();
static int count=0;
class node
{
    public:
    int data;
    node *next;
    
};node *start=NULL;


        
  
    


int main()
{
   
 char ch;
  int choice;

do
{
  cout<<"\n1.insert\n2.delete\n3.display\n";
  cout<<"enter your choice";
   cin>>choice;
  switch(choice)
{
  case 1:
	insert();
	break;
  case 2:
	reverse();
	break;
  case 3:
	display();
	break;
  default:
	cout<<"wrong choice";
	break;
}
cout<<"do you want to performed again";
cin>>ch;
cout<<"\n";
}while(ch=='y' ||ch=='Y');   return 0;
}


void insert()
{
    node *temp;

  if(start==NULL)
  {
        temp=(node*)malloc(sizeof(node));
        cout<<"enter the data";
        cin>>temp->data;
        temp->next=NULL;
        start=temp;
        
  }
  else
  {
      node *temp;
      temp=(node*)malloc(sizeof(node));
      cout<<"enter the data";
      cin>>temp->data;
     
      node *temp1;
      temp1=start;
      while(temp1->next!=NULL)
      {
          temp1=temp1->next;
      }
      temp1->next=temp;
	 temp->next=NULL;
      
      
  }
  
  
}  
    void display()
    {
         node *temp;
         temp=start;
        while(temp->next!=NULL)
        {
            cout<<" "<<temp->data;
            cout<<"\n";
            temp=temp->next;
        }
  	cout<<temp->data;

}

 void delete1()
{
 node *temp1;
  
  temp1=start;
 while(temp1->next!=NULL)
 {
   temp1=temp1->next;
 }  
 
node *temp;
temp=start;
while(temp->next!=temp1)
 {
   temp=temp->next; 
 } 
 temp->next=NULL; 
 free(temp1);
 
 
 
 
}
















