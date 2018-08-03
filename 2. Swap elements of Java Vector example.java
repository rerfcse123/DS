// Swap elements of Java Vector example

import java.util.Vector;
import java.util.Collections;
 
public class SwapElementsOfVectorExample {
 
  public static void main(String[] args) {
   
    
    Vector v = new Vector();
   
     
    v.add("1");
    v.add("2");
    v.add("3");
    v.add("4");
    v.add("5");
   
    System.out.println("Before swaping, Vector contains : " + v);
   
   
    Collections.swap(v,0,4);
   
    System.out.println("After swaping, Vector contains : " + v);
   
  }
}