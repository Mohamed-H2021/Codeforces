import java.util.Scanner;

/**
 *
 * @author karim
 */
public class IQtest {
    public static void main(String[] args) {
Scanner input=new Scanner(System.in);
IQtest object=new IQtest();
int number=Integer.parseInt(input.nextLine());
String temp[]=null;
int arr[]=new int[number];
String delimiter=" ";
temp=input.nextLine().split(delimiter);

for(int i=0;i<temp.length;i++){
    arr[i]=Integer.parseInt(temp[i]);
}
        System.out.println(object.IQtest(number, arr));
    }

public int IQtest(int number,int arr[]){
int index=0;
    if(counter_of_even(arr)>counter_of_odd(arr)){
    index=get_odd_index(arr);
}
if(counter_of_even(arr)<counter_of_odd(arr)){
    index=get_even_index(arr);
}

    return index+1;
}
    public int get_odd_index(int arr[])
    {
        int index=0;
        
for(int i=0;i<arr.length;i++){
    if(arr[i]%2!=0){
       index= i;
    }
}


        return index;
    }

    public int get_even_index(int arr[])
    {
        int index=0;

for(int i=0;i<arr.length;i++){
    if(arr[i]%2==0){
       index=i;
    }
}
        return index;
    }
    public int counter_of_even(int arr[])
    {
        int counter=0;

for(int i=0;i<arr.length;i++){
    if(arr[i]%2==0){
       counter++;
    }
}
        return counter;
    }
public int counter_of_odd(int arr[])
    {
        int counter=0;

for(int i=0;i<arr.length;i++){
    if(arr[i]%2!=0){
       counter++;
    }
}
        return counter;
    }
}
