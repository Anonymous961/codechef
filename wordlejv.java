import java.util.*;
public class wordlejv {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int j=0;j<t;j++){
            // String S=sc.next();
            // String T=sc.next();
            StringBuilder S=new StringBuilder(sc.next());
            StringBuilder T=new StringBuilder(sc.next());
            for(int i=0;i<5;i++){
                if(S.charAt(i)==T.charAt(i)){
                    T.insert(i,'G');
                }else{
                    T.insert(i,'B');
                }
            }
            System.out.println(T);
        }
    }
    sc.close();
}
