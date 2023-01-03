class Employee{
    private int salary;
    Employee(){
        salary = 10000;
    }
    Employee(int salary){
        this.salary = salary;
    }
    public int getSalary() {
        return salary;
    }
}

public class J47_Overload_Constructor {
    public static void main(String[] args) {
        Employee obj = new Employee(100000);
        System.out.println(obj.getSalary());;
    }
}
