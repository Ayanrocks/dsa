class Queue {
  constructor() {
    this.arr = [];
  }

  // Inserts at the end of an array
  insert(item) {
    this.arr.push(item);
  }

  // Deletes at the begining of the array
  delete() {
    return this.arr.shift();
  }

  // isEmpty returns if the queue is an array
  isEmpty() {
    return this.arr.length === 0;
  }

  // print
  print() {
    console.log("\n---------- Printing ----------");
    let string = "";
    for (let i = 0; i < this.arr.length; i++) {
      string += this.arr[i] + " ";
    }
    console.log(string);
  }
}

// Creating Queue
const queue = new Queue();
queue.insert(25);
queue.insert(34);
queue.insert(12);
queue.insert(3);
queue.insert(87);
queue.insert(43);
queue.insert(29);
queue.print();
queue.delete();
queue.print();
