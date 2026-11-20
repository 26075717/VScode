#include <iostream>
#include <ctime>

int playerroll,computroll, playerPosition, computerPosistion;
std::string chose,computername,Nickname,playerChose;
bool run = true;
void Cgame();
void Fgame();
void Game(std::string player1, std::string player2);
  int a=-5,b=-7,c=-4,d=-8,e=1, f=-3,Ce=0,Pe=0,Pix=0,Cix=0,a1=-2,b1=-3,c1=-6,d1=-5,e1=-4,f1=6;
  int looks =6, watchs = 0,ty=-5,tx=-3,tz=-9;
      

int ComputerPosition(int computrolled){ 
  std::cout<<computername<<" was on step: "<< computerPosistion<<'\n';
       
           for(int i =1; i<=computrolled;i++){
               computerPosistion++;}
          std::cout<<computername<<" is now on step: "<< computerPosistion<<'\n';
        return computerPosistion;}


int rolled(){
    int roll = (rand()%6)+1;
    return roll;
    
}
int steps(int player);


int main(){
    srand(time(0));
  
  do{
  std::cout<<"Play with Compute (c) or Friends (f)"<<"\n";
  std::getline(std::cin>>std::ws ,chose);
  std::cout<<""<<'\n';
  if(chose =="c"||chose =="C"){
    Cgame();
    break;
  }
  else if(chose =="f"||chose =="F"){
    Fgame();
    break;
  }
  else{std::cout<<"Please choose from the options given: "<<'\n';}
  
}while(run);



return 0;
}
void Cgame(){
  std::cout<<""<<'\n';
  std::cout<<"You chose playing with compute,\nCompute: So you want to play with me."<<'\n';
  std::cout<<"Compute: Alright let's go"<<'\n';
  std::cout<<"The game is simple. We will roll a dics to start, taking turns. \nTo enter, your dics needs to land at 6."<<'\n';
  std::cout<<"The are 300 steps to go from entering and the first to reach step 300 wins."<<'\n';
  std::cout<<"But you need to know they are traps that can reset your progress and"<<'\n';
  std::cout<<"Traps that can get us to the 300th step quicker."<<'\n';
  std::cout<<"Those are the rules, let begin: "<<'\n';
  std::cout<<"Two Players on the start positions."<<'\n';
  std::cout<<""<<'\n';
  
  do{
    std::cout<<"Do you want player (1) or Player (2)?"<<'\n';
    std::getline(std::cin>>std::ws ,playerChose);
    
    if(playerChose=="1"){

      std::cout<<"You are now Player 1"<<'\n';
      std::cout<<"Do you want a nickname (Y/Anyother_keys): ";
      std::getline(std::cin>>std::ws ,playerChose);
      std::cout<<""<<'\n';
      if(playerChose=="Y"||playerChose=="y"){
        std::cout<<"Enter your nickname: ";
        std::getline(std::cin>>std::ws ,Nickname);
        std::cout<<""<<'\n';
        std::cout<<"You are playing as: "<< Nickname<<'\n';
        std::cout<<""<<'\n';
        
      }
      else{Nickname = "Player_1";}
      computername ="COM2";
      while(run){
      
       std::cout<<Nickname<<" roll your dics "<<'\n';
       std::getline(std::cin>>std::ws ,playerChose);
       std::cout<<""<<'\n';
       if(!playerChose.empty()){
         playerroll = rolled();
         std::cout<<Nickname<<" rolled: "<<playerroll<<'\n';
         std::cout<<""<<'\n';
         if(playerroll==6){
           std::cout<<Nickname<<" rolled a 6 on the first roll.\nNICE!!!!"<<'\n';
           std::cout<<"You entered and can roll again. "<<'\n';
           Pe = 5;
           Pix = 1;
           std::cout<<""<<'\n';
           playerPosition=1;
           computerPosistion =0;
           std::cout<<"*******************************************************************************"<<'\n';
           std::cout<<"*******************************************************************************"<<'\n';
           std::cout<<"||                                                                           ||"<<'\n';
           std::cout<<"||\t\t\t"<<Nickname<<" is the first to enter. "<<'\n';
           std::cout<<"||                                                                           ||"<<'\n';
           std::cout<<"||\t"<<Nickname<<" is on step: "<< playerPosition<<"\t***||***\t"<<computername<<" is on step: "<< computerPosistion <<'\n';
           std::cout<<"||                                                                           ||"<<'\n';
           std::cout<<"********************|                                     |********************"<<'\n';
           std::cout<<"********************|                                     |********************"<<'\n';
           std::cout<<"********************|                                     |********************"<<'\n';
           
           std::cout<<""<<'\n';
           Game(Nickname,computername);
           break;
           
          }
          else{playerPosition = 0;}
        }
        std::cout<<""<<'\n';
        std::cout<<computername<<" roll its dics "<<'\n';
        computroll = rolled();
        std::cout<<computername<<" rolled: "<<computroll<<'\n';
        std::cout<<""<<'\n';
        if(computroll==6){
          std::cout<<computername<<" rolled a 6 on the first roll.\nNICE!!!!"<<'\n';
          std::cout<<computername<<" entered and roll again. "<<'\n';
          for(int i =1; i<=1;i++){
            computerPosistion++;}
            playerPosition =0;
            
            std::cout<<""<<'\n';
            std::cout<<"*******************************************************************************"<<'\n';
            std::cout<<"*******************************************************************************"<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t\t\t"<<computername<<" is the first to enter. "<<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t"<<Nickname<<" is on step: "<< playerPosition<<"\t***||***\t"<<computername<<" is on step: "<< computerPosistion <<'\n';
            std::cout<<"||                                                                           ||"<<'\n';
          
            std::cout<<"********************|                                     |********************"<<'\n';
            std::cout<<"********************|                                     |********************"<<'\n';
            std::cout<<"********************|                                     |********************"<<'\n';
            std::cout<<""<<'\n'; 
            Ce =7;
            Cix = 1;
            
            Game(Nickname,computername);
            break;
          }
          else{computerPosistion = 0;}
          std::cout<<"*******************************************************************************"<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\t"<<Nickname<<"rolled: "<<playerroll<<" \t***||***\t"<<computername<<" rolled: "<<computroll<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"*******************************************************************************"<<'\n';
        }

           
         break;   
          }
          else if(playerChose=="2"){
            
            std::cout<<"You are Player 2 "<<'\n';
            std::cout<<"Do you want a nickname (Y/Anyother_keys): ";
            std::getline(std::cin>>std::ws ,playerChose);
            
            if(playerChose=="Y"||playerChose=="y"){
              std::cout<<"Enter your nickname: ";
              std::getline(std::cin>>std::ws ,Nickname);
              std::cout<<"You are player as: "<< Nickname<<'\n';
              
            }
            else{Nickname = "Player_2";}
            computername ="COM1";
            Game(computername,Nickname);
            
            break;
          }
          else{std::cout<<"Please choose from the options given: "<<'\n';}
          
        }while(run);
        
        
      }
      
    int steps( int position)  {
    
     //double check
      for(int s =0; s<2;s++){
switch(position){
  case 4:  b=7; a =3; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 13: b=e=10; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 17: b=5;  e=7; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 22:a=3; e=8; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 27: b=3; e =7; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 32: a=3; e=90; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 38: a=2; e=129; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 43: a=e=79; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 46: b=e=5; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 49: e=45; b=9; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 53: b=3; e=32; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 57:a=8; e =100; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 61:  b=5; e =38; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 64: a=5; e = 48; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 69: a=4; e=67; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 70: b= 4; e=50; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 71: a=4; e=203;  std::cout<<"You are on step: "<<position<<'\n'; break;
  case 77: b=5; e=62; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 83: a=2; e=17; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 84:  a= e=78; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 88:  b= 8; e=5; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 91:  a=3; e = 78;std::cout<<"You are on step: "<<position<<'\n'; break;
  case 95:  b=9; e = 89;std::cout<<"You are on step: "<<position<<'\n'; break;
  case 104: b=7; e = 20; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 109: e=7; b=8; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 121: a=9; e = 139; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 144: a= 4; e = 57; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 149: a=3; e=78; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 164: a=6; e= 55; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 168: b= 9; e = 34; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 170:  b=3; e=6; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 176:  a= 43; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 183: a=5; e= 89;  std::cout<<"You are on step: "<<position<<'\n'; break;
  case 198: a=5; e=60; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 207: b=4; e= 12; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 213: a=4; e=17; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 222:b=56;e=86;  std::cout<<"You are on step: "<<position<<'\n'; break;
  case 224: b=2;e=32; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 234:  a = 43; e = 32;std::cout<<"You are on step: "<<position<<'\n'; break;
  case 240:  b = 3; e = 62; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 242:  b = 4; e=56; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 244:  a = 7; e = 23; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 246: b= 5; e = 194; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 248:  a = 5; e =43; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 255:  b = 12; e = 16; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 267: b = 42; e =65; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 274: b=67; e=79; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 281:  a = 5; e= 9; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 283:  b=2; e = 11; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 285: a=4; e = 13; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 287:  a=3; e=9;std::cout<<"You are on step: "<<position<<'\n'; break;
  case 289: b=6; e = 200; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 290: a=2; e=5; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 295:  b=5; e= 3; std::cout<<"You are on step: "<<position<<'\n'; break;
  case 297: b=4; e =103; std::cout<<"You are on step: "<<position<<'\n'; break;
  default:a=-9; b=-7; e =1; break;

}
if(a>0){
           std::cout<<""<<'\n';
           std::cout<<"Something is happening!!!"<<'\n';
           std::cout<<"Good news you are moving up by: "<<e<<" steps"<<'\n';
           std::cout<<""<<'\n';
           for(int h =1; h<=e;h++){
             position++;
             
            }
          }
          else if(b>0){  
            std::cout<<""<<'\n';
            std::cout<<"Something is happening!!!"<<'\n';
            std::cout<<"Bad news you are now going back down by: "<<e<<" steps"<<'\n';
            std::cout<<""<<'\n';
            for(int h =1; h<=e;h++){
              position--;
            }
            
          }
          if(s==0){
            if(a>0||b>0){
              if(a>0){tx=a; tz=e;}
              else if(b>0){ty=b; tz=e;}

            }

            a=-9; b=-7; e =1;
          }
         
          
        }
          return position;
          
        }
        
        void Game(std::string player1, std::string player2){
           if(playerPosition>0||computerPosistion>0){
            while(run){
            
            while(run) {  
              
              if(playerPosition<1){
                if(computroll==6){
                  
                  std::cout<<"It's still "<<computername<<" turn."<<'\n';
                  std::cout<<"Skip---> ";
                  std::getline(std::cin>>std::ws ,playerChose);
                  std::cout<<""<<'\n';
                  
                  break;}
                std::cout<<""<<'\n';
                std::cout<<"\t\t\t"<<player1<<" can not enter yet!!!\nUntil you roll a 6."<<'\n';
                
                playerPosition = 0;
                std::cout<<""<<'\n';
                std::cout<<"Roll---> ";
                std::getline(std::cin>>std::ws ,playerChose);
                playerroll = rolled();
                std::cout<<""<<'\n';
                std::cout<<player1<<" rolled: "<<playerroll<<'\n';

                if(playerroll == 6){
                  Pe=9;
                 Pix ++;
                  std::cout<<"You entered and can now roll again."<<'\n';
                  playerPosition = 1;
                  continue;

                }


              }

              else if(playerPosition>0){

               std::cout<<""<<'\n';
              std::cout<<"Roll again--> "<<'\n';
                std::getline(std::cin>>std::ws ,playerChose);
                playerroll = rolled();
                std::cout<<""<<'\n';
                std::cout<<player1<<" rolled: "<<playerroll<<'\n';
                for(int i =1; i<=playerroll;i++){
                playerPosition++;}

                if(playerPosition>300){
                  std::cout<<""<<'\n';
            std::cout<<"Steps exceeded by: "<<player1<<'\n';
            for(int h =1; h<=playerroll;h++){
              playerPosition--;
            }
            std::cout<<""<<'\n';
            std::cout<<"Position reset by: "<< playerPosition<<'\n';
            std::cout<<""<<'\n';
            
          }
          
          
          playerPosition = steps(playerPosition);
          std::cout<<player1<<" is on step: "<< playerPosition<<'\n';
          std::cout<<""<<'\n';

                if(playerroll==6){
              
                   Pix++;
               
                   continue; 
                }
                //GOOD STEPS BAD STEPS FOR PLAYER
              c=a; d=b; f=e; c1=tx;d1=ty; f1=tz;
               } break;
            }
                std::cout<<""<<'\n';
                 
                 watchs=0;
              
                   while(run){

                    if(computerPosistion<1){
                      if(playerroll==6){
                        std::cout<<"It's still "<<player1<<" turn to roll"<<'\n';
                        break;}
             std::cout<<player2<<" can't enter yet,\n"<<player2<<" needs to roll a 6 to enter"<<'\n';
             computerPosistion=0;
                std::cout<<""<<'\n';
                std::cout<<player2<< " time to roll"<<'\n';
                computroll = rolled();
                std::cout<<player2<<" rolled: "<<computroll<<'\n';

             std::cout<<""<<'\n';
             if(computroll==6){
              Ce = 83;
              Cix = 1;
               std::cout<<player2<<" can now enter and roll again."<<'\n';
               computerPosistion=1;
               continue;


             }
             
            }
             
             else if(computerPosistion>0){
             std::cout<<""<<'\n';


                std::cout<<player2<< " time to roll"<<'\n';
                computroll = rolled();
                std::cout<<player2<<" rolled: "<<computroll<<'\n';
                for(int i =1; i<=computroll;i++){
               computerPosistion++;}
                 std::cout<<""<<'\n';
              if(computerPosistion>300){
          std::cout<<"Steps exceeded by: "<<player2<<'\n';
          std::cout<<""<<'\n';
          
            for(int h =1; h<=computroll;h++){
              computerPosistion--;
            }
            std::cout<<"Position reset back to: "<< computerPosistion<<'\n';
            std::cout<<""<<'\n';
          }
            
            
              computerPosistion = steps(computerPosistion);
                //GOOD STEPS BAD STEPS FOR COMPUTER
              a1=tx;b1=ty; e1=tz;
                std::cout<<player2<<" is on step: "<< computerPosistion<<'\n';
                 if(computroll==6){
                  Cix++;
                   continue; 
                }
                break;
              }
                break;
        }

        std::cout<<""<<'\n';
        std::cout<<"*******************************************************************************"<<'\n';
        //WHO IS IN GAME TELLER
        if(Pe>=0||Ce>=0){
          
          std::cout<<"||                                                                           ||"<<'\n';
          if(Pe>0&&Ce<1){
            std::cout<<"||\tYou have entered"<<"\t***||***\t"<<player2<<" has not entered."<<'\n';
            
          }
          else if(Pe<1&&Ce>0){
            std::cout<<"||\tYou have not entered"<<"\t***||***\t"<<player2<<" has entered."<<'\n';
            
          }
          else if(Pe>0&&Ce>0){
            std::cout<<"||\tYou have entered"<<"\t***||***\t"<<player2<<" has entered."<<'\n';
            
          }
        }
        std::cout<<"||                                                                           ||"<<'\n';
        std::cout<<"||\tYou rolled: "<<playerroll<<"\t\t***||***\t"<<player2<<" rolled: "<<computroll<<'\n';
        // SIX ROLLED BY WHO TELLER
       if(Pix>=0||Cix>=0){
          std::cout<<"||                                                                           ||"<<'\n';
          if(Pix>0&&Cix>0){
                std::cout<<"||\t\t\tWOW, The both of you rolled Six."<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou rolled Six: "<<Pix<<" time/s"<<"\t***||***\t"<<player2<<" has rolled Six: "<<Cix<<" time/s"<<'\n';
                looks =+9;
              }
              else if(Pix>0&&Cix<1){
                std::cout<<"||\t\t\tWOW, One of You rolled Six."<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou rolled Six: "<<Pix<<" time/s"<<"\t***||***\t"<<player2<<" has rolled Six: "<<Cix<<" time/s"<<'\n';
                looks=looks++;
              }
              else if(Pix<1&&Cix>0){
                std::cout<<"||\t\t\tWOW, One of You rolled Six."<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou rolled Six: "<<Pix<<" time/s"<<"\t***||***\t"<<player2<<" has rolled Six: "<<Cix<<" time/s"<<'\n';
                looks=looks++;
                
              }
              else{
                looks = looks--;
                if(looks == 0){
                  std::cout<<"||\t\t\tSAD,No one has rolled Six in sometime."<<'\n';
                  looks = looks+5;
                }
               }
               Pix=0;
               Cix=0;

        }
      
     
         //GOOD STEP BAD STEP FUNCTION
   std::cout<<"||                                                                           ||"<<'\n';
   if(a>0){
     std::cout<<"||\t(Good step)--->\t\t"<<player2<<" got a boost by: "<<e<<" steps"<<'\n';
     std::cout<<"||                                                                           ||"<<'\n';
    }
    else if(b>0){
      std::cout<<"||\t(Bad step)--->\t\t"<<player2<<" went down by: "<<e<< " steps"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
      
    }
    else if(c>0){
    std::cout<<"||\t(Good step)--->\t\tYou got a boost by: "<<f<<" steps"<<'\n';
    
      std::cout<<"||                                                                           ||"<<'\n';
    }
    else if(d>0){
    std::cout<<"||\t(Bad step)--->\t\tYou went down by: "<<f<<" steps"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';

  } 
  std::cout<<"||                                                                           ||"<<'\n';
   if(a1>0){
     std::cout<<"||\t(Good step)--->\t\t"<<player2<<" got a boost by: "<<e1<<" steps"<<'\n';
     std::cout<<"||                                                                           ||"<<'\n';
    }
    else if(b1>0){
      std::cout<<"||\t(Bad step)--->\t\t"<<player2<<" went down by: "<<e1<< " steps"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';
      
    }
    else if(c1>0){
    std::cout<<"||\t(Good step)--->\t\tYou got a boost by: "<<f<<" steps"<<'\n';
    
      std::cout<<"||                                                                           ||"<<'\n';
    }
    else if(d1>0){
    std::cout<<"||\t(Bad step)--->\t\tYou went down by: "<<f1<<" steps"<<'\n';
      std::cout<<"||                                                                           ||"<<'\n';

  } 
  //GOOD STEP BAD STEP RESET
 a1=-3,b1=-9, c=-2;d=-9;f=-9; c1=-5;d1=-5;f1=-5;

//PLAYER'S POSITION COMPARED TO COMPUTER.

   if(playerPosition>computerPosistion){
        int tu = playerPosition-computerPosistion;
        std::cout<<"||                                                                           ||"<<'\n';
        std::cout<<"||\tYOU are on step: "<< playerPosition<<"\t***||***\t"<<player2<<" is on step: "<< computerPosistion<<'\n';
        std::cout<<"||                                                                           ||"<<'\n';
      
        std::cout<<"||\t\t\tYou are ahead of "<<player2<< " by: "<<tu<<" step/s"<<'\n';
         std::cout<<"||                                                                           ||"<<'\n';

        

        }
        else if(computerPosistion>playerPosition){
          int co = computerPosistion-playerPosition;
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\tYou are on step: "<< playerPosition<<"\t***||***\t"<<player2<<" is on step: "<< computerPosistion<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\t\t\t"<<player2<< " is ahead of you by: "<<co<<" step/s"<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
        }
         
        else if(playerPosition==computerPosistion){
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\tYou are on step: "<< playerPosition<<"\t***||***\t"<<player2<<" is on step: "<< computerPosistion<<'\n';
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\t\t\tYou and "<<player2<< " are on the same step."<<'\n';
          
        } 
    std::cout<<"||--->>                                                                 <<---||"<<'\n';

    //WINNER TELLER
     if(playerPosition==300||computerPosistion==300){
          
          if(playerPosition>computerPosistion){
        std::cout<<"||\t                       "<<player1<< " Won"<<'\n';
          break;
          }
          else if (computerPosistion>playerPosition){
          std::cout<<"||\t                     "<<player2<< " Won"<<'\n';
    std::cout<<"||                                                                           ||"<<'\n';
          break;

          }

        }
      
    }
    std::cout<<"||                                                                           ||"<<'\n';

    std::cout<<"**********************************Good Game************************************"<<'\n';
         } 
         else{std::cout<<"Every has to roll again"<<'\n';}
        }
  

  void Fgame(){
    
     std::cout<<"The game is simple. You and your friend/s will roll a dics taking turns to start."<<'\n';
    std::cout<<"The are 300 steps to go from entering and the first to reach step 300 wins."<<'\n';
    std::cout<<"To enter, your dics needs to land at 6"<<'\n';
    std::cout<<"But you need to know they are traps that can reset your progress and"<<'\n';
    std::cout<<"Traps that can get you to the 300th step quicker."<<'\n';
    std::cout<<""<<'\n';
    std::cout<<""<<'\n';
    std::cout<<""<<'\n';
    std::cout<<""<<'\n';



}