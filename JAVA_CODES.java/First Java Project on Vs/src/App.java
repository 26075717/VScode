import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner gh = new Scanner(System.in);
      String nf,yus;
      System.out.println("***************************************");
      System.out.println("////////////////////////////////////////");
      System.out.println("\n\t\tHello!!!\n");
      System.out.println("////////////////////////////////////////");
      System.out.println("////////////////////////////////////////");
      System.out.println("\n\n\tWelcome to the Pet finder.\n\tA place to find your lost pet.\n");
      System.out.println("////////////////////////////////////////");
      System.out.println("***************************************");
      while(true){
        System.out.println("Pet Types: \n1) DOG.\n2) CAT.\n3) FISH.\n4) OTHERS\n5) EXIT");
        System.out.print("\nWhat is your pet type?: ");
        yus=gh.nextLine();
        
        
        
        if(yus.isBlank()|| yus.isEmpty()){
          
          System.out.println("\n***************************************");
          System.out.println("////////////////////////////////////////\n");
         System.out.println("\tPlease enter a pet type!!!");
         System.out.println("\n////////////////////////////////////////");
         System.out.println("////////////////////////////////////////\n");
        
        continue;}
        else{
          if (yus.equalsIgnoreCase("dog")|| yus.equals("1")){
       
       System.out.print("\nwhat is the name of your dog?: ");
        nf = gh.nextLine();

          System.out.print("what is your dog name?: " );
        break; }
         else if(yus.equalsIgnoreCase("cat")|| yus.equals("2")){
         System.out.print("\nwhat is the name of your cat?: ");
         nf = gh.nextLine();

          System.out.print("what is your cat name?: " );

         break;  }

         else if(yus.equalsIgnoreCase("fish")|| yus.equals("3")){
         System.out.print("\nwhat is the name of your fish?: ");
         nf = gh.nextLine();

          System.out.print("what is your fish name?: " );

         break; 


         }

         else if(yus.equalsIgnoreCase("other")|| yus.equals("4")|| yus.equalsIgnoreCase("others") ){

         System.out.println("\n////////////////////////////////////////\n");
         System.out.println("What is your pet type? ");
         String hd = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");
         System.out.print("How old is your "+hd+": ");
         String slk = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");
         System.out.println("What is your "+hd+ " name? ");
         String ks = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");
         System.out.println("When did you notice "+ks+" was missing? ");
         String tiod = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");
         String jui =  "So you have a pet "+hd+ " which is named "+ks+" aged "+slk+ ". \nAnd you noticed it was missings since "+tiod;    
        
         System.out.println(jui);
         System.out.println("Is this the case?\n (yes) or (no)");
         String sldf = gh.nextLine();
         if (sldf.equalsIgnoreCase("yes")){
          System.out.println("\nYOUR REPORT HAS BEEN MADE SUCCESSFULLY!!!");

          break;
         }
         else if(sldf.equalsIgnoreCase("no")){
          
          System.out.println("UPDATE YOUR STORY!!!\n");

          while (true){
                  System.out.println(jui);
                  System.out.println("What would you like to change?\n1) Pet Type? \n2) How old The Pet is? \n3) Pet Name? \n4) When Pet was Missing? \n5) No need to change the Story ");
                  System.out.print("Enter your Choice: ");
                  String ldfv = gh.nextLine();

              switch (ldfv) {
           case "1": System.out.print("Enter your pet type: ");
                      String vsd = gh.nextLine();
                     hd = vsd;
                     System.out.println("Your pet type is "+hd);
                     System.out.println("\nYour new story is: \n");
                     System.out.println(jui);
                     System.out.println("\nWOULD YOU LIKE TO CHANGE?\n(yes) or(no)");
                     String vtd = gh.nextLine();
                      if (vtd.equalsIgnoreCase("yes")){continue;}
                      else if(vtd.equalsIgnoreCase("no")){break;}
                      else{System.out.println("Please enter from the given option.");}
              break;
              case "2": System.out.print("Enter your pet age: ");
                        String vsid = gh.nextLine();
                        slk = vsid;
                        System.out.println("Your pet age is "+slk);
                       System.out.println("\nYour new story is: \n");
                       System.out.println(jui);

             break;
             case "3": System.out.print("Enter your pet name: ");
                        String vrid = gh.nextLine();
                        ks = vrid;
                        System.out.println("Your pet type is "+ks);
                         System.out.println("\nYour new story is: \n");
                         System.out.println(jui);

              break;
               case "4": System.out.print("Enter when it was missing: ");
                        String vid = gh.nextLine();
                        tiod = vid;
                        System.out.println("Your pet type is "+tiod);
                        System.out.println("\nYour new story is: \n");
                       System.out.println(jui);

                break;
               case "5": System.out.print("The is no need to change the story.");
                        
                        System.out.println("\nSO THE STORY REMAINS \n"+jui);
              break;
            default: System.out.println("PLEASE SELECT THE FROM THE GIVEN OPTIONS");
             continue;} break;
}

  continue;}
           else {
            System.out.println("\n////////////////////////////////////////");
            System.out.println("////////////////////////////////////////\n");
            System.out.println("PLEASE CHOSE YES OR NO ");
            System.out.println("\n////////////////////////////////////////\n");
            continue;}
            

 }

       else if(yus.equalsIgnoreCase("Exit")|| yus.equals("5") ){
         System.out.println("\n////////////////////////////////////////\n");
          System.out.println("\tYou left!!!");
          System.out.println("\n////////////////////////////////////////\n");

        break; }
        
        else{
          System.out.println("\n////////////////////////////////////////\n");
          System.out.println("PLEASE CHOOSE FROM THE GIVEN OPTION!!!"); 
          System.out.println("\n////////////////////////////////////////");

          continue;
        }
        
        

      }
     
    }
          Jaber fh =new Jaber();
          fh.ghe();
           gh.close();
      }

      
        }
         



