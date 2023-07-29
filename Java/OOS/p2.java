class MyThreadRunnable1 implements Runnable{
  public void run(){

    while(true){
      System.out.println("I am thread 1");
    }
  }
}

class MyThreadRunnable2 implements Runnable{
  public void run()
  {
    while(true){
      System.out.println("I am thread 2");
    }
    
  }
}


class p2{
  public static void main(String args[]){
    System.out.println("Hello Sir");

    MyThreadRunnable1 bullet1 = new MyThreadRunnable1();
    Thread gun1 = new Thread(bullet1);
    MyThreadRunnable2 bullet2 = new MyThreadRunnable2();
    Thread gun2 = new Thread(bullet2);

    gun1.start();
    gun2.start();
  }
}