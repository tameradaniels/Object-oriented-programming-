/* Notes */
/*
What is object oriented programming?
-A set of rules to follow when coding.
-Be able to explain objects to a computer.

How is oop used to solve real world problems?
-Games, cars,sport, animal, anything that u can see in the real world, with oop you should be able to convert that so a computer can understand.

-Classes are important for oop to make these distinctions.
- A class is a complex data type 
-Helps you store info that is related to your program 
  e.g If youre building a fitness app you would need to collect more than just a user name , you would need height, weight, fitnesss goals.


*/



#include <iostream>
using std ::string;       //u dont have to type std:: everytime 

class Employee{
 public:               //created a class and  everything is private by default
   string Name;          //{}-Body of the class
   string Company;       //attributes of the class 
    int Age;    
    
   void IntroduceYourself(){
     std:: cout<<"Name- "<<Name<<std::endl;
     std:: cout<<"Company- "<<Company<<std::endl;
     std::cout<<"Age - "<<Age<<std::endl;
   }
};

int main ()
{
   Employee employee1;  //created an object of the class Employee 
   employee1.Name= "Tamera";
   employee1.Company="tt";
   employee1.Age =24;
   employee1.IntroduceYourself();

   Employee employee2;
   employee2.Name="John";
   employee2.Company="Amazon"
   employee2.Age= 55
   employee2.InroduceYourself();

   //this approach is correct but in effective if u have 100 employees u would have to do this 100 times
   //this second appraoch is more efficient 
   //we have to create a constructor 
   //a constructor doesnt have a void statement 
   //a constructor has the same name as the class it belongs to 


}