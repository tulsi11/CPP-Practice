#include <iostream>

using namespace std;

class abstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:abstractEmployee{
    private:
        string Name;    //states or attributes
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
            Age = age;
        }
        int getAge(){
            return Age;
        }
        
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
        
        void AskForPromotion(){
            if(Age>35){
                cout<<Name<<" Got Promoted"<<endl;
            }else{
                cout<<Name<<" not get any promotion"<<endl;
            }
        }
        
        
};

int main()
{
    Employee emp1 = Employee("Tulsi","Adobe",20);
    Employee emp2 = Employee("Siddhi","Google",45);
    
    emp1.AskForPromotion();
    emp2.AskForPromotion();

    return 0;
}
