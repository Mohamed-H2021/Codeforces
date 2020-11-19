import java.util.Scanner;

/**
 *
 * @author karim
 */
public class UltraFastMathematician {
    public static void main(String[] args) {
Scanner input=new Scanner(System.in);
UltraFastMathematician object=new UltraFastMathematician();
        int output_array[]=object.UltraFastMathematician(input.nextLine(), input.nextLine());
for(int i=0;i<output_array.length;i++){
    System.out.print(output_array[i]);
}
        System.out.println("");
    }
public int[] UltraFastMathematician(String number_one,String number_two){
int array_one[]=convert_to_int_array(number_one);
int array_two[]=convert_to_int_array(number_two);
int array_three[]=new int[number_one.length()];

for(int i=0;i<array_one.length;i++){
    array_three[i]=the_law(array_one[i], array_two[i]);
}

    return array_three;
}
public int[] convert_to_int_array(String number){
int array[]=new int[number.length()];
for(int i=0;i<number.length();i++){
    array[i]=Integer.parseInt(Character.toString(number.charAt(i)));
}
    return array;
}
public int the_law(int number_one,int number_two){
    if(number_one==number_two){
        return 0;
    }
    return 1;
}
}
