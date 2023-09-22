#include<iostream>
using namespace std;

class hero {
    
    //this is a propertie
    public:     // we can access public both outside the class and inside the class
    int health;
    char level;
   
    
};

int main()
{
    // this is a object
    hero ramesh;
    ramesh.health =70;
    ramesh.level = 'A';
    cout<< " health is "<<ramesh.health<<endl;// now we can access the health we use public this is outside
    cout<< " level is "<<ramesh.level<<endl;
    // cout<<"size "<<sizeof(h1)<<endl;
}
