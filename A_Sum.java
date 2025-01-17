import java.util.Scanner;

public class A_Sum{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int a,b,c,t;
        t=scan.nextInt();
        for(int i=0;i<t;i++){
            a=scan.nextInt();
            b=scan.nextInt();
            c=scan.nextInt();

             if(a+b==c||b+c==a||a+c==b){
                System.out.println("YES");
             }else{
                System.out.println("NO");
             }
        }
    }
}