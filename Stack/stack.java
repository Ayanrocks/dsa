package dataStructures.Stack;

public class stack {
    public static void main() {
        var stack = new Stack();
        stack.insert(25);
        stack.insert(34);
        stack.insert(12);
        stack.insert(3);
        stack.insert(87);
        stack.insert(43);
        stack.insert(29);
        stack.print();
        stack.delete();
        stack.print();
        stack.peek();
    }
}