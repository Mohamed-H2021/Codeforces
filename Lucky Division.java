import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author karim
 */
public class LuckyDivision
{
    public static void main(String[] args)
    {
LuckyDivision object=new LuckyDivision();
Scanner t=new Scanner(System.in);
int n=Integer.parseInt(t.nextLine());
        System.out.println(object.LuckyDivision(n));
    }
public String LuckyDivision(int number)
{
int arr[]=luckyNumbers();
int counter=0;
for(int i=0;i<arr.length;i++){
    if(number%arr[i]==0){
        counter++;
    }
}
  //  System.out.println(counter);
    if(counter==0){
        return "NO";
    }
if(counter!=0){
        return "YES";
    }
    return null;
}
public int[] luckyNumbers(){
    ArrayList<Integer> n=new ArrayList<Integer>();
String t=null;
int number;
for(int i=0;i<1000;i++){
 t=Integer.toString(i);
 if(!t.contains("0") &&!t.contains("1") && !t.contains("2")  && !t.contains("3") && !t.contains("5") && !t.contains("6") &&  !t.contains("8") && !t.contains("9")){
     //System.out.println(t);
 number=Integer.parseInt(t);
 n.add(number);
 }
}
int result_array[]=new int[n.size()];
for(int i=0;i<n.size();i++){
    result_array[i]=n.get(i);
}
    return result_array;
}
}
