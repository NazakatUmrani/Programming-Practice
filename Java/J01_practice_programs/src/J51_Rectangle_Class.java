class Rectangle{
    int length, width;
    public void setLength(int length) {
        this.length = length;
    }
    public void setWidth(int width) {
        this.width = width;
    }
    public int area(){
        return length*width;
    }
    public int perimeter() { return ((length+width)*2); }
}

public class J51_Rectangle_Class {
    public static void main(String[] args) {
        Rectangle recObj = new Rectangle();
        recObj.setLength(4);
        recObj.setWidth(7);
        System.out.println(recObj.area());
        System.out.println(recObj.perimeter());
    }
}
