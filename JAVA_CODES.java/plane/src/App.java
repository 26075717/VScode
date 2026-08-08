import java.awt.Color;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JInternalFrame;
//import java.awt.event.ActionListener;
import javax.swing.JLabel;


public class App {
  static JButton THY2 = new JButton();
  static JButton THY1 = new JButton();
  static JButton THY3 = new JButton();
  static  JFrame Bases = new JFrame("MASUT");
 static   JPanel Back0 = new JPanel();
 static   JPanel Back = new JPanel();
 static   JPanel Back1 = new JPanel();
 static JInternalFrame Ser = new JInternalFrame();

 static   JLabel Word = new JLabel();
      public static void main(String[] args) throws Exception {

        Ser.setBounds(4,0,960,580);
        Ser.setBackground(new Color(0,100,0));
        Ser.setOpaque(true);
        Ser.setVisible(true);


                  // buttons
        THY1.setBounds(323,367,129,80);
        THY2.setBounds(523,600,100,50);
        THY3.setBounds(723,367,129,80);
        THY1.setText("START");
        THY1.addActionListener(e->{
          Back0.setVisible(false);

        });



        THY2.setText("EXIT");
        THY2.addActionListener(e->{
          Back0.setVisible(true);


        });


        THY3.setText("EXIT");
        THY3.addActionListener(e->{
          Bases.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          Bases.setVisible(false);


        });


        THY1.setBackground(Color.red);
        THY2.setBackground(Color.blue);
        THY3.setBackground(Color.yellow);
        THY1.setFocusable(false);
        THY2.setFocusable(false);
        THY3.setFocusable(false);


        Back0.setBounds(0,0,1290,800);
        Back0.setBackground(Color.BLACK);
        Back0.setLayout(null);
        
        Back0.add(THY1);
        Back0.add(THY3);
        
        Back0.setOpaque(true);
        Back0.setVisible(true);


        Back.setOpaque(true);

        Back.setBounds(0,0,300,780);
        Back1.setBounds(305,0,1150,780);

     Back.setBackground(Color.BLUE);


     Back1.setBackground(Color.RED);
     Back1.add(Ser);
     Back1.setLayout(null);
     Back1.add(THY2);

     Back.setVisible(true);
     Back1.setVisible(true);
     
     Word.setBounds(0,0,50,40);
     Word.setBackground(Color.RED);
     Word.setOpaque(true);
     Word.setVisible(true);
     
     Back.add(Word);
     Bases.add(Back0);
     Bases.add(Back);
     Bases.add(Back1);
     Bases.setBounds(450,456,1290,800);
     Bases.setLayout(null);
     Bases.setLocation(0, 0);
     Bases.setResizable(false);
     Bases.getContentPane().setBackground(Color.yellow);
     Bases.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
     Bases.setVisible(true);

    }
}
