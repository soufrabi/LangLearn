class MyThread extends Thread{
  private boolean active = false;
  public void Suspend(){
    active = false;
  }

  public synchronized void Resume(){
    active = true;
    notify();
  }

  public synchronized void run(){
    try{
      while(true){
        if(active){
          System.out.println("Running");
          // Thread.sleep(1000);
        }
        else{
          System.out.println("Suspended");
          wait();
        }
      }
    }catch(Exception e){
      e.printStackTrace();
    }
  }
  
}

class p6{
  public static void main(String args[]){
    MyThread t1 = new MyThread();
    t1.start();

    while(true){
      try{
      Thread.sleep(1000);
      t1.Resume();
      Thread.sleep(1000);
      t1.Suspend();
      }catch(InterruptedException e){
        e.printStackTrace();
      }
      
    }
  }
}