class Employee1{
    private String name;
    private int salary;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
}

public class J48_Employee_Class {
    public static void main(String[] args) {
        Employee1 obj = new Employee1();
        obj.setName("Nazakat Umrani");
        obj.setSalary(1000000);
        System.out.println("Name: " + obj.getName());
        System.out.println("Salary: " + obj.getSalary());
    }
}
