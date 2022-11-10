#include<iostream>
using namespace std;


void insertionafter(Node *prenode , int newdata){

Node *newnode=new node ();
newNode->data=newdata;
newNode->next=prenode->next;
preNode->next=newnode;

};
void printlist(Node*n){

while (n!= NULL)
{
    cout<<n->data<<endl;
    n=n-> next;
}
int main(){

Node *head=new Node ();
Node *Second=new Node ();
Node *third=new Node ();

head -> data =5;
head-> next=Second;

Second-> data=6;
Second->next=third;

third->data=7;
third->next=NULL;
 

insertionafter(Second,10);
printlist(head);

return 0;
}