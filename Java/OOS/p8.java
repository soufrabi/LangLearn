class SynchronizedCounter{
    private int val = 0;
    public synchronized void inc(){
        val++;
    }
    public synchronized void dec(){
        val--;
    }
    public int getVal(){
        return val;
    }
}

class IncrementThread extends Thread{
    private SynchronizedCounter counter;
    IncrementThread(SynchronizedCounter counter){
        this.counter = counter;
    }

    public void run(){

        for(int i=0;i<1000;i++){
            counter.inc();
            System.out.println(counter.getVal());
        }
    }
}

class DecrementThread extends Thread{
    private SynchronizedCounter counter;
    DecrementThread(SynchronizedCounter counter){
        this.counter = counter;
    }

    public void run(){
        for(int i=0;i<1000;i++){
            counter.dec();
            System.out.println(counter.getVal());
        }
    }
}

public class p8 {
    public static void main(String[] args) {
        SynchronizedCounter counter = new SynchronizedCounter();
        IncrementThread t1 = new IncrementThread(counter);
        DecrementThread t2 = new DecrementThread(counter);

        t1.start();
        t2.start();

        try{
            t1.join();
            t2.join();
        }catch(InterruptedException e){
            e.printStackTrace();
        }


    }
}
