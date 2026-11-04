#include<iostream>
std::string bn,nick;
int vf,age;

void PARTY();
void SRECT();
int main(){
std::cout<<"*******************PLAY A GAME**************************"<<'\n';
std::cout<<"Hi, What is your name?"<<'\n';
std::getline(std::cin>>std::ws,bn);
std::cout<<"How old are you?"<<'\n';
std::cin>>age;
std::cout<<"Nice to meet you: "<<bn<<'\n';

if(age<18){
do{std::cout<<"What would you like to play "<<bn<<":\n1:Party\n2:Exit"<<'\n';
 std::cin>>vf;
switch(vf){
        case 1: std::cout<<"YOU HAVE CHOSE PARTY\nLet Go!!!"<<'\n';
            std::cout<<"Enter a nickname to get started : ";
            std::getline(std::cin>>std::ws,nick);
          PARTY();

    break;
    case 2: std::cout<<"YOU ARE EXITING\nBYE!!!"<<'\n';
    break;
    default:std::cout<<"Please choose from the given option (1-2)"<<'\n';
    break;}
 
  }while(vf<1||vf>2);
}

else{
do{std::cout<<"What would you like to play "<<bn<<":\n1:Party\n2:Srect\n3:Exit"<<'\n';
 std::cin>>vf;
switch(vf){
    {{case 1: std::cout<<"YOU HAVE CHOSE PARTY\nLet Go!!!"<<'\n';
            std::cout<<"Enter a nickname to get started : ";
            std::getline(std::cin>>std::ws,nick);
          PARTY();

    break;
    case 2: std::cout<<"YOU HAVE CHOSE SRECT\nLet Go!!!"<<'\n';
            std::cout<<"Enter a nickname to get started : ";
            std::getline(std::cin>>std::ws,nick); SRECT();
    break;}
    case 3: std::cout<<"YOU ARE EXITING\nBYE!!!"<<'\n';
    break;
    default:std::cout<<"Please choose from the given option (1-3)"<<'\n';
    break;}
}}while(vf<1||vf>3);}
std::cout<<(vf==3?"":"BYE "+nick)<<'\n';
std::cout<<"*******************PLAYED A GAME************************";
return 0;

}
void PARTY(){
std::cout<<"It time to PARTY!!! \nFor U to party you need to know some rules "<<'\n';
std::cout<< "Rules in a party makes it no fun but you need to know this ones"<<'\n';


}
 void SRECT(){
std::cout<<"                 SRECT\nI don't know what this is about"<<'\n';

 }