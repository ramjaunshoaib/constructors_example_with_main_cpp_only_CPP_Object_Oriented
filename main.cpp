//
//  main.cpp
//  constructors
//
//  Created by shoaib ramjaun on 2018-08-06.
//  Copyright © 2018 shoaib ramjaun. All rights reserved.
//

#include <iostream>

using namespace std;

class Person{
private:
    int age;
    string name;
    
    
    
public:
    //the constructor is a fucntion with the class name and can be overloaded based on its parameters
    //example: Default constructor
    
    Person();
    
    //    example: Constructor to set name
    Person(string i_name);
    
    //    example: constructor to set age
    
    Person(int i_age);
    
    //    example: constructor to set age and name
    Person(int i_age, string i_name);
    
    
    
    // Display function
    void display();
    
};
Person:: Person(){
//    applying a safe empty state
    age = 0;
   name = "NoNAME";
}
Person:: Person(string i_name){
    name = i_name;
    age = 0;
}

Person:: Person(int i_age){
    age = i_age;
    name = "NoNAME";
}
Person:: Person(int i_age, string i_name){
    age = i_age;
    name = i_name;
}
void Person::display(){
    cout << "Name is " << name << "." <<endl;
    cout <<"Age is " << age << " years old.\n" << endl;
}


int main(){
    // creating an object of class Person
    
    Person object1;
    object1.display();
    // we can also create the object with a constructor value in its parameter
    // name constructor
    Person object2("Samuel");
    object2.display();
    //age constructor
    
    Person object3(3);
    object3.display();
    // name and age constructor
    
    Person object4(3, "Samuel");
    object4.display();
    
    
    
    return 0;
    
    
    
}
