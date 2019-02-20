
                //Implementation By SAUMYA PANDEY, IF YOU ENCOUNTER ANY ERRORS PLEASE LET ME KNOW...THANK YOU.

#include <iostream>
#include<math.h>
using namespace std;
class Poly;

class node {
    int expo;
    int value;
    node * next;
public:
    node(int v,int e){
        value = v;
        expo = e;
        next = NULL;
    }
    friend Poly;
    friend  void concatenate(Poly,Poly);

};

class Poly{
    node * listptr;
    node * last;
public:
    Poly(){
        listptr=last= NULL;
    }
    void CreatePoly(int,int);
    void DisplayPoly();
    void MultiplyPoly(Poly,Poly,Poly);
    void Evaluate(int);
    friend  void concatenate(Poly,Poly);

};
void Poly::Evaluate(int a){
    cout<<"reached"<<endl;
    int result =0;
    node *newnode = listptr;
    while(newnode!=NULL){
      result = result + (newnode->value * pow(a,newnode->expo));
     newnode = newnode->next;
    }
    cout<<"Evaluated result is:"<<result<<endl;
}
void concatenate(Poly P, Poly P1){
    cout<<"Adding Polynomials we get:"<<endl;
    Poly P2;
    (P.last)->next = P1.listptr;
    P2 = P;
    node * newnode =  P2.listptr;
    node * newnode1;
    while(newnode){
        newnode1 = newnode->next;
        while(newnode1){
            if(newnode1->expo == newnode->expo){
                newnode->value = newnode->value + newnode1->value;
                newnode1->value = 0;
                newnode1 ->expo =0;
            }
            newnode1 = newnode1->next;
        }
        newnode = newnode ->next;
    }
    newnode = P2.listptr;
    int count =0;
    while(newnode->next!=NULL){
      if(newnode->value!=0){
        cout<<newnode->value<<"x^"<<newnode->expo;
        if((newnode->next)->value!=0)
            cout<<"+";
        newnode = newnode->next;
      }

    }
    cout<<endl;
}

void Poly::MultiplyPoly(Poly P, Poly P2,Poly P3){
    cout<<"Multiplying Polynomials:"<<endl;
    node *temp = P.listptr;
    int coef,exp;
    node *temp1 = P2.listptr;
    while(temp!=NULL){
        while(temp1!=NULL){
            coef = temp->value * temp1->value;
            exp = temp->expo + temp1->expo;
            P3.CreatePoly(coef,exp);
            temp1 = temp1->next;
        }
    temp1 =  P2.listptr;
    temp = temp->next;
    }
    P3.DisplayPoly();
}
void Poly::CreatePoly(int coeff,int expo){
    node *newnode =  new node(coeff,expo);
    if(listptr==NULL){
        listptr = last = newnode;
    }
    else {
        last->next= newnode;
        last = newnode;
     }
}
void Poly::DisplayPoly(){
    node * temp = listptr;
    while(temp!=NULL){
        cout<<" "<<temp->value<<"x^"<<temp->expo;
        if(temp->next!=NULL)
            cout<<"+";
        temp = temp->next;
        }
        cout<<endl;
    }
int main()
{
    Poly P,P1;


    P.CreatePoly(1,2);
    P.CreatePoly(1,1);
    P.CreatePoly(1,0);


    P1.CreatePoly(1,2);
    P1.CreatePoly(1,1);
    P1.CreatePoly(1,0);

    cout<<"Displaying first Polynomial"<<endl;
    P.DisplayPoly();
    cout<<"Displaying Second Polynomial"<<endl;
    P1.DisplayPoly();

    Poly P2;
    P2.MultiplyPoly(P,P1,P2);

    concatenate(P,P1);
    cout<<"Calling eval";
    P2.Evaluate(1);
    return 0;
}
