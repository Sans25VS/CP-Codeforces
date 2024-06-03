private:
void insertAtTail(Node* &head,Node* &tail,int t){
    Node* newnode = new Node(t);
    if (head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    else {
        tail -> next = newnode;
        tail = newnode;

    }
}
public:{
        Node* Copy(Node* head){
            Node* clonehead = NULL:
            Node* clonetail = NULL;
            
            Node* temp = head;
            while(temp != NULL){
                insertAtTail(clonehead,clonetail,temp);
                temp = temp->next;
        }
        }
        // cretae a map
        unordered map<Node*,Node*> oldToNew;
        Node* originalNode = originalhead;
        Node* clonenode = clonehead;
        while(originalNode != NULL)
        {
            oldToNew[originalNode] = clonenode;
            originalNode = originalnode -> next;
            clonenode = clonenode -> next;
        }
            originalNode =  head;
            clonenode = clonehead;

        while(originalNode != NULL) {

        clonenode -> random = oldToNew[originalNode -> random]
            originalNode =  head;
            clonenode = clonehead;
        }   
        return clonehead;









}
