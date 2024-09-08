import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int a,b,c;
    Scanner scanner = new Scanner(System.in);
    a = scanner.nextInt();
    b = scanner.nextInt();
    c = a + b;
    System.out.println("X = " + c);
    scanner.close();
  }
}
