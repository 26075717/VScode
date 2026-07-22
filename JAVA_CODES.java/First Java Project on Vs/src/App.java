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
      System.out.println("\n\tWelcome to the Pet finder.\n\tA place to find your lost pet.\n");
      System.out.println("////////////////////////////////////////");
      System.out.println("***************************************");
       while(true){
      System.out.print("\nWhat is your pet type?: ");
      yus=gh.nextLine();
      
     

      if(yus.isBlank()|| yus.isEmpty()){System.out.println("Please enter a pet type!!!");continue;}
      else{
      if (yus.equalsIgnoreCase("dog")){
       System.out.print("\nwhat is the name of your dog?: ");
        nf = gh.nextLine();

          System.out.print("what is your dog name?: " );
        break; }
         else if(yus.equalsIgnoreCase("cat")){
         System.out.print("\nwhat is the name of your cat?: ");
         nf = gh.nextLine();

          System.out.print("what is your cat name?: " );

         break;  }
        


         }}

      
     
          gh.close();
          Jaber fh =new Jaber();
          fh.ghe();
    }
}
