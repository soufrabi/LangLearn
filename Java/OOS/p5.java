class MyThreadRunnable implements Runnable{
  public void run(){
    for(int i= 1;i<=100;i++){
      System.out.println("In my runnable");
    }
  }
}


class p5{
  public static void main(String args[]){

    System.out.println("Exec");

    MyThreadRunnable myRunnable = new MyThreadRunnable();
    Thread t1 = new Thread(myRunnable);

    t1.start();
  }
}