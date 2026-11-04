 #include <iostream>
 #include <ctime>

 bool run = true;
 void BeginRT();
  int rolled(){
 int num =(rand()%6)+1;
    return num;
}
 int rolled1(){
 int num =(rand()%6)+1;
    return num;
}


int main(){
 //srand(time(NULL));
 srand(time(0));
 std::string jk ;
 

 std::cout<<"Hi, Let play random numbers"<<'\n';
 std::cout<<"To start you will need to hit a 6"<<'\n';
     std::cout<<"Press any key to roll: ";  
    std::getline(std::cin>>std::ws,jk);
      int Firstrolled =rolled();
      std::cout<<"\nYour first roll: "<<Firstrolled<<'\n';
     if(Firstrolled==6){
     std::cout<<"\nLet go!!! first try baby!!"<<'\n';
     BeginRT();
 }
 else{
    do{
         
    std::cout<<"\nRoll again?"<<'\n';
    std::cout<<"Press any key to roll: ";
    std::getline(std::cin>>std::ws,jk); 
        int num1 =(rand()%6)+1;
        std::cout<<"Your next roll: "<<num1<<'\n';
        
    if(num1==6){
     std::cout<<"Finally hit 6"<<'\n';
     BeginRT();
     break;
    }
  }  while(run);

 }
    return 0;
}

 void BeginRT(){

std::cout<<"***************************ENTER THE HOLE*********************************"<<'\n';
std::cout << "This goes up to 42 steps, within these steps "<<'\n';
std::cout<<"lay traps that are design to rearange your life in game"<<'\n';
std::cout<< "Right now you are at step 0 -(The beginning)."<<'\n';
std::cout<<"Roll again to move up the steps and gain goodies."<<'\n';


//int cur = 0;
std::string TY;
//int df = rolled1();
//std::cout<<"You rolled: "<<df<<'\n';
//std::cout<<"You moved +"<<df<<'\n';
int moved;
int new_Place = 0;

    

//NEEDS FIXING I WANT THE NUMBER TO AWAY INCREASE
while(run){
    
    std::cout<<"\nRoll again?"<<'\n';
    std::cout<<"Press any key to roll: ";
    std::getline(std::cin>>std::ws,TY);
    if(!TY.empty()){
        moved =rolled1();
        std::cout<<"You rolled: "<<moved<<'\n';
        for(int i =1; i<=moved;i++){
            new_Place++;
        }
        std::cout<<"You moved +"<<moved<<'\n';
    }

   std::cout<<"PLACE: "<<new_Place<<'\n';




 if(new_Place>42){
    
     for(int i =1; i<=moved;i++){
            new_Place--;
        }
    std::cout<<"Rolled out of steps and returned to "<<new_Place<<"\nyou will have to Roll again"<<'\n';
 }
 else if(new_Place==42){
    std::cout<<"Your are now on step: "<<new_Place<<"\nYOU WIN!!!"<<'\n';
  
    break;}
 else{
   
    
  switch(new_Place){
    case 5:std::cout<<"NICE!!! YOU RAISE,"<<new_Place+13<<'\n';
    for(int i =1; i<=13;i++){
            new_Place++;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 16:std::cout<<"NAH!!! YOU GOING DOWN,"<<new_Place-15<<'\n';
    for(int i =1; i<=15;i++){
            new_Place--;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 21:std::cout<<"NAH!!! YOU GOING DOWN,"<< new_Place-17 <<'\n';
    for(int i =1; i<=moved;i++){
            new_Place--;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 23: std::cout<<"NICE!!! YOU RAISE,"<<new_Place+19<<'\n';
    for(int i =1; i<=19;i++){
            new_Place++;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 25: std::cout<<"NICE!!! YOU RAISE, "<<new_Place+11<<'\n';
    for(int i =1; i<=11;i++){
            new_Place++;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 36: std::cout<<"NICE!!! YOU RAISE, "<<new_Place+4<<'\n';
    for(int i =1; i<=4;i++){
            new_Place++;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 37: std::cout<<"NAH!!! YOU GOING DOWN,"<<new_Place-14<<'\n';
    for(int i =1; i<=14;i++){
            new_Place--;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    case 41:new_Place-36; std::cout<<"NAH!!! YOU GOING DOWN,"<<'\n';
          for(int i =1; i<=36;i++){
            new_Place--;
        }std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
    default:std::cout<<"Your are now on step: "<<new_Place<<'\n';
    break;
  }
    }
 }

  std::cout<<"*********************************************************************************"<<'\n';
 }