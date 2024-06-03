 #include bits/stdc++. h
 // Logic checking loops 
 bool isloop (Node*head){

    map<Node*,bool>visited;
    Node*temp = head;
    while (temp != NULL){
    if(temp==NULL){
        return true;  
    } 

    if(visited[temp] = true) return true;

    visited[temp] = true;
    temp = temp->next;
 }
return false;

 }