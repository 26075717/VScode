#include <iostream>
#include <ctime>

double f=0;
int a=0,b=0,c=0,d=0,e=0;
int set_steps =0, playerPosition =0, playerRolls =0, numdic =0 , Position_Lock=0,Place;
int crRolled =0;
bool run=true;
  int doors = 0;
int newplayerPosition=0;
int trapBeingsat =0;

int foundDoor =0;



std:: string choice;
//ABC - MOVEMENT
  int MoveABC(int ar, int br, int cr, double Placedd, int setplaced){
    int movedto = 0;


int PartsJumper =(rand()%40)+1;
double setparts =setplaced/5;
int SetPart = setparts;

  double SetParts1 =setparts;  // = 80
   double SetParts2 =setparts+SetParts1 ;  //160
   double SetParts3 =setparts+SetParts2; //240
    double SetParts4 =setparts+SetParts3; //320
    double SetParts5 =setparts+SetParts4;  //400
    int GOdown = 0;
    

int SetPart1 = 0;
int SetPart2 = 0;
int SetPart3 = 0;
int SetPart4 = 0;
int SetPart5 = 0;

if(set_steps%5 == 0){
SetPart1 = SetParts1;
SetPart2 = SetParts2;
SetPart3 = SetParts3;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
  
}
else{
  double remain = setparts - SetPart;
  int reman = 5*remain;
  int Placereman = rand()%5+1;

  switch(Placereman){

 case 1 : std::cout<<"Step 1 is longer than the rest by: " <<reman<<'\n';
    SetPart1 = SetParts1;
SetPart2 = SetParts2;
SetPart3 = SetParts3 + reman;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;

case 2 : std::cout<<"Step 5 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5+ reman;
break;
case 3 : std::cout<<"Step 1 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 + reman;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;
case 4 : std::cout<<"Step 2 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 ;
SetPart2 = SetParts2+ reman;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;
case 5 : std::cout<<"Step 4 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 ;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4 + reman;
SetPart5 = SetParts5;
break;
}



}

     // 0 - 80

    if(Placedd <=SetPart1){
      int arRolled = (rand()%SetPart1)+1;
     if(ar>0){
       //PartsJumper
    switch(PartsJumper){
     case 4: movedto =SetParts2+1; break;//Part 3
     case 11: movedto =SetPart4+1; break;//Part 5
     case 15: movedto =SetPart1+1; break;//Part 2
     case 17: movedto =SetPart2+1; break;//Part 3
     case 19: movedto =SetPart3+1; break;//Part 4
     case 21: movedto =SetPart2+1; break;//Part 3
     case 24: movedto =SetPart1+1; break;//Part 2
     case 28: movedto =SetPart2+1; break;//Part 3
     case 29: movedto =SetPart1+1; break;//Part 2
     case 32: movedto =SetPart1+1; break;//Part 2
     case 37: movedto =SetPart1+1; break;//Part 2
     default :  movedto = Placedd+arRolled; break;
 }

       

     }
     else if(br>0){
      while(run){
       int BrRolled = (rand()%SetPart1)+1;
       GOdown = Placedd-BrRolled; 

       if(GOdown<0){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     }
     
     }
     else if(cr>0){
       
       crRolled = (rand()%SetPart1)+1; 
       std::cout<<"||\tYou are stack on step: "<<Placedd<< " for: "<<crRolled<<" turn/s."<<'\n';

     }


    }
    
    
    
    //81-160
    else if(Placedd <=SetPart2){

       int arRolled = (rand()%SetPart2)+1;
     if(ar>0){
       //PartsJumper
    switch(PartsJumper){
     case 5: movedto =SetParts2+1; break;//Part 3
     case 14: movedto =SetPart4+1; break;//Part 5
     case 15: movedto =SetPart2+1; break;//Part 2
     case 17: movedto =SetPart2+1; break;//Part 3
     case 19: movedto =SetPart3+1; break;//Part 4
     case 21: movedto =SetPart4+1; break;//Part 5
     case 23: movedto =SetPart3+1; break;//Part 4
     case 27: movedto =SetPart2+1; break;//Part 3
     case 28: movedto =SetPart4+1; break;//Part 5
     case 31: movedto =SetPart2+1; break;//Part 3
     case 36: movedto =SetPart3+1; break;//Part 4
      default :  movedto = Placedd+arRolled; break;
 }

       

     }
     else if(br>0){
      while(run){
       int BrRolled = (rand()%SetPart2)+1;
       GOdown = Placedd-BrRolled; 

       if(GOdown<0){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     }
     
     }
     else if(cr>0){
       
       crRolled = (rand()%SetPart2)+1; 
       std::cout<<"||\tYou are stack on step: "<<Placedd<< " for: "<<crRolled<<" turn/s."<<'\n';

     }



    }
    
    
   
    //161-240
    else if(Placedd <=SetPart3){

  int arRolled = (rand()%SetPart2)+1;
     if(ar>0){
       //PartsJumper
    switch(PartsJumper){
     case 8: movedto =SetParts3+1; break;//Part 4
     case 13: movedto =SetPart4+1; break;//Part 5
    
     case 17: movedto =SetPart3+1; break;//Part 4
     case 19: movedto =SetPart4+1; break;//Part 5
     case 22: movedto =SetPart4+1; break;//Part 5
     case 27: movedto =SetPart3+1; break;//Part 4
    
     case 29: movedto =SetPart4+1; break;//Part 5
     case 31: movedto =SetPart3+1; break;//Part 4
  
     case 35: movedto =SetPart3+1; break;//Part 4
     default :  movedto = Placedd+arRolled; break;
 }

       

     }
     else if(br>0){
      double halfed = 0;
      int half = 0;

       switch(PartsJumper){
     case 4: movedto =SetParts3-SetPart1; break;//Part 2
     case 11: movedto =SetPart3-SetPart2; break;//Part 1
     case 15: movedto =(SetPart3-SetPart3)+1; break;//Part 2
     case 17: movedto =SetPart3-SetPart1; break;//Part 3
     case 19: movedto =SetPart3-SetPart1; break;//Part 4
     case 21: halfed = SetPart2/2;
              half = halfed;
               movedto =half; break;//Part 3
     case 24: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2
     case 28: halfed = SetPart1/2;
              half = halfed;
               movedto =half;; break;//Part 3
     case 29: movedto =SetPart3-SetPart3; break;// move to 0
     case 32: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2

     case 37: 
             halfed = SetPart2/2;
              half = halfed;
               movedto =half;
     
     break;//Part 2
      default : 
 
      while(run){
       int BrRolled = (rand()%SetPart3)+1;
       GOdown = Placedd-BrRolled; 

       if(GOdown<0){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     }
     break;
    }
     
     }
     else if(cr>0){
       
       crRolled = (rand()%SetPart3)+1; 
       std::cout<<"||\tYou are stack on step: "<<Placedd<< " for: "<<crRolled<<" turn/s."<<'\n';

     }
      
    }
    
    
   
  //  241-320
  else if(Placedd <=SetPart4){

  int arRolled = (rand()%SetPart1)+1;
     if(ar>0){
       //PartsJumper
    switch(PartsJumper){
     
     case 11: movedto =SetPart4+1; break;//Part 5
     case 17: movedto =SetPart4+1; break;//Part 5
     
     case 21: movedto =SetPart4+1; break;//Part 5
     case 27: movedto =SetPart4+1; break;//Part 5
     
     case 34: movedto =SetPart4+1; break;//Part 5
     case 38: movedto =SetPart4+1; break;//Part 5
     default :  movedto = Placedd+arRolled; break;
 }

       

     }
     else if(br>0){
       double halfed = 0;
      int half = 0;

       switch(PartsJumper){
        
  case 1: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2
     case 7: movedto =SetParts5-SetPart3; break;//Part 2
     case 13: movedto =10; break;//Part 2
     case 14: movedto =SetPart3-SetPart2; break;//Part 3
     case 16: movedto =SetPart4-SetPart2; break;//Part 1
     case 18: movedto =120; break;//Part 2
     case 19: movedto =SetPart3-SetPart1; break;//Part 4
     case 21: halfed = SetPart2/2;
              half = halfed;
               movedto =half; break;//Part 3
     case 24: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2
     case 28: halfed = SetPart2/2;
              half = halfed;
               movedto =half;; break;//Part 3
     case 29: movedto =SetPart5-SetPart3; break;// move to 0
     case 32: halfed = SetPart3/2;
              half = halfed;
               movedto =half; break;//Part 2

     case 37: 
             halfed = SetPart1/2;
              half = halfed;
               movedto =half;
     
     break;//Part 2
     default : 
 
      while(run){
       int BrRolled = (rand()%SetPart5)+1;
       GOdown = Placedd-BrRolled; 

       if(GOdown<0){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     }
     break;
    }
     
     
     }
     else if(cr>0){
       
       crRolled = (rand()%SetPart2)+1; 
       std::cout<<"||\tYou are stack on step: "<<Placedd<< " for: "<<crRolled<<" turn/s."<<'\n';

     }

  }
    
    
    
   // 321-400
   else if(Placedd <=SetPart5){

     if(ar>0){
       
       while(run){
          int arRolled = (rand()%SetPart1)+1;
      
       GOdown = Placedd+arRolled; 

       if(GOdown>set_steps){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     } 
    

     }
     else if(br>0){
      double halfed = 0;
      int half = 0;

       switch(PartsJumper){
        
  case 2: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2
     case 4: movedto =SetParts5-SetPart1; break;//Part 2
     case 11: movedto =SetPart4-SetPart2; break;//Part 1
     case 15: movedto =10; break;//Part 2
     case 17: movedto =SetPart3-SetPart1; break;//Part 3
     case 19: movedto =SetPart3-SetPart1; break;//Part 4
     case 21: halfed = SetPart2/2;
              half = halfed;
               movedto =half; break;//Part 3
     case 24: halfed = SetPart3/2;
              half = halfed;
               movedto =half; break;//Part 2
     case 28: halfed = SetPart1/2;
              half = halfed;
               movedto =half;; break;//Part 3
     case 29: movedto =SetPart5-SetPart3; break;// move to 0
     case 32: halfed = SetPart1/2;
              half = halfed;
               movedto =half; break;//Part 2

     case 37: 
             halfed = SetPart2/2;
              half = halfed;
               movedto =half;
     
     break;//Part 2
     default : 
 
      while(run){
       int BrRolled = (rand()%SetPart5)+1;
       GOdown = Placedd-BrRolled; 

       if(GOdown<0){
//continue the loop

       }
       else{
        movedto = GOdown;
        break;
       }

     }
     break;
    }
     
     }
     else if(cr>0){
       
       crRolled = (rand()%SetPart5)+1; 
       std::cout<<"||\tYou are stack on step: "<<Placedd<< " for: "<<crRolled<<" turn/s."<<'\n';

     }

   }




return movedto;
             }


void Door_Found(){


if(foundDoor>0){
           std::cout<<"||\t ______________ "<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t| O            |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t ______________ "<<"'\n";
           



}
else{
                std::cout<<"||\t ______________ "<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t| O XXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t ______________ "<<"'\n";
                



}

}

  int Obstacle(int Place){
      std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
  std::cout<<"||                                                                           ||"<<'\n';
 



    std::cout<<"||                                                                           ||"<<'\n';
    std::cout<<"||\tYou are now on step: "<<Place<<'\n';
    
          if(trapBeingsat<=Place && doors<1){
      std::cout<<"||                                                                           ||"<<'\n';
      std::cout<<"||\t\t\tDoors has started showing " <<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
                                                                             
             doors=20; 
    }
 
    
    int outof100 =0;
    int up_down=0;
    int rolled = (rand()%6)+1;//delet later
    
    double setlevel =set_steps;
    int Placed =Place;
    int obstacle_a= (rand()%25)+1;
    int obstacle_b = (rand()%25)+1;

    std::cout<<"||                                                                           ||"<<'\n';


    if(Place<trapBeingsat){
      //Trap doors won't show
      a=-3;b=-5;c=-4;
      doors = -5;
    }

  else if(Place>=trapBeingsat){  
    //Show trap doors

        if(obstacle_a == obstacle_b){
          std::cout<<"||\tSomething is ahead...--->";
          std::getline(std::cin>>std::ws, choice);
          std::cout<<"||\tOh, this is bad... "<<'\n';
            c=9; a=-30; b=-3;
             std::cout<<"||\tKeep moving...---> ";
            std::getline(std::cin>>std::ws, choice);

        }
        else if(obstacle_a >6 && obstacle_a<10){
           std::cout<<"||\tSomething is ahead...---> ";
           a=5,e=5;b=-8; c=-4;
           std::getline(std::cin>>std::ws, choice);
            foundDoor=4;
           Door_Found();

           
           std::cout<<"||\tYou found a door(A1) and entered it."<<'\n';
            std::cout<<"||\tKeep moving...---> ";
           std::getline(std::cin>>std::ws, choice);
        }
        else if(obstacle_a>11&& obstacle_a<16){
            std::cout<<"||\tSomething is ahead...---> ";
             std::getline(std::cin>>std::ws, choice);

              foundDoor=4;
           Door_Found();
          
         c=-3;  a=-5; b=8;e=7;
            std::cout<<"||\tYou found a door(B1) and entered it."<<'\n';
             std::cout<<"||\tKeep moving...---> ";
             std::getline(std::cin>>std::ws, choice);
        }
     else if(obstacle_a>0&& obstacle_a<3){
         
         std::cout<<"||\tWait something could be here...---> ";
          std::getline(std::cin>>std::ws, choice);
         if(obstacle_b>0&&obstacle_b<3){
             
             a=9; b=-4; c=-5; e=-9;
              foundDoor=7;
           Door_Found();
            
             
             
             std::cout<<"||\tYou found a door(A2) and entered it."<<'\n';
              std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
            }
            
            else if(obstacle_b>2&&obstacle_b<12){
           foundDoor=-4;
           Door_Found();
                
          
                
            c=-9;    a=0,b=0,e=0; 
                std::cout<<"||\tNo door found. "<<'\n';
                 std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
              }
       else if(obstacle_b>11&&obstacle_b<16){
          foundDoor=4;
           Door_Found();
         
       b=8,e=7;  a=-8; c=-9; 
       std::cout<<"||\tYou found a door (B2) and entered it."<<'\n';
        std::cout<<"||\tKeep moving...---> ";
       std::getline(std::cin>>std::ws, choice);
       
    }
    else{
       a=-8; b=-5; c=-9; e =-5;
std:: cout<<"||\tOH...nothing is here...\n";
      std::cout<<"||\tKeep moving...---> ";
       std::getline(std::cin>>std::ws, choice);

    }
}
  else{
    a=-8; b=-5; c=-9; e =-5;
    std::cout<<"||\tClear part. "<<'\n';
     std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
    
    
   }
  }

  else{
         a=-8; b=-5; c=-9; e =-5;
    std::cout<<"||                                                                           ||"<<'\n';
      std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
  }
   std::cout<<"||                                                                           ||"<<'\n';

         

       if(set_steps >5600){
                  up_down= (rand()%100)+1;
                    f= up_down; 
            }
           else{
                 

                         //MOVEMENT OF A,B,C   
                       
                        //A MOVEMENT  / A Doors 

    
            
            if(a>0){
              
             int X =9;
             X =MoveABC( a, b,c, Place, set_steps);
               
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tGood door, is a Shortcut, and leads you up to step: "<<X<< '\n';
            Placed = X;
            
                }
            
                // B MOVEMENT
            else if(b>0){
    int Y =7;
    Y=MoveABC( a, b,c, Place,set_steps);
               
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t Bad door is a Shortcut, and leads you down to step: "<<Y<< '\n';
             Placed = Y;
           }
            
//C MOVEMENT
            
             else if(c>0){
               std::cout<<"||                                                                           ||"<<'\n';
               int z = 8;
               z= MoveABC( a, b,c, Place,  set_steps);
               std::cout<<"||\tYOU ARE STACK!!!...---> ";
               std::getline(std::cin>>std::ws, choice);
               std::cout<<"||                                                                           ||"<<'\n';
               int stack = crRolled;
               std::cout<<"||\tYou are stack on step: "<<Place<< " for: "<<crRolled<<" turn/s.";
               std::getline(std::cin>>std::ws, choice);
               while (run){
                 
                 std::cout<<"||                                                                           ||"<<'\n';
                 std::cout<<"||\tRoll the dice...---> ";
                 std::getline(std::cin>>std::ws, choice);
                 int rolled = (rand()%6)+1;
                 
                 for(int i = 0; i<=rolled; i++){
                   stack--;
                   if(stack==0){
                     std::cout<<"||                                                                           ||"<<'\n';
                     std::cout<<"||\tYou have broken free...---> ";
                     std::getline(std::cin>>std::ws, choice);
                     Placed++;
                     
                     
                    }
                   
                 }
                 if(stack<1){
                   std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"||\tYou are now free to Keep playing...---> ";
                   std::getline(std::cin>>std::ws, choice);
                   std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"||\tYou moved up the steps by: "<<Placed;
                   std::cout<<"||\t";    
                   std::getline(std::cin>>std::ws, choice);
                   std::cout<<"||                                                                           ||"<<'\n';
                   
                   break;
                   
                  }
                  
                  std::cout<<"||\tYou rolled: "<<rolled<<'\n' ;
                  std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou are now stack on step: "<<Place<< " for: "<<stack<<" turn/s."<<'\n';
                std::cout<<"||\t";    
                std::getline(std::cin>>std::ws, choice);
                std::cout<<"||                                                                           ||"<<'\n';
                    

               }
          
           }
               
          else    {
                std::cout<<"||\tYou are moving by the rolled amount: "<<rolled<<'\n';
                
                Place=Place+rolled ;
                Placed=Place;
              }

              
            }
        
        
       if(Placed==setlevel){
           std::cout<<"||\tKeep moving...---> ";
            std::getline(std::cin>>std::ws, choice);
            std::cout<<"**********************************|       |************************************"<<'\n';
            std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout <<"||\t\t\t\tYou win "<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"*******************************************************************************"<<'\n';
          
          run =false;
        }
       

    Place = Placed;

     
  return Place;
         }





         int main(){
           
           srand(time(0));
           
     set_steps = 400;
           int op =0;
           double dr = 0;
           dr = 0.05*set_steps;
        
           int frs = dr;
           trapBeingsat = (rand()%frs)+1;
           std::cout<<frs<<'\n'; 
           std::cout<<"**********************************|       |************************************"<<'\n';
           
       
 while(run) {
    run;
  int h= Obstacle(op);
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  if(doors<1){
    std::cout<<"||\t\t\tDoors can be found from steps: "<<trapBeingsat<< " and above"<<'\n';
  }
  else{


  std::cout<<"||\t\t\tDoors can now be found "<<'\n';
}
  std::cout<<"||                                                                           ||"<<'\n';

  std::cout<<"||\t\t\t    New place from "<<op<<" : " <<h<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"__________________________________|       |____________________________________"<<'\n';
  op=h;
  if(op==set_steps){
           std::cout<<"||\tKeep moving...---> ";
            std::getline(std::cin>>std::ws, choice);
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout <<"||\t\t\tYou win "<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"**********************************|       |************************************"<<'\n';
          std::cout<<"*******************************************************************************"<<'\n';
          //remember
          break;    
          }
          
          
          
          }
         
         
      

 return 0;
  
  
             }

          