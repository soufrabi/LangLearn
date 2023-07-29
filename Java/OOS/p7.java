// import java.io.InterruptedException;

class MyThread extends Thread{

  private int [] arr;
  MyThread(int a[]){
    arr = a;
  }
  public void run(){
    System.out.println("Running");
    try{
        Thread.sleep(1000);
        java.util.Arrays.sort(arr);
    }catch(InterruptedException e){
      e.printStackTrace();
    }

  }
}

class p7{
  public static void main(String args[]){
    int a[] = {1,4,5,-1,5,0,3};

    MyThread t1 = new MyThread(a);
    t1.start();
    try{
      t1.join();
    }catch(InterruptedException e){
      e.printStackTrace();
    }
    
    for(int i = 0 ;i<a.length; i++){
      System.out.print(a[i]+" ");
    }
    System.out.println();

    
  }
}