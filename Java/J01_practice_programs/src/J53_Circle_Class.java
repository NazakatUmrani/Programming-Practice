class Circle {
    double radius;
    public void setRadius(double radius) {
        this.radius = radius;
    }
    public double area(){ return (Math.PI*(radius*radius)); }
    public double circumference(){ return (2*Math.PI*radius); }
}

public class J53_Circle_Class {
    public static void main(String[] args) {
        Circle circObj = new Circle();
        circObj.setRadius(4);
        System.out.println(circObj.area());
        System.out.println(circObj.circumference());
    }
}
