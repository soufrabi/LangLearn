import java.util.*;

class Solution{


public static void main(String args[]){
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the size of the array  : ");
    int n = sc.nextInt();

    ArrayList<Integer> arr = new ArrayList<Integer>(n);
    
    System.out.print("Enter the array elements : ");
    for (int i = 0; i < n; i++) {
        int x=sc.nextInt();
        arr.add(x);
    }

    System.out.println(arr);





    sc.close();
}

}
