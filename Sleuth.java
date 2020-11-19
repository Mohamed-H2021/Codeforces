import java.util.Scanner;
public class Sleuth {
    public static void main(String[] args) {
        Sleuth object=new Sleuth();
        Scanner input=new Scanner(System.in);

        System.out.println(object.Sleuth(input.nextLine()));
    
    }


    public String Sleuth(String question)
    {
char c=the_last_character_n_the_question(question);
        if(is_vowels(c)){
            return "YES";
        }
        return "NO";
    }
    public boolean is_vowels(char c){
        if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u' || c=='y' ||c=='A' || c=='E'||c=='I'||c=='O'||c=='U' || c=='Y')
        {
            return true;
        }
        return false;
    }
    public char the_last_character_n_the_question(String question){
for(int i=question.length()-1;i>=0;i--){
    if(Character.isLetter(question.charAt(i))){
        return question.charAt(i);
    }

}


        return 'b';
    }
}
