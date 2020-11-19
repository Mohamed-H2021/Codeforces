import java.util.Scanner;
public class WastedTime {
    public static void main(String[] args) {
      WastedTime object=new WastedTime();
        //System.out.println(object.distance(0, 0, 10, 0));
    Scanner tttt=new Scanner(System.in);
String first_line=tttt.nextLine();
String temp[]=first_line.split(" ");
int n=Integer.parseInt(temp[0]);
int k=Integer.parseInt(temp[1]);
String array[]=new String [n];
for(int i=0;i<array.length;i++){
    array[i]=tttt.nextLine();
}
        System.out.println(object.form_the_result(object.distance_for_all(array,n,k)));

  
    }
    public double distance(int x1 , int y1 ,int x2,int y2)
    {
double x2_x1=Math.pow(x2-x1,2);
double y2_y1=Math.pow(y2-y1,2);
        return Math.sqrt(x2_x1+y2_y1);
    }
public double distance_for_all(String arr[] , int n , int k)
{
    String point_one[]=null;
    String point_two[]=null;
String delimiter=" ";
int x1,x2,y1,y2;
double result=0;
    for(int i=0;i<arr.length-1;i++)
    {
        point_one=arr[i].split(delimiter);
        point_two=arr[i+1].split(delimiter);
x1=Integer.parseInt(point_one[0]);
y1=Integer.parseInt(point_one[1]);
x2=Integer.parseInt(point_two[0]);
y2=Integer.parseInt(point_two[1]);
result+=distance(x1, y1, x2, y2);   
    }
    return result*k/50;
}
public String form_the_result(double number){
    String egy=null;
String convert_double=Double.toString(number);
String make_str="";
String temp[]=null;
String deli="\\.";
temp=convert_double.split(deli);
String makezeros="";
if(temp[1].length()<9){
int length=9-temp[1].length();
for(int i=0;i<length;i++){
    makezeros+="0";
}
}
if(temp[1].length()>9){
for(int i=0;i<9;i++){
     makezeros+=Character.toString(temp[1].charAt(i));
}
}

  //  System.out.println("before.   "+temp[0]);
   // System.out.println("after .   "+makezeros);
if(temp[1].length()>9){
    egy=temp[0]+"."+makezeros;
}
if(temp[1].length()<9){
   egy=temp[0]+"."+temp[1]+makezeros;
}
    return egy;
}
}
