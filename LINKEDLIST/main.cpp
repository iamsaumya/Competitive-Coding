#include <iostream>

using namespace std;

class LinkedList;
class node
{
    int data;
    node *next;
public:
    node(int d){
        data = d;
        next= NULL;
    }
   friend class LinkedList;
};

class LinkedList{
    node *listptr;
    node *last;
public:
    LinkedList(){
        listptr=NULL;
    }
    void create(int);
    bool isempty();
    void display();
    void insertBeginning();
};

void LinkedList::create(int value = NULL){
    if(value==NULL){
    cout<<"How many nodes:";
    int n,num;
    cin>>n;
    while(n--){
    cout<<"Enter the data:";
    cin>>num;
    node * newnode = new node(num);
    if(listptr == NULL){
        listptr=last=newnode;
    }
    else {
        last->next=newnode;
        last =last->next;
         }
   }
    }
   else {
    node * newnode = new node(value);
    if(listptr == NULL){
        listptr=last=newnode;
    }
    else {
        last->next=newnode;
        last =last->next;
    }
   }
}
bool LinkedList::isempty(){
    if(listptr==NULL)
        return true;
    else
        return false;
}
void LinkedList::display(){
    node *temp = listptr;
    if(isempty()){
        cout<<"List is empty."<<endl;
        return ;
    }
    else {
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}


int main(){
    LinkedList L;
    L.create(4);
    L.create(10);
    L.create();
    L.display();
    return 0;
}
