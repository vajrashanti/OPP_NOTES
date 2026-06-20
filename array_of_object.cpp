#include<iostream>
#include<string>
using namespace std;

class employee{
    private:
     string name;
     int age;

    public:
     void getdata(){
        cout<<"Enter name:- ";
        cin>>name;
        cout<<"Enter age:- ";
        cin>>age;
     }
     void showdata(){
        cout<<"Name:- "<<name<<endl;
        cout<<"Age:- "<<age<<endl;
     }
};

int main(){
    int size = 3;
    employee manager[size];
    for(int i = 0;i<size;i++){
        cout<<"\nDetails of manager"<<i+1<<endl;
        manager[i].getdata();
    }
    for(int i = 0;i<size;i++){
        cout<<"\n Manager"<<i+1<<endl;
        manager[i].showdata();
    }
    return 0;
}

//   INPUTS

// Details of manager1
// Enter name:- xxx
// Enter age:- 25

// Details of manager2
// Enter name:- yyy
// Enter age:- 27

// Details of manager3
// Enter name:- zzz
// Enter age:- 28

//   OUTPUTS

//  Manager1
// Name:- xxx
// Age:- 25

//  Manager2
// Name:- yyy
// Age:- 27

//  Manager3
// Name:- zzz
// Age:- 28