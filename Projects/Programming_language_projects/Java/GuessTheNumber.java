import java.util.Random;
import java.util.Scanner;
   
class Main {
    private static final Random r = new Random();
    private static final int NUMBER = r.nextInt(100) + 1;
    private static int guess = 0;

    public static void main(String[] args) {  
        Scanner player = new Scanner(System.in);
           System.out.println("number is " + String.valueOf(NUMBER)); 
             System.out.println("Welcome to the Game.");
            while ( guess != NUMBER ) {
            // prompt player for guess
           
            System.out.println("Guess a number between 1 and 100 or to Quit enter -1");
            guess = player.nextInt();
            if(guess < 0){
                System.out.println("You Quit....");
                System.out.println("the number was " + String.valueOf(NUMBER)); 
                System.exit(0);
            }
            else if ( guess > NUMBER ) {
                System.out.println("Too high");
            } else if ( guess < NUMBER ) {
                System.out.println("Too low");
            }
            else {
                System.out.println("That's right!");
                System.exit(0);
            }
        }
  }
}
