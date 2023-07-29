// import java.util.*;



class Solution{
    class Example{

        void display(){
            System.out.println("Inside Class Example");
        }

    }   

    public static void main(String args[]){
       
        Solution obs=new Solution();
        Example ob= obs.new Example();
        ob.display();
    }

}
