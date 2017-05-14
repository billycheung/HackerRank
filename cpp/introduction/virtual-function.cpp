#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
};

int studentCount = 0, professorCount = 0;
class Professor : public Person{
    public:
    int publications;
    void getdata(){
        cin >> name >> age >> publications;
    }
    
    void putdata(){
        cout << name << " " << age << " " << publications << " " << ++professorCount;
    }
};

class Student : public Person{
    public:
    int sum = 0;
    
    void getdata(){
        cin >> name >> age;
        for (int i=0;i<6;i++){
            int tmp;
            cin >> tmp;
            sum += tmp;
        }
    }
    
    void putdata(){
        cout << name << " " << age << " " << sum << " " << ++studentCount;
    }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
