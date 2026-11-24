/*
A method that can generate as many steps as you wish and create its own traps.
*/
#include <iostream>
#include <ctime>

double f=0;
int a=0,b=0,c=0,d=0,e=0;
int set_steps =0, playerPosition =0, playerRolls =0, numdic =0 , Position_Lock=0,Place;
int crRolled =0;
bool run=true;
  int doors = 0;
   int  rolled =0;
int newplayerPosition=0;
int trapBeingsat =0;
int Gooddoor = 0, Baddoor = 0;

int foundDoor =0;



std:: string choice;


int dicRoll(){ 
    
    int rolled = (rand()%6)+1;
   

    std::cout<<"||                                                                           ||"<<'\n';
    std::cout<<"||                                                                           ||"<<'\n';
    switch(rolled){
case 1: 
 std::cout<<"||\t|       |"<<"'\n";
 std::cout<<"||\t|   O   |"<<"'\n";
 std::cout<<"||\t|       |"<<"'\n";

 break;
 case 2: 
 std::cout<<"||\t|       |"<<"'\n";
 std::cout<<"||\t|O     O|"<<"'\n";
 std::cout<<"||\t|       |"<<"'\n";
break;
case 3: 
 std::cout<<"||\t|O      |"<<"'\n";
 std::cout<<"||\t|   O   |"<<"'\n";
 std::cout<<"||\t|      O|"<<"'\n";
break;
case 4: 
 std::cout<<"||\t|O     O|"<<"'\n";
 std::cout<<"||\t|       |"<<"'\n";
 std::cout<<"||\t|O     O|"<<"'\n";
break;
case 5: 
 std::cout<<"||\t|O     O|"<<"'\n";
 std::cout<<"||\t|   O   |"<<"'\n";
 std::cout<<"||\t|O     O|"<<"'\n";
break;
case 6: 
 std::cout<<"||\t|O     O|"<<"'\n";
 std::cout<<"||\t|O     O|"<<"'\n";
 std::cout<<"||\t|O     O|"<<"'\n";
break;


    }
        std::cout<<"||                                                                           ||"<<'\n';
        
        return rolled;}
        
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
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            
            switch(Placereman){
              
              case 1 : std::cout<<"||\tStep 1 is longer than the rest by: " <<reman<<'\n';
              SetPart1 = SetParts1;
SetPart2 = SetParts2;
SetPart3 = SetParts3 + reman;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;

case 2 : std::cout<<"||\tStep 5 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5+ reman;
break;
case 3 : std::cout<<"||\tStep 1 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 + reman;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;
case 4 : std::cout<<"||\tStep 2 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 ;
SetPart2 = SetParts2+ reman;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4;
SetPart5 = SetParts5;
break;
case 5 : std::cout<<"||\tStep 4 is longer than the rest by: " <<reman<<'\n';
SetPart1 = SetParts1 ;
SetPart2 = SetParts2;
SetPart3 = SetParts3 ;
SetPart4 = SetParts4 + reman;
SetPart5 = SetParts5;
break;
}
std::cout<<"||                                                                           ||"<<'\n';
std::cout<<"||                                                                           ||"<<'\n';



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
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
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
          else{ std::cout<<"**********************************|       |************************************"<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
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
    std::cout<<"||\tYou are now on step: "<<Place<<'\n';
    std::cout<<"||                                                                           ||"<<'\n';

// DICE IS ROLLED HERE.
std::cout<<"**********************************|       |************************************"<<'\n';
     std::cout<<"||                                                                           ||"<<'\n';
     std::cout<<"||                                                                           ||"<<'\n';
                     std::cout <<"||\tRoll your dice: ";
                     std::getline(std::cin>>std::ws, choice);
    rolled = dicRoll();
   std::cout<<"||                                                                           ||"<<'\n';

          if(trapBeingsat<=Place && doors<1){
              std::cout<<"**********************************|       |************************************"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
      std::cout<<"||\t\t\tDoors has started showing " <<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
      std::cout<<"**********************************|       |************************************"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
                                                                             
             doors=20; 
    }
 
    
    int outof100 =0;
    int up_down=0;

    
    
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
            foundDoor = 4;
           Door_Found();

           
           std::cout<<"||\tYou found a door and entered it."<<'\n';
            std::cout<<"||\tKeep moving...---> ";
           std::getline(std::cin>>std::ws, choice);
        }
        else if(obstacle_a>11&& obstacle_a<16){
            std::cout<<"||\tSomething is ahead...---> ";
             std::getline(std::cin>>std::ws, choice);

              foundDoor=4;
           Door_Found();
          
         c=-3;  a=-5; b=8;e=7;
            std::cout<<"||\tYou found a door and entered it."<<'\n';
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
            
             
             
             std::cout<<"||\tYou found a door and entered it."<<'\n';
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
           std::cout<<"||\tYou found a door and entered it."<<'\n';
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
   std::cout<<"||                                                                           ||"<<'\n';
    std::cout<<"**********************************|       |************************************"<<'\n';

         

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
            std::cout<<"||                                                                           ||"<<'\n';
            Placed = X;
            Gooddoor++;
                }
            
                // B MOVEMENT
            else if(b>0){
    int Y =7;
    Y=MoveABC( a, b,c, Place,set_steps);
    Baddoor++;
               
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t Bad door is a Shortcut, and leads you down to step: "<<Y<< '\n';
            std::cout<<"||                                                                           ||"<<'\n';
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
               
               while (run){
                 
                 std::cout<<"||                                                                           ||"<<'\n';
                 std::cout<<"||\tRoll the dice...---> ";
                 std::getline(std::cin>>std::ws, choice);
                  rolled = dicRoll();
                  std::cout<<"||                                                                           ||"<<'\n';
                  std::cout<<"||\tYou rolled: "<<rolled<<'\n' ;
                 int up=1;
                 for(int i = 0; i<rolled; i++){
                   stack--;
                   if(stack<=0){
                     std::cout<<"||                                                                           ||"<<'\n';
                     std::cout<<"||\tYou have broken free...---> ";
                     std::getline(std::cin>>std::ws, choice);
                     up++;
                     
                     
                    }
                   
                 }
                 if(stack<1){
                   std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"||\tYou are now free to Keep playing...---> ";
                   std::getline(std::cin>>std::ws, choice);
                 Placed=Placed+up;
                   std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"||\tYou moved up the steps by: "<<up<<" you are now on step: "<<Placed;
                   std::cout<<"\n||\t";    
                   std::getline(std::cin>>std::ws, choice);
                   std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"||                                                                           ||"<<'\n';
                   
                   break;
                   
                  }
                   std::cout<<"**********************************|       |************************************"<<'\n';
                 
                  std::cout<<"||                                                                           ||"<<'\n';
                  std::cout<<"||\tYou are now stack on step: "<<Place<< " for: "<<stack<<" turn/s."<<'\n';
                  std::cout<<"||\t";    
                  std::getline(std::cin>>std::ws, choice);
                  std::cout<<"||                                                                           ||"<<'\n';
                   std::cout<<"**********************************|       |************************************"<<'\n';
                  
                  
                }
                
              }
              
              else    {
                std::cout<<"**********************************|       |************************************"<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou are moving by the rolled amount: "<<rolled<<'\n';
                
                Place=Place+rolled ;
                Placed=Place;
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"**********************************|       |************************************"<<'\n';
              }
              
              
            }
            
            
            if(Placed==setlevel){
              std::cout<<"||\tKeep moving...---> ";
              std::getline(std::cin>>std::ws, choice);
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"||                                                                           ||"<<'\n';
              std::cout <<"||\t\t\t\t  You win "<<'\n';
              std::cout<<"||                                                                           ||"<<'\n';
              std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"*******************************************************************************"<<'\n';
              
              run =false;
            }
else if(Placed>setlevel){
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tMoving by rolled amount will exceed set step."<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tYou may need to roll again."<<'\n';
  std::getline(std::cin>>std::ws,choice);
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"**********************************|       |************************************"<<'\n';
  Placed =Placed-rolled;


}

            if(trapBeingsat>Placed && doors>1){
              std::cout<<"**********************************|       |************************************"<<'\n';
              std::cout<<"||                                                                           ||"<<'\n';
              std::cout<<"||\tDoors can no longer be found until you reach step: "<<trapBeingsat<<'\n';
              std::cout<<"||                                                                           ||"<<'\n';
              std::cout<<"**********************************|       |************************************"<<'\n';
          

          doors=-3;
         }

    Place = Placed;

     
  return Place;
         }


    
    


int Tunnel_Trap(int position){
    int tunnel ;
    while(position<=set_steps){ 
        for (int i=1; i<set_steps;i++){
        if(position==i){
            
            tunnel = Obstacle(i); 
            break;
        }
        
    }
}

return tunnel;}

int main(){
 srand(time(0));
std::cout<<"**********************************DOOR STEP************************************"<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
std::cout <<"||\t\t\tWelcome to Door Step. "<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
std::cout <<"||\tYour objective is to find doors to lead you to the very top."<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
std::cout <<"||\tN:B they are obstacle in placed which will help you find doors."<<'\n';
std::cout <<"||\tBut not even door found is meant to get you to the top."<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
std::cout <<"||\tNow to begin "<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
std::cout<<"**********************************|       |************************************"<<'\n';
std::cout<<"**********************************|       |************************************"<<'\n';
std::cout<<"**********************************|       |************************************"<<'\n';
std::cout<<"__________________________________|       |____________________________________"<<'\n';


do{
    std::cout<<"||                                                                           ||"<<'\n';
    std::cout<<"||\tEnter the amount of steps (60 and above )"<<'\n';
    std::cout<< "||\tSTEPS AMOUNT: ";
    std::cin>> set_steps;
    std::cout<<"||                                                                           ||"<<'\n';
    
    if(set_steps <60){
        std::cout <<"||\tEnter a step amount greater than 59."<<'\n';
        std::cout<<"||                                                                           ||"<<'\n';
        std::cout<<"||\tYou entered "<<set_steps << " steps, which is smaller than 60."<<'\n';
    }
    else if(set_steps>59&&set_steps<301){
        std::cout<<"||\t"<<set_steps<<" steps is a good start, this will be over in no time."<<'\n';
    }
    else if(set_steps>300&&set_steps<601){
        std::cout<<"||\t"<<set_steps<<" steps is an interesting start, this will be interesting to complete."<<'\n';
    }
    else if(set_steps>600&&set_steps<1001){
        std::cout<<"||\t"<<set_steps<<" steps, is an ideal start, this will be close, good luck at the end."<<'\n';
    }
    else if(set_steps>1000&&set_steps<2601){
        std::cout<<"||\t"<<"Wow "<<set_steps<<" steps is an interesting choice, You got time to burn, it seems."<<'\n';
    }
    else if(set_steps>2600&&set_steps<5601){
        std::cout<<"||\t"<<"OK!!! "<<set_steps<<" steps, Get ready for it., this will be on me."<<'\n';
    }
    else if(set_steps>5600&&set_steps<20001){
std::cout<<"||\t"<<"Oh my "<<set_steps<<" steps, someone has time. Welcome to Hell's gate. \nRemember you choose this."<<'\n';
}
else{std::cout<<"||\t"<<"Ayo!!! "<<set_steps<<" steps, get a life. \nI'm not doing this. \n****20000 steps is the limit****\nTry again"<<'\n';  
    set_steps=0;
}
std::cout<<"||                                                                           ||"<<'\n';
}while(set_steps<60);
 double dr = 0;
           dr = 0.05*set_steps;
        
           int frs = dr;
           trapBeingsat = (rand()%frs)+1;

std::cout <<"||\tHow many dice would you like to roll?"<<'\n';
std::cout<<"||                                                                           ||"<<'\n';
do{
    std::cout <<"||\tChoose your number of dice: ";
    std::cin>> numdic;
    std::cout<<"||                                                                           ||"<<'\n';
    if(numdic<1){
        std::cout <<"||\tYou need aleast 1 dice to play. "<<'\n';
    }
    else if(numdic>0&&numdic<7){ 
        std::cout <<"||\tYou have chosen "<< numdic<<" dice/s"<<'\n';
        
        break;
    }
    else{
        std::cout <<"||\tYou can only choose 1-6 dices "<<'\n';}
        std::cout<<"||                                                                           ||"<<'\n';
    }while (run);
    int enter = 6*numdic;
    std::cout <<"||\tTo enter you will need to roll: "<<enter<<'\n';
    
    while(run){
        std::cout<<"||                                                                           ||"<<'\n';
        std::cout <<"||\tRoll your dice: ";
        std::getline(std::cin>>std::ws, choice);
        if(!choice.empty()||choice.empty()){
            if(numdic>1){
                for(int i=1; i<=numdic;i++){
                    playerRolls= dicRoll();
                    std::cout <<"||\tRoll "<<i<<": "<<playerRolls<<'\n';
                    std::cout<<"||                                                                           ||"<<'\n';
                    
                }  
            }
            else { 
                playerRolls=dicRoll();
                std::cout <<"||\tYou rolled: "<<playerRolls<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
            }
            
            if(playerRolls == enter){
                std::cout <<"||\tYou have rolled: "<< enter<<" and entered the game"<<'\n';
           //change here
                playerPosition =399;
//PUT IT HERE
               //  playerPosition = Tunnel_Trap( playerPosition);
                newplayerPosition = 0;
               
                while(run){
                  
                  
             playerPosition = Obstacle( playerPosition);

             if(playerPosition==set_steps){break;}
                else{
                  std::cout<<"**********************************|       |************************************"<<'\n';
                  std::cout<<"||                                                                           ||"<<'\n';
                    std::cout<<"||                                                                           ||"<<'\n';
  if(doors<1){
    std::cout<<"||\t\t\tDoors can be found from steps: "<<trapBeingsat<< " and above"<<'\n';
  }
  else{
    std::cout<<"||\t\t\t\tDoors can now be found "<<'\n';
  }
  
 
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||*********************|                             |***********************||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tYou rolled: "<<rolled<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||*********************|                             |***********************||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tGood Door: "<<Gooddoor<<"                    \t\tBad Door: "<<Baddoor<<"\t     ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||*********************|                             |***********************||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
   std::cout<<"||\t\t\t    New place from "<< newplayerPosition <<" : "<<playerPosition <<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\t\t\tYou are on step: "<<playerPosition<<" out of: "<<set_steps<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"**********************************|       |************************************"<<'\n';
  std::cout<<"__________________________________|       |____________________________________"<<'\n';
  
 newplayerPosition=playerPosition ;
                    


                }
            }

            break;
             } 
             
             else{
                std::cout <<"||\tYou need to roll: "<<enter<<" to enter the game." <<'\n';
               std::cout <<"||\tRoll again."<<'\n';
               std::cout<<"||                                                                           ||"<<'\n';


  
        }
    }
  }

    return 0;
}
