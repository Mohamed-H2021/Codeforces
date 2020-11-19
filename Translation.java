import java.util.Scanner;

/**
 *
 * @author karim
 */
public class Translation {
    public static void main(String[] args) {
Scanner ob=new Scanner(System.in);
Translation object=new Translation();
        System.out.println(object.translation(ob.nextLine(), ob.nextLine()));

    }



    public String translation(String s,String t){
if( reverse_String(s).equals(t)){
    return "YES";
}
        return "NO";
    }
    public String reverse_String(String original){
String middle="";
for(int i=original.length()-1;i>=0;i--){
    middle+=Character.toString(original.charAt(i));
}
        return middle;
    }
public boolean is_equal(String s,String t){
    if(s.equals(t)){
        return true;
    }
    return false;
}
}
