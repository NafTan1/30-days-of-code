#include<bits/stdc++.h>
using namespace std;

class Person 
{
    public:
    int age;

    Person (int initialAge){

        if (initialAge<0){
            cout << "Age is not valid, setting age to 0." << endl;
            this->age=0;
        }
        else this->age=initialAge;
    }
    void yearPasses();
    void amIOld();

};

void Person :: yearPasses(){

    this->age++;
}

void Person :: amIOld(){
    
    if ( this->age < 13) cout << "You are young" << endl;
    else if (this->age  >=13 && this->age <18) cout << "You are a teenager" << endl;
    else cout <<  "You are old" << endl;
}

int main()
{
    int t; 
    cin >> t;
    for (int a=0; a < t; a++)
    {
        int age;
        cin >> age;
        Person Person(age);
        Person.amIOld();
        for (int i = 0; i < 3; i++) Person.yearPasses();
        Person.amIOld();
        if (a<t-1) cout << endl;
    }
    return 0;
}