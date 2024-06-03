void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    delete temp;
}
In this code, the deleteNode function takes in a pointer to the head of the linked list and the key of the node to be deleted. It first checks if the head node contains the key value. If so, it updates the head to point to the next node and deletes the previous head node.

If the key is not found in the head node, the function iterates through the list until it finds the node with the specified key value. Once found, it updates the next pointer of the previous node to point to the node after the one being deleted, and then deletes the target node.

Note that this implementation assumes that the linked list has no duplicate values. If there are duplicate values, it will only delete the first node it finds with the specified value.






