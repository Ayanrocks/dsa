class CQueue {
  constructor() {
    this.arr = [10];
    this.front = 0;
    this.rear = -1;
  }
  insert(item) {
    this.rear = (this.rear + 1) % 10;
    if (!this.isEmpty()) {
      this.arr[this.rear] = item;
    }
  }
  remove() {
    if (this.isEmpty()) {
      this.front = (this.front + 1) % 10;
    }
  }
  isEmpty() {
    return this.front == this.rear;
  }
  print() {
    console.log("\n--------- Printing --------");
    let str = "";
    for (let i = this.front; i <= this.rear; i++) {
      str += this.arr[i] + " ";
    }
    console.log(str);
  }
}

// Creating CQueue
const cqueue = new CQueue();
cqueue.insert(25);
cqueue.insert(34);
cqueue.insert(12);
cqueue.insert(3);
cqueue.insert(87);
cqueue.insert(43);
cqueue.insert(29);
cqueue.print();
cqueue.remove();
cqueue.print();
