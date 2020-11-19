import java.util.Scanner;

/**
 *
 * @author karim
 */
public class NearlyLuckyNumber {
    public static void main(String[] args) {

NearlyLuckyNumber object=new NearlyLuckyNumber();

       // System.out.println(object.is_lucky("70"));
Scanner s=new Scanner(System.in);
        System.out.println(object.NearlyLuckyNumber(s.nextLine()));
    }
public String NearlyLuckyNumber(String number){

int counter=0;
for(int i=0;i<number.length();i++){
    if(is_lucky(Character.toString(number.charAt(i)))){
        counter++;
    }
}

if(is_lucky(Integer.toString(counter))){
    return "YES";
}
    return "NO";
}

    public boolean is_lucky(String number){

if(number.contains("0") ||number.contains("1") || number.contains("2") || number.contains("3") || number.contains("5") || number.contains("6") ||number.contains("8") || number.contains("9") )
{
    return false;
}
        return true;
    }
}
