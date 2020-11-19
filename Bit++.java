import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author lenovo
 */
public class Bit {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        Bit object=new Bit();
  int num=   input.nextInt();
  ArrayList<String> t=new ArrayList<String>();
          for (int i = 0; i < num; i++) {
            t.add(input.next());
        }
  String arr[]=new String[t.size()];
        for (int i = 0; i <arr.length; i++) {
            arr[i]=t.get(i);
        }
        System.out.println(object.counter(num,arr));
    }
    public int counter(int num,String array[]){
        int counter=0;
        for (int i = 0; i < array.length; i++) {
            if(array[i].contains("--")){
             counter--;
            }
          if(array[i].contains("++")){
             counter++;
            }
        }
        return counter;
    }


}
