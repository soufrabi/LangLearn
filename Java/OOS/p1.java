

class MyThread1 extends Thread{
  @Override
  public void run(){
    while(true){
      System.out.println("Thread is running");
      System.out.println("I am happy");
    }
    
  }
}

class MyThread2 extends Thread{
  @Override
  public void run(){
    while(true){
      System.out.println("Thread is running");
      System.out.println("I am sad");
    }
    
  }
  
}
class p1{

  
  public static void main(String args[]){
    MyThread1 thread1 = new MyThread1();
    MyThread2 thread2 = new MyThread2();

    thread1.start();
    thread2.start();
    
    
  }
}