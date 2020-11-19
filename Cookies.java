import java.util.ArrayList;
import java.util.Scanner;
public class Cookies {
    public static void main(String[] args) {
Scanner n=new Scanner(System.in);
String number_of_pages=n.nextLine();
String all_the_pages_contents=n.nextLine();
Cookies object=new Cookies();
        System.out.println(object.Cookies(number_of_pages,all_the_pages_contents));

    }


    public int Cookies(String number_of_bags,String the_number_of_cookies_in_Each_bag){


    int num_of_bags=Integer.parseInt(number_of_bags);
    int array[]=new int[num_of_bags];

    String temp[]=null;
    String delimiter=" ";
    temp=the_number_of_cookies_in_Each_bag.split(delimiter);
for(int i=0;i<temp.length;i++){
    array[i]=Integer.parseInt(temp[i]);
}
int sum=0;
for(int i=0;i<array.length;i++){
sum+=array[i];
}
ArrayList<Integer> tt=new ArrayList<Integer>();

String make="";
for(int i=0;i<array.length;i++){
    if(still_even(sum, array[i])){

        make+=Integer.toString(array[i]);
    tt.add(array[i]);
    }
}
int helper_Array[]=new int[tt.size()];
for(int i=0;i<helper_Array.length;i++){
    helper_Array[i]=tt.get(i);
}
//number_of_Same_elements(array, helper_Array);
for(int i=0;i<helper_Array.length;i++){
    //System.out.println(helper_Array[i]);
}

       // System.out.println(make);
        
        return helper_Array.length;
    }

public int counter_of_this_number(int array[],int number){
    int counter=0;
    for(int i=0;i<array.length;i++){

        if(array[i]==number){
            counter++;
        }
    }
    return counter;
}
public boolean still_even(int sum,int element){
if((sum-element)%2==0){
    return true;
}

    

    return false;
}
public int number_of_Same_elements(int arrayone[],int arraytwo[]){
int counter=0;

int max=0;
if(arrayone.length>arraytwo.length){
    max=arrayone.length;
}
if(arrayone.length<arraytwo.length){
    max=arraytwo.length;
}


for(int i=0;i<max;i++){
    if(arrayone[i]==arraytwo[i]){
        counter++;
    }


}


    return counter;
}
}
