#include <bits/stdc++.h>

using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            if(age>=18)
                Age = age;
        }
        int getAge(){
            return Age;
        }
        
        void intro(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }
        
        Employee(string name,string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
    
};

int main()
{
    Employee emp1 = Employee("Tulsi","Adobe",20);
    emp1.intro();
    Employee emp2 = Employee("Siddhi","Google",21);
    emp2.intro();
    
    emp2.setAge(16); //Not updating because of validation rules
    emp2.setAge(34);
    
    cout<<emp2.getName()<<" is "<<emp2.getAge()<<" years old ";
    return 0;
}
