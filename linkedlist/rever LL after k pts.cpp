#include bits/stdc++. h;
using namespace std;
Nreverse(Node* head,int k){

    if(head==NULL) return Null;

    Node*curr =  head;
    Node*prev = NULL;
    Node*next = NULL;
    int count = 0;
    while(curr!=NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    int main(){
if(head  != NULL){
        head->next = Nreverse(next,k);
}

        return prev;






    }




}