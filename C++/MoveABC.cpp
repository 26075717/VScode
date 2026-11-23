#include <iostream>
#include<ctime>


int  crRolled = 0, set_steps =0;
bool run =true;

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

  int arRolled = (rand()%SetPart3)+1;
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

  int arRolled = (rand()%SetPart1)+1;
     if(ar>0){
    
        while(run){
      
       GOdown = Placedd-arRolled; 

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


int main(){
     srand(time(0));

int Place = 176;
int a=4,b=0, c=0, set = 400;

Place = MoveABC(a, b, c, Place, set);
    std::cout<<Place<<'\n';

    return 0;
}