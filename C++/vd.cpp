#include <iostream>
#include <cmath>


int main(){
  double a;
  double b;
  double c;

std:: string name;
int age;

    std::cout<<"What is your name? "<< '\n';
    std::getline(std:: cin,  name);
    std::cout<<"How old are you "<<name << "?" <<'\n'; 
    std::cin >> age;

    std::cout<< "\nHello "<<name <<". \nYou are "<<age<< " years old"<<'\n';

    std::cout<< "Enter the size of the first side: ";
    std::cin >> a;
    std::cout<<"\nEnter the second side of the triangle: ";
    std::cin>> b;
    a=pow(a,2);
    b=pow(b,2);
    c= sqrt(a+b);

    std::cout<< c;
    

    return 0;
}
