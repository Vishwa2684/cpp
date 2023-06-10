#include<iostream>>
//user defined linked list
//a node class is created for a linked 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class LinkedList{
    //creating head of linked list to use it directly in functions
    private:
    Node* head;

    //setting the head as null
    public:
    LinkedList(){
        head==NULL;
    }

void insertAthead(int val){
    Node* n= new Node(val);
n->next=head;
    head=n;
}

void insertAtTail(int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
    }
    Node *temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(){
    Node* temp= head;
while(temp!=NULL){
    std::cout<<temp->data<<" ";
    temp=temp->next;
}
}
};

int main(){
    //implementation of linked list in main function
LinkedList ll;
ll.insertAthead(2);
ll.insertAtTail(4);
ll.display();
}