#include <iostream>

using namespace std;

class abstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:abstractEmployee{
    private:
        // string Name;    //states or attributes
        string Company;
        
        
    protected:
        string Name;
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

class Developer:public Employee{
    public:
        string FavLang;
        Developer(string name, string company, int age, string favLang): Employee(name,company,age)
        {
            FavLang = favLang;
        }
        
        void bug(){
            cout<<Name<<" fixed bug using "<<FavLang<<endl;
        }
};

class Teacher: public Employee{ //Using public it can inherit all the variables and functions of parent class Employee
    public:
        string Subject;
        Teacher(string name, string company, int age, string subject): Employee(name,company,age)
        {
            Subject = subject;
        }
        
        void prepareLesson(){
            cout<<Name<<" is teaching "<<Subject<<endl;
        }
    
};

int main()
{
    Developer d = Developer("Tulsi","Adobe",20,"C++");
    // d.bug();
    // d.AskForPromotion();
    Teacher t = Teacher("Anuradha","PCCOE",45,"ML");
    t.prepareLesson();
    t.AskForPromotion();
    return 0;
}
