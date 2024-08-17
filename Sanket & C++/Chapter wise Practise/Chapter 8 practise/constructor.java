
class Base{

    int x ;
    int y ;

     public Base (int a , int b){
        this.x = a;
        this.y = b;
     }

     public Base(int k){
        this.x = k;
        this.y = 3;
     }

     public void display(){
        System.out.println("x: " + x + " y: " + y);
     }
}

/**
 * constructor
 */
public class constructor {

     public static void main(String[] args)
     {
        Base ojb1 = new Base (45 , 47);
        Base ojb2 = new Base(45);

ojb1.display();
ojb2.display();
}    
}