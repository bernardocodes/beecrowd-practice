import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        float a,b,c;
        float p1 = 2;
        float p2 = 3;
        float p3 = 5;
        float media;

        Scanner scanner = new Scanner(System.in);

        a = scanner.nextFloat();
        b = scanner.nextFloat();
        c = scanner.nextFloat();

        media = ((a*p1) + (b*p2) + (c*p3))/(p1 +p2 + p3);
      
        System.out.println(String.format("MEDIA = %.1f",media));
        //também poderia ser: System.out.printf("MEDIA = %.1f%n", media);

        scanner.close();
    }

}
