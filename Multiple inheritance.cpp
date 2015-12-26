#include<iostream>
using namespace std;

class person
 {
  string name;
  int age;
  public:
  void setName(string x)
  {
   name=x;
  }
  void getName()
  {
      cout<<name<<"\n";
  }
  void setAge(int a)
  {
   age=a;
  }
  void getAge()
  {
    cout<<age<<"\n";
  }

 };
 class student
 {
   int cgpa;
   string name;
  int age;
   public:  void setName(string x)
  {
   name=x;
  }
  void getName()
  {
      cout<<name<<"\n";
  }
  void setAge(int a)
  {
   age=a;
  }
  void getAge()
  {
    cout<<age<<"\n";
  }
   void setCGPA(float c)
   {
     cgpa=c;
   }
   void getCGPA()
   {
       cout<<cgpa<<"\n";
   }
 };
 class Teacher:public person,public student
  {
    int salary;
    string name;
  int age;
    public:
    void setName(string x)
  {
   name=x;
  }
  void getName()
  {
      cout<<name<<"\n";
  }
  void setAge(int a)
  {
   age=a;
  }
  void getAge()
  {
    cout<<age<<"\n";
  }
    void setSalary(int s)
    {
        salary=s;
    }
    void getSalary()
    {
        cout<<salary<<"\n";
    }
  };
  int main()
  {
    student s;
	s.setName("bill");
	s.setAge(20);
	s.setCGPA(3.78);

	Teacher t;
	t.setName("alex");
	t.setAge(38);
	t.setSalary(2000);


	s.getName();
	s.getAge() ;
    s.getCGPA();


	t.getName() ;
    t.getAge() ;
    t.getSalary() ;
    return 0;


  }
