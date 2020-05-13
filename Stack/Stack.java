package dataStructures.Stack;

import java.util.ArrayList;

public class Stack {

    public ArrayList<Integer> arr = new ArrayList<Integer>();

    public void insert(int item) {
        this.arr.add(item);
    }

    public void delete() {
        if (!this.isEmpty()) {
            this.arr.remove(this.arr.size() - 1);
        }
    }

    public int peek() {
        return this.arr.get(this.arr.size() - 1);
    }

    public boolean isEmpty() {
        return this.arr.isEmpty();
    }

    public void print() {
        System.out.println("\n------------- Printing ---------");
        for (int i = this.arr.size() - 1; i >= 0; i--) {
            System.out.println(this.arr.get(i) + "\n");
        }
    }
}