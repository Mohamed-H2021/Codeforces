import java.util.Scanner;

/**
 *
 * @author lenovo
 */
public class Team {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int counter=0;
        String arr[]=new String[n+1];
        for (int i = 0; i < arr.length; i++) {
            arr[i]=input.nextLine();
        if(arr[i].contains("1 1") || arr[i].contains("1 0 1")){
            counter++;
        }
        }
        System.out.println(counter);
    }





}
