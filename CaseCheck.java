import java.util.*;

public class CaseCheck 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);

        if(Character.isUpperCase(ch))
            System.out.println("Uppercase");
        else
            System.out.println("Lowercase");
        sc.close();
    }
}
