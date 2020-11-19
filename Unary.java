import java.util.Scanner;
public class Unary {
public static void main(String [] args){
Unary object=new Unary();
Scanner input=new Scanner(System.in);
System.out.println(object.unary_function(input.nextLine()));
}
public int unary_function(String input)
{
    String make_the_string="";
    for(int i=0;i<input.length();i++){
        if(input.charAt(i)=='>'){
make_the_string+="1000";
        }
        if(input.charAt(i)=='<'){
make_the_string+=" 1001";
        }
        if(input.charAt(i)=='+'){
make_the_string+="1010";
        }
        if(input.charAt(i)=='-'){
make_the_string+="1011";
        }
        if(input.charAt(i)=='.'){
            make_the_string+="1100";
        }
        if(input.charAt(i)==','){
make_the_string+="1101";
        }
        if(input.charAt(i)=='['){
make_the_string+="1110";
        }
          if(input.charAt(i)==']'){
make_the_string+="1111";
        }
    }
if(make_the_string.contains(" ")){
    make_the_string=make_the_string.replaceAll(" ", "");
}
    int result=convert_to_decimal(make_the_string);
    return result;
}
public int convert_to_decimal(String binary){
    int result=0;
    String binary_="";
for(int i=binary.length()-1;i>=0;i--){

   binary_+=Character.toString(binary.charAt(i));
}
    for(int i=0;i<binary_.length();i++)
    {
result+=(Integer.parseInt(Character.toString(binary_.charAt(i)))*Math.pow(2, i))%1000003;
    }
    result=result%1000003;
    return result;
}
}
