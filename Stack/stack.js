class Stack {
  constructor() {
    this.arr = [];
  }

  // Inserts at he end of an array
  insert(item) {
    return this.arr.push(item);
  }

  // deletes at the end of the array
  delete() {
    if (this.arr.length > 0) {
      return this.arr.pop();
    }
  }

  // returns the top most element of the stack
  peek() {
    if (this.arr.length > 0) {
      return this.arr[this.arr.length - 1];
    }
  }

  // Returns true if the stack is empty
  isEmpty() {
    return this.arr.length == 0;
  }

  // Print Stack
  print() {
    console.log("\n ----------- Printing --------- \n ");

    for (let i = this.arr.length - 1; i >= 0; i--) {
      console.log(this.arr[i] + "\n");
    }
    console.log("\n ----------------------");
  }
}

// Creating Stack
const stack = new Stack();
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
