using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge'
        age= initialAge;

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        //if(age<0){age=0;}
if(age<0){
    std::cout<<"Age is not valid, setting age to 0."<<endl;
    age=0;
}
  if(age<13)
 {
     std::cout<<"You are young."<<endl;
 }
  else if(age>=13 & age<18 )
  {
      std::cout<<"You are a teenager."<<"\n";
  }
  else
  {
      std::cout<<"You are old."<<"\n";
  }   }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age+=1;
        //cout<<age<<"\n";

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
