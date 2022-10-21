import java.util.Scanner;
public class Recursive_Sum_Num {
    static int recursive_sum(int n)
    {
        if(n==1)
        return 1;
        else
        return n+recursive_sum(n-1);
    }
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int sum=recursive_sum(n);  
       System.out.println(sum);
    }
}
