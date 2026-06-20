#include<iostream>
#include<string>
using namespace std;
class Collage{
    private:
     static string collagename;
     string name;
     int roll;

    public:
     Collage(string n, int r){
        name = n;
        roll = r;
     }
     void displayinfo(){
        cout<<"name:- "<<name<<endl;
        cout<<"roll:- "<<roll<<endl;
     }
     void static display(){
        cout<<"Collage Name:- "<<collagename<<endl;
     }
};
string Collage::collagename = "Cosmos";
int main(){
    Collage c("xyz",1234);
    c.displayinfo();
    Collage::display();
    return 0;
}

// name:- xyz
// roll:- 1234
// Collage Name:- Cosmos