import java.util.Random;
import java.util.Scanner;

public class Problem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i=0,len=0,j=0,temp=0;
		Scanner in=new Scanner(System.in);
		//System.out.print("Enter the array length ");
		len=5;
		Random ran=new Random();
		//adding element
		int array[]=new int[len];
		for( i=0;i<len;i++)
		{
			array[i]=ran.nextInt(100);
		}
		
		//sorting
		   for(i=0;i<len;i++)
		   {
			for(j=0;j<len-1;j++)
		   {
			if (array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;	
			}
		   }

		   }
		   
		int first=0,mid=0,word=0;
		for( i=0;i<len;i++)
		{
			System.out.print(array[i]+" ");
		}
		System.out.print("\nWhich element to search ");
		word=in.nextInt();
		
		//binary search 
		//1 2 3 4 5
		
		do
		{
			mid=(first+len+1)/2;
			if(array[mid-1]<word)
			{
				first=mid;
				temp=1;
			}
			else if(array[mid-1]>word)
			{
				len=mid;
				temp=1;
			}
			else
			{
				System.out.println("Found element at "+mid);
				temp=0;
			}
			
		}
		while((mid-first==1)||(len-mid==1));
		if(temp == 1)
		{
			System.out.print("Element not found");
		}
		in.close();
	}

}
