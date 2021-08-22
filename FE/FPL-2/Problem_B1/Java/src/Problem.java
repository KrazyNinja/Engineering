import java.util.Scanner;

public class Problem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num1=0,num2=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the first number ");
		num1=sc.nextInt();
		System.out.println("Enter the second number ");
		num2=sc.nextInt();
		System.out.println("Sum of the two number is " + (num1+num2));
		sc.close();
		
	}

}
