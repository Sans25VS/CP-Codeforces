#include<bits/stdc++.h>
using namespace std;
class main{
public:
int data;
Node* next;
 
Node(int data){
this->data = data;
this->next = NULL;
}
};
void insertAtHead(Node* &head, int d){
Node* temp = new Node(d);
temp -> next = head;
head = temp;
}
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
            }
     cout<<endl; 
    }
    
}
int main ()
{

Node* node1 = new Node(10);
//cout << node1->data << endl;
//cout << node1->next << endl;
//head pointed to node1
Node* head = node1;
print head;
insertAtHead(head, 12);

print head;

return 0;


}



