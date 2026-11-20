#include <iostream>
#include <ctime>

double f=0;
int a=0,b=0,c=0,d=0,e=0;
int set_steps =0, playerPosition =0, playerRolls =0, numdic =0 , Position_Lock=0,Place;
bool run=true;
  int doors = 0;
int newplayerPosition=0;
int trapBeingsat =0;



std:: string choice;
  int Obstacle(int Place){

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
    
    double setlevel =set_steps,Placed =Place;
    int obstacle_a= (rand()%15)+1;
    int obstacle_b = (rand()%15)+1;
    std::cout<<"||                                                                           ||"<<'\n';
    if(trapBeingsat < Place){a=-3;b=-5;c=-4;}
     else if(trapBeingsat >= Place){  
        if(obstacle_a == obstacle_b){
          std::cout<<"||\tSomething is ahead...--->";
          std::getline(std::cin>>std::ws, choice);
          std::cout<<"||\tOh, this is bad... "<<'\n';
            c=9; a=-30; b=-3;
             std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
        }
        else if(obstacle_a >6 && obstacle_a<10){
           std::cout<<"||\tSomething is ahead...--->";
           a=5,e=5;b=-8;
           std::getline(std::cin>>std::ws, choice);
           std::cout<<"||\t ______________ "<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t| O            |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t|              |"<<"'\n";
           std::cout<<"||\t ______________ "<<"'\n";
           
           
           std::cout<<"||\tYou found a door(A) and entered it."<<'\n';
            std::cout<<"||\tKeep moving...---> ";
           std::getline(std::cin>>std::ws, choice);
        }
        else if(obstacle_a>11&& obstacle_a<16){
            std::cout<<"||\tSomething is ahead...--->";
             std::getline(std::cin>>std::ws, choice);
            std::cout<<"||\t ______________ "<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t| O            |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t|              |"<<"'\n";
            std::cout<<"||\t ______________ "<<"'\n";
            
           a=-5; b=8;e=7;
            std::cout<<"||\tYou found a door(B) and entered it."<<'\n';
             std::cout<<"||\tKeep moving...---> ";
             std::getline(std::cin>>std::ws, choice);
        }
     else if(obstacle_a>0&& obstacle_a<3){
         
         std::cout<<"||\tWait something could be here...---> ";
          std::getline(std::cin>>std::ws, choice);
         if(obstacle_b>0&&obstacle_b<3){
             
             a=9; 
             std::cout<<"||\t ______________ "<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t| O            |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t|              |"<<"'\n";
             std::cout<<"||\t ______________ "<<"'\n";
             
             
             std::cout<<"||\tYou found a door(A) and entered it."<<'\n';
              std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
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
                
                a=0,b=0,e=0; 
                std::cout<<"||\tNo door found. "<<'\n';
                 std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
              }
       else if(obstacle_b>11&&obstacle_b<16){
         
std::cout<<"||\t ______________ "<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t| O            |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t|              |"<<"'\n";
std::cout<<"||\t ______________ "<<"'\n";

       b=8,e=7;
       std::cout<<"||\tYou found a door (B) and entered it."<<'\n';
        std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
       
    }
}
  else{
    std::cout<<"||\tClear part. "<<'\n';
     std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
    
    
   }
  }

  else{

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
                 
       TD: while(run){
                  up_down= (rand()%100)+3;
                   outof100 = up_down;
        
                std::cout<<"||\tOut of 100 is : "<<outof100<<'\n';//delet later
                std::cout<<"||\trolled is : "<<rolled<<'\n';//delet later
            if(up_down>99){
                     for(int i=1; i<=outof100; i++){
                         up_down--;
                     }
           
                         }
               else{
                      f= up_down;
                      int fairpercen=0;
                      while(run){
                   int fairpercen= (rand()%100)+70;
                   if(fairpercen<101){break;}
                 }
                         //MOVEMENT OF A,B,C   
                        
                        double half= set_steps/2; 
                        double gound=0; 
                        double Percentofsetstep =(f/100)*setlevel;
                        //A MOVEMENT   

        if(a>0){ 
            
            gound= (setlevel - Percentofsetstep);
             int goun = (gound)*(1/100);
               int goun0 = (gound)*(5/100);
               int goun1 = (gound)*(10/100);
               int goun2 = (gound)*(20/100);
               int goun3 = (gound)*(30/100);
               int goun4 = (gound)*(40/100);
               int goun5 = (gound)*(50/100);
               int goun7 = (gound)*(76/100);
               int goun8 = (gound)*(80/100);
               int fg = 0;


            if(Placed<=half){

              if(gound<=half){

            if(gound<=goun){
              while(run){
                 fg = (rand()%goun)+1;

                 if(Placed>fg){}
             else if(gound==goun){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               case 6: gound =+ goun7; break;
               case 7: gound =+ goun8; break;
                default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }

         else if(gound<=goun0){
              while(run){
                 fg = (rand()%goun0)+1;

                 if(Placed>fg){}
             else if(gound==goun0){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               case 6: gound =+ goun7; break;
               case 7: gound =+ goun8; break;
               default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }

              else if(gound<=goun1){
              while(run){
                 fg = (rand()%goun1)+1;

                 if(Placed>fg){}
             else if(gound==goun1){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               case 6: gound =+ goun7; break;
               case 7: gound =+ goun8; break;
               default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }
              else if(gound<=goun2){
              while(run){
                 fg = (rand()%goun2)+1;

                 if(Placed>fg){}
             else if(gound==goun2){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               case 6: gound =+ goun7; break;
               case 7: gound =+ goun8; break;
               default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }
               else if(gound<=goun3){
              while(run){
                 fg = (rand()%goun3)+1;

                 if(Placed>fg){}
             else if(gound==goun3){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               case 6: gound =+ goun7; break;
              
               default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }
               else if(gound<=goun4){
              while(run){
                 fg = (rand()%goun4)+1;

                 if(Placed>fg){}
             else if(gound==goun4){
                 int rts = (rand()%9)+1;
              switch(rts){
               case 1: gound =+ goun1; break;
               case 2: gound =+ goun2; break;
               case 3: gound =+ goun3; break;
               case 4: gound =+ goun4; break;
               case 5: gound =+ goun5; break;
               
               
               default: gound =+ rts; break;

              }
              break;
                 }
                 else{
                  gound =fg;
                  break;}
                }
              }








              Placed=Placed+gound;
            }



            else if(gound>half){
              Placed=Placed+gound;

              int halfed = (half*(fairpercen/100));
              if(Placed>setlevel){
                for(int p =1; p<gound;p++){Placed--;}
                Placed= Placed+halfed;
                
              }
            }
            
          } 
          else if(Placed>half){
            
            
              if(gound<half){
              Placed=Placed-gound;
            }
            else if(gound>=half){
              Placed=Placed+gound;

              int halfed = (half*(fairpercen/100));
              if(Placed>setlevel){
                for(int p =1; p<gound;p++){Placed--;}
                Placed= Placed+halfed;
                
              }
            }
          }
          
          
          std::cout<<"||                                                                           ||"<<'\n';
          std::cout<<"||\tGound a: "<<gound<<'\n'; //delet later
          std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tf is : "<<f<<"%"<<'\n';//delet later
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t%  is : "<<Percentofsetstep<<" out of: " <<setlevel<<'\n'; //delet later
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tGood news the door is a Shortcut, and leads you up by: "<<gound<< " step/s"<<'\n';
            
            
            

            
            
          }  
          // B MOVEMENT
          else if(b>0){ 
            
                gound= (setlevel - Percentofsetstep);

                  if(Placed<=half){

              if(gound<half){
              Placed=Placed-gound;
              if(Placed<0){
                 for(int p =1; p<gound;p++){Placed++;}
              }
              Placed = Placed-(Placed*(fairpercen/100));
            }
            else if(gound>=half){
              Placed=Placed-gound;
              
            }
            
          } 
          else if(Placed>half){
            
            
              if(gound<half){
              Placed=Placed-gound;
            }
            else if(gound>=half){
              Placed=Placed+gound;

              int halfed = (half*(fairpercen/100));
              if(Placed>setlevel){
                for(int p =1; p<gound;p++){Placed--;}
                Placed= Placed+halfed;
                
              }
            }
          }
                
                Placed=Placed-gound;
                 if(Placed<0){
                for(int p =1; p<gound;p++){Placed++;}
               // Placed = Placed-(Placed*(fairpercen/100));
               int goun = (gound)*(1/100);
               int goun0 = (gound)*(5/100);
               int goun1 = (gound)*(10/100);
               int goun2 = (gound)*(20/100);
               int goun3 = (gound)*(30/100);
               int goun4 = (gound)*(40/40);
               int fg = 0;
               
               
               
               
               if(Placed == 1){
                 Placed =0;
                }
               else if(Placed<=goun){  
                while(run){
                 fg = (rand()%goun)+1;

                 if(Placed>fg){}
                 else{
                  Place-fg;
                  break;}

                 }
            }
              
            else if(Placed<=goun0){
              while(run){
                fg = (rand()%goun0)+1;
                
                if(Placed>fg){}
                 else{
                  Place-fg;
                  break;}
                }

              }
       else if(Placed<=goun1){
          while(run){
                 fg = (rand()%goun1)+1;

                 if(Placed>fg){}
                 else{
                  Place-fg;
                  break;}

                 }

                 }



               else if(Placed<=goun2){
                  while(run){
                 fg = (rand()%goun2)+1;

                 if(Placed>fg){}
                 else{
                  Place-fg;
                  break;}

                 }

               }
               else if(Placed<=goun3){
                  while(run){
                 fg = (rand()%goun3)+1;

                 if(Placed>fg){}
                 else{
                  Place-fg;
                  break;}

                 }

               }
               else if (Place<=goun4){

                
               }


               
               
              }
            std::cout<<"||\tPlace b: "<<gound<<'\n';//delet later
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tf is : "<<f<<"%"<<'\n';//delet later
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\t%  is : "<<Percentofsetstep<<" out of: " <<setlevel<<'\n'; //delet later
            std::cout<<"||                                                                           ||"<<'\n';
            std::cout<<"||\tBad news you fell into a hole that leads you down to: "<<Placed<< " step/s"<<'\n';
            
            
            
        }
        //C MOVEMENT
        else if (c>0){
          int up_doiwn =0;
            while(run){
              
                up_doiwn= ((rand()%100)+43);
                int outoif100 = up_doiwn;

                if(up_doiwn>99){
               for(int i=1; i<=outoif100; i++){
                 up_doiwn--;}
                }
                
                else{ up_doiwn= up_doiwn;
                  
                  break;}
                }
                int trap =(rand()%set_steps)+1;
                int pon = (trap/set_steps)*100;
                int pon1 = (set_steps)*(10/100);
                int pon2 = (set_steps)*20/100;
                int pon3 = (set_steps)*30/100;
                int pon4 = (set_steps)*40/100;
                int pon5 = (set_steps)*50/100;
                int pon6 = (set_steps)*60/100;
              int pon7 = (set_steps)*75/100;
              
              if(up_doiwn<76){
                
                if(pon<pon1){
                  up_doiwn=((rand()%pon1)+1)/up_doiwn;
                  d= up_doiwn;
                }
                
                else if(pon<=pon2){
                  up_doiwn=((rand()%pon2)+1)/up_doiwn;
                  d= up_doiwn;
                  
                }
                
                else if(pon<=pon3){
                  up_doiwn=((rand()%pon3)+1)/up_doiwn;
                  d= up_doiwn;
                }
                
                else if(pon<=pon4){
                  up_doiwn=((rand()%pon4)+1)/up_doiwn;
                  d= up_doiwn;
                }
                
                else if(pon<=pon5){
                  up_doiwn=((rand()%pon5)+1)/up_doiwn;
                  d= up_doiwn;
                 }
                 
                 else if(pon<=pon6){
                  up_doiwn=((rand()%pon6)+1)/up_doiwn;
                  d= up_doiwn;
                 }
                 else{
                 up_doiwn=((rand()%pon7)+1)/up_doiwn;
                  d= up_doiwn;

                }
             
                }


                else{
                 up_doiwn=((rand()%pon7)+1)/up_doiwn;
                  d= up_doiwn;
                }   
                
                std::cout<<"||                                                                           ||"<<'\n';
                std::cout<<"||\tYou entered a trap at step: "<< Placed <<" and can't move for: "<< d << " turn/s"<<'\n';
                std::cout<<"||                                                                           ||"<<'\n';
                
              }
              else{
                std::cout<<"||\tYou are moving by the rolled amount: "<<rolled<<'\n';
                
                Place=Place+rolled ;
                Placed=Place;
              }

              
             
              
              
              break;
            }
            
          }
          
          
        }
        
        
        if(Placed==setlevel){
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
          
          
        }


Place =Placed;

     
  return Place;
         }





         int main(){
           
           srand(time(0));
           set_steps=400;
           int op =0;
           double dr = set_steps*(15/100);
           int frs = dr; 
           trapBeingsat = (rand()%15)+1;
           std::cout<<"**********************************|       |************************************"<<'\n';
    

  while(run) {
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
  if(c==set_steps){
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


  
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||                                                                           ||"<<'\n';
  std::cout<<"||\tKeep moving...---> ";
  std::getline(std::cin>>std::ws, choice);
  std::cout<<"||                                                                           ||"<<'\n';
  }
 return 0;
  
  
             }