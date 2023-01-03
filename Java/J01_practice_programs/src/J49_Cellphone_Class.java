class Cellphone{
    public void ring(){
        System.out.println("Ringing...");
    }
    public void vibrate(){
        System.out.println("Vibrating...");
    }
    public void call(){
        System.out.println("Calling...");
    }
}

public class J49_Cellphone_Class {
    public static void main(String[] args) {
        Cellphone nokia34 = new Cellphone();
        nokia34.call();
        nokia34.ring();
        nokia34.vibrate();
    }
}
