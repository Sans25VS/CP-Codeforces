#include<iostream>
using namespace std;

class hero {

public:
int health; //

char name;
};

int main() {

hero ramesh;
 
ramesh.health = 10;
ramesh.name = 'A'; 
cout << "name is"<< ramesh.name << endl;
cout<< "health is" << ramesh.health << endl;

return 0;
}    
