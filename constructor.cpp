#include <iostream>

using namespace std;

class Employee{
    
    public:
        string Name;    //states or attributes
        string Company;
        int Age;
        
        void intro(){   //Behavior 
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl<<endl;
        }
        
        Employee(string name,string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
};

int main()
{
    Employee emp = Employee("Tulsi","Adobe",20);
    emp.intro();
    
    Employee emp2 = Employee("Siddhi","Google",19);
    emp2.intro();

    return 0;
}
