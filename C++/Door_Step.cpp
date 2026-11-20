/*
A method that can generate as many steps as you wish and create its own traps.
*/
#include <iostream>
#include <ctime>

int a=0,b=0,c=0,d=0,e=0,f=0;
int set_steps =0, playerPosition =0, playerRolls =0, numdic =0 , Position_Lock=0,Place;
bool run=true;
int newplayerPosition=0;
std:: string choice;

int dicRoll(){ 
    
    int rolled = (rand()%6)+1;
    
    return rolled;}
    
    
    
    int Obstacle(int Place){
        while(run){
        int obstacle_a= (rand()%15)+1;
        int obstacle_b = (rand()%15)+1;
        std::cout<<"||                                                                           ||"<<'\n';
        
        if(obstacle_a == obstacle_b){
            c=9;
        }
        else if(obstacle_a >6 && obstacle_a<10){
            a=e=5;
            std::cout<<"||\t ______________ "<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t| O            |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t ______________ "<<"'\n";
            
            
            std::cout<<"||\tYou found a door and entered it."<<'\n';
        }
        else if(obstacle_a>11&& obstacle_a<16){
            
            std::cout<<"||\t ______________ "<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t| O            |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t ______________ "<<"'\n";
            
            b=e=7;
            std::cout<<"||\tYou found a door and entered it."<<'\n';
        }
     else if(obstacle_a>0&& obstacle_a<3){
         
         std::cout<<"||\tWait something is up here. "<<'\n';
         if(obstacle_b>0&&obstacle_b<3){
             
             a=9; 
             std::cout<<"||\t ______________ "<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t| O            |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t ______________ "<<"'\n";
             
             
             std::cout<<"||\tYou found a door and entered it."<<'\n';
            }
            
            else if(obstacle_b>2&&obstacle_b<12){

                
                std::cout<<"||\t ______________ "<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t| O XXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t|XXXXXXXXXXXXXX|"<<"'\n";
                std::cout<<"||\t ______________ "<<"'\n";
                
                a=b=e=0; 
                std::cout<<"||\tNo door found. "<<'\n';}
                else if(obstacle_b>11&&obstacle_b<16){
         
std::cout<<"||\t ______________ "<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t| O            |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t ______________ "<<"'\n";

       b=e=7;
       std::cout<<"||\tYou found a door and entered it."<<'\n';
       
    }
}
  else{
    std::cout<<"||\tClear part. "<<'\n';
    
    
   }
   std::cout<<"||                                                                           ||"<<'\n';

    int up_down=0;

 if(set_steps >5600){
    up_down= (rand()%100)+1;
    f= up_down; 
   }
 else{
     
    while(run){
        
        up_down= (rand()%100)+3;
        int outof100 = up_down;
        
        if(up_down>99){
            for(int i=1; i<=outof100; i++){
                up_down--;
            }
           
       }
      else{ f= up_down;
                
           break;
        }
           
    }
            
  
}
        
        if(a>0){ 
            Place= (set_steps - ((f/100)*set_steps));
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tGood news the door is a Shortcut, and leads you up by: "<<Place<< " step/s"<<'\n';
            
            
        }  
        else if(b>0){ 
            Place= (set_steps - ((f/100)*set_steps));
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tBad news you fell into a hole that leads you down by: "<<Place<< " step/s"<<'\n';
            
        }

        else if (c>0){
            int up_doiwn =0;
            while(run){
                
                up_doiwn= ((rand()%100)+43);
int outoif100 = up_doiwn;

if(up_doiwn>99){
    for(int i=1; i<=outoif100; i++){
        up_doiwn--;}
    }
    
    else{ d= up_doiwn;
        
        break;}
    }
    d=(rand()%set_steps)/d;
    
std::cout<<"||                                                                           ||"<<'\n';
std::cout<<"||\tYou entered a trap and can't move for: "<< d << " turn/s"<<'\n';
std::cout<<"||                                                                           ||"<<'\n';

return Place;
}
else{
    
    return Place;
  }
     }
return Place;
  }

int Tunnel_Trap(int position){
    int tunnel ;
    while(position==set_steps){ 
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
            playerPosition =0;
            
            while (run){
            std::cout<<"||                                                                           ||"<<'\n';
            //POSITION LOCKER
            if(Position_Lock>0){  
                
                std::cout <<"||\tRoll your dice to reduce Lock turn: ";
                std::getline(std::cin>>std::ws, choice);
                if(!choice.empty()||choice.empty()){
                    if(numdic>1){
                        for(int i=1; i<=numdic;i++){
                            playerRolls= dicRoll();
                            std::cout <<"||\tRoll "<<i<<": "<<playerRolls<<'\n';
                            std::cout<<"||                                                                           ||"<<'\n';
                        } 
                        for(int n =0; n<=playerRolls;n++){
                            d--;
                        } 
                        std::cout <<"||\tLock turn as reduce by: "<<playerRolls<<" and it now: "<<d<<'\n';
                        std::cout<<"||                                                                           ||"<<'\n';
                        
                    }
                    else { 
                        playerRolls=dicRoll();
                        std::cout <<"||\tYou rolled: "<<playerRolls<<'\n'; 
                        std::cout<<"||                                                                           ||"<<'\n';
                        for(int n =0; n<=playerRolls;n++){
                            d--;
                        } 
                        std::cout <<"||\tLock turn as reduce by: "<<playerRolls<<" and it now: "<<d<<'\n';
                        std::cout<<"||                                                                           ||"<<'\n';
                    }
                }
            }
            else{
                

            std::cout <<"||\tYou are on step: "<<playerPosition<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout <<"||\tRoll the dice to move "<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout <<"||\tRoll your dice: ";
            std::getline(std::cin>>std::ws, choice);
            
            if(!choice.empty()||choice.empty()){
                std::cout<<"||                                                                           ||"<<'\n';
                if(numdic>1){
                    for(int i=1; i<=numdic;i++){
                        playerRolls=dicRoll();
                        std::cout <<"||\tRoll "<<i<<": "<<playerRolls<<'\n';
                        std::cout<<"||                                                                           ||"<<'\n';
                    }  
                }

                else { 
                    playerRolls=dicRoll();
                    std::cout <<"||\tYou rolled: "<<playerRolls<<'\n';
                }

             //WHERE THE PLAYER POSITION IS DETERMINED
        
             while(playerPosition<=set_steps){ 
                 for (int i=1; i<set_steps;i++){
                     if(playerPosition==i){
                        
                         
                    }
                }
                newplayerPosition =193;
                newplayerPosition = Obstacle(playerPosition); 
                    std::cout<<"||                                                                           ||"<<'\n';
                    playerPosition=newplayerPosition;
                    double completion = ((playerPosition /set_steps)*100);
                    std::cout <<"||\tYou are on step: "<<Obstacle(6)  <<" out of: "<< set_steps<<" steps"<<'\n';
                    std::cout<<"||                                                                           ||"<<'\n';
                    std::cout <<"||\tYou are now completing: "<<completion<<"% "<<'\n';
                    break;
                } 
                
                
                

                if(playerPosition >set_steps){
                    std::cout<<"||                                                                           ||"<<'\n';
                    for(int i=0; i<Place; i++){
                        playerPosition= playerPosition--;
                    }
                    if(playerPosition > set_steps){
                        
                        //UNDO THE ABOVE
                        
                        for(int i=0; i<Place; i++){
                                playerPosition= playerPosition++;}
                                //REDEC THE DICES ROLL
                                for (int u=0; u<playerRolls;u++){
                                    playerPosition= playerPosition--;
                                }
                                std::cout<<"||                                                                           ||"<<'\n';
                                std::cout <<"||\tYou remain at: "<<playerPosition<<'\n';
                                std::cout<<"||                                                                           ||"<<'\n';
                            }
                            else if(playerPosition <0){
                                playerPosition =0;
                                while(run){
                                    std::cout<<"||                                                                           ||"<<'\n';
                                    std::cout <<"||\tRoll your dice: ";
                                    std::getline(std::cin>>std::ws, choice);
                                    std::cout<<"||                                                                           ||"<<'\n';
                                    if(!choice.empty()||choice.empty()){
                                        if(numdic>1){
                                            //ROLL OF MANY DICE
                                            for(int i=1; i<=numdic;i++){
                                                playerRolls=dicRoll();
                                                std::cout <<"||\tRoll "<<i<<": "<<playerRolls<<'\n';
                                                std::cout<<"||                                                                           ||"<<'\n';
                                            }  
                                        }
                                        //ROLL OF ONE DICE
                                        else { 
                                            playerRolls=dicRoll();
                                            std::cout<<"||                                                                           ||"<<'\n';
                                            std::cout <<"||\tYou rolled: "<<playerRolls<<'\n';
                                        }
                                        if(playerRolls==enter){
                                            std::cout<<"||                                                                           ||"<<'\n';
                                            std::cout<<"||\tYou have entered the game"<<'\n';
                                            std::cout<<"||                                                                           ||"<<'\n';
                                            break;}
                                    } 
                                }
                            }
                            //DOORS AND TRAPS
                            if (a>0){
                                std::cout<<"||                                                                           ||"<<'\n';

                                std::cout<<"||                                                                           ||"<<'\n';

                            }
                            else if(b>0){
                                std::cout<<"||                                                                           ||"<<'\n';
                                std::cout<<"||                                                                           ||"<<'\n';
                            }
                            else if (c>0){
                                std::cout<<"||                                                                           ||"<<'\n';
                                playerPosition =playerPosition;
                                std::cout <<"||\tYou are trapped and can't move "<<'\n';
                                std::cout<<"||                                                                           ||"<<'\n';
                                std::cout <<"||\tYou are trap at step: "<<playerPosition <<" for "<<d<<" turn/s."<<'\n';
                                Position_Lock=d;
 
                            }
                               //WIN CODE
                            if(playerPosition == set_steps){
                                std::cout<<"||                                                                           ||"<<'\n';
                                std::cout <<"||\t\t\tYou win "<<'\n';
                                std::cout<<"||                                                                           ||"<<'\n';
                                std::cout<<"__________________________________|       |____________________________________"<<'\n'; 
                                std::cout<<"**********************************|       |************************************"<<'\n';
                                std::cout<<"**********************************|       |************************************"<<'\n';
                                std::cout<<"**********************************|       |************************************"<<'\n';
                                std::cout<<"*******************************************************************************"<<'\n';
                                break;
                            }
                        }
                        
                    }
                        
                   // Place=0;
                 
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
