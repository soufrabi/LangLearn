import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

class MyThread1 extends Thread {

  public MyThread1(String name){
    super(name);
  }
  
  @Override
  public void run(){

    String filename = "dark.txt";
    while(true)
    {
      String text = "Thread Name + "+this.getName();
      System.out.println(text);

      // File file = new File(filename);
      // try{
      //   if(file.createNewFile()){
      //     System.out.println("New File created");
      //   }
      //   else {
      //     System.out.println("File already exists");
      //   }
      // }catch(IOException e){
      //   e.printStackTrace();
      // }

      try{
        FileWriter fw = new FileWriter("at.txt",true);
        fw.write(text+"\n");
        fw.close();
      }catch(IOException e){
        e.printStackTrace();
      }
      
    }
    
  }
}

class p3{

  public static void main (String args[]){
    System.out.println("Hello Thread Lifecycle");

    MyThread1 t1 = new MyThread1("Voila");
    MyThread1 t2 = new MyThread1("Koala");
    t1.setPriority(Thread.MAX_PRIORITY);
    t2.setPriority(Thread.MIN_PRIORITY);
    
    t1.start();
    t2.start();

  }
}