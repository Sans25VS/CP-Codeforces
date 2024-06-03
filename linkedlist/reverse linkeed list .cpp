#inclide<iostream>
using namespace.std;
int main ()
{
Node *prev = NULL;
Node *curr = head;
Node*forward = null;
while(curr!=NULL){
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;


// iterative approach 
// time complexity = o(n)
// space complexity = o(1)

}



}




