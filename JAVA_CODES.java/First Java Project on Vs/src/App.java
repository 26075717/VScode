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
         System.out.print("\nHow old is your "+hd+": ");
         String slk = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");
         System.out.println("What is your "+hd+ " name? ");
         String ks = gh.next();
         System.out.println("\n////////////////////////////////////////\n");
         System.out.println("When did you notice "+ks+" was missing? ");
         String ksif = gh.nextLine();
         System.out.println("\n////////////////////////////////////////\n");


        break; }

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
         



