import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class boyorgirl {
    public static void main(String[] args) throws IOException {
        
BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
String inputString = br.readLine();
inputString = inputString.replaceAll((String.format("(.)(?<=(?:(?=\\1).).{0,%d}(?:(?=\\1).))", inputString.length())), "");
if(inputString.length()%2!=0){
    System.out.println("IGNORE HIM!");
}
else
            System.out.println("CHAT WITH HER!");
    }



}
