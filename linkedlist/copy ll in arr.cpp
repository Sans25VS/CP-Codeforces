// copy ll elements of linked list in vector

vector<int> arr;
Node*temp = head;
arr.push_back(temp -> data);
 temp = temp -> next;

 // naive approch (to check whether thee given linked list is pallindrome)
 checkPalindrome(){

    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
    }
        s++;
        e--;    
        return true;
    }
 }
// reverse alinkked list
Node*curr = head;
Node*next = NULL;
Node*prev = NULL;
while(curr != NULL){
next = curr->next;
curr -> next = prev;
prev = curr;
curr = next;
}
return prev;

//
map unordered<string,int> max;






 
