
#include <iostream>
using namespace std;

class Person{
        //content of Person
       virtual double getComm() {return 0;};
};


class Employee:public Person
{
public:
        Employee(string fName, string lName, double sal)
        {
                FirstName = fName;
                LastName = lName;
                salary = sal;
        }
        string FirstName;
        string LastName;
        double salary;
        void show()        {
                cout << "First Name: " << FirstName << " Last Name: " << LastName << " Salary: " << salary<< endl;
        }
        void addBonus(double bonus)        {
                salary += bonus;
        }

};

class Manager :public Employee{
public:
        Manager(string fName, string lName, double sal, double comm) :Employee(fName, lName, sal)
        {
                Commision = comm;
        }
        double Commision;
        double getComm()        {
                return Commision;
        }
};

class Clerk :public Employee{
public:
        Clerk(string fName, string lName, double sal, Manager* man) :Employee(fName, lName, sal)        {
                manager = man;
        }
        Manager* manager;
        Manager* getManager()        {
                return manager;
        }
};

void congratulate(Employee* emp){
        cout << "Happy Birthday!!!" << endl;
        emp->addBonus(200);
        emp->show();
};

int main(){
    //Вказівник на базовий обєкт: pointer to base class object
    Employee* emp;
    
    // Обєкти похідних класів: object of derived class
    Manager m1("Steve", "Kent", 3000, 0.2);
    Clerk c1("Kevin","Jones", 1000, &m1);
    
    // перетворення вгору: implicit upcasting
    emp = &m1;
    
    //It's ok
    cout<<emp->FirstName<<endl;
    cout<<emp->salary<<endl;
    
    //Помилка(переторення вгору) Fails because upcasting is used
    //cout<<emp->getComm();
    
    congratulate(&c1);
    congratulate(&m1);
    
    cout<<"Manager of "<<c1.FirstName<<" is "<<c1.getManager()->FirstName;


  //explicit downcasting from Employee to Manager
   Manager* m2 = (Manager*)(emp);

    Employee e1("Peter", "Green", 1400);
   //try to cast an employee to Manager
    Manager* m3 = (Manager*)(&e1);
    cout << m3->getComm() << endl;

    Employee e2("Peter", "Green", 1400);
    Manager* m4 = dynamic_cast<Manager*>(&e2);
    if (m4)
        cout << m4->getComm() << endl;
     else
        cout << "Can't  cast from Employee to Manager" << endl;
}

/*
Steve
3000
Happy Birthday!!!
First Name: Kevin Last Name: Jones Salary: 1200
Happy Birthday!!!
First Name: Steve Last Name: Kent Salary: 3200
Manager of Kevin is Steve0
Can't  cast from Employee to Manager

*/
