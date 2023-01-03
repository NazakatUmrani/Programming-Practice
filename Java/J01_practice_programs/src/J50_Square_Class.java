class Square{
    int side;
    public void setSide(int side) {
        this.side = side;
    }
    public int area(){
        return side*side;
    }
    public int perimeter(){
        return side*2;
    }
}

public class J50_Square_Class {
    public static void main(String[] args) {
        Circle obj1 = new Circle();
        obj1.setRadius(4);
        System.out.println(obj1.area());
        System.out.println(obj1.circumference());
    }
}
