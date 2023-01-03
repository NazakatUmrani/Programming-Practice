class TommyVecetti{
    public void run(){
        System.out.println("Running...");
    }
    public void fire(){
        System.out.println("Firing...");
    }
    public void hit(){
        System.out.println("Hitting...");
    }
}

public class J52_TommyVecetti_Class {
    public static void main(String[] args) {
        TommyVecetti player = new TommyVecetti();
        player.run();
        player.fire();
        player.hit();
    }
}
