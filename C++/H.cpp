#include <iostream>

int main(){

int age;
std::cout<< "How old are you: ";
std::cin>>age;
if(age>=18){

    std::cout<< "You are allow in";
}
else if(age<0){

    std::cout<< "You have mot been born!!";
}
else{
    std::cout<<"You can't enter";
}



    return 0;
}