class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor(value) {
    this.head = new Node(value);
    this.tail = this.head;
    this.length = 1;
  }
  insert(value, indx) {
    const newNode = new Node(value);
    if (indx) {
      let currentNode = this.head;
      let pos = 0;
      while (currentNode.next === null) {
        if (indx - 1 === pos) {
          newNode.next = currentNode;
          currentNode.next = newNode;
          break;
        }
        currentNode = currentNode.next;
      }
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
  }
  delete(node) {
    if (node) {
      if (node === this.head.value) {
        this.head = this.head.next;
        return;
      }
      let currentNode = this.head;
      let prevNode = currentNode;
      while (currentNode.next !== null) {
        if (currentNode.value === node) {
          prevNode.next = currentNode.next;
        }
        prevNode = currentNode;
        currentNode = currentNode.next;
      }
    } else {
      this.tail = this.head.next;
    }
    this.length--;
  }
  print() {
    let head = this.head;
    let str = "";
    while (head) {
      str += head.value + " -> ";
      head = head.next;
    }
    console.log(str);
  }
}

const ll = new LinkedList(10);
ll.insert(25);
ll.insert(34);
ll.insert(12);
ll.insert(3);
ll.insert(87);
ll.insert(43);
ll.insert(29);
ll.insert(56);
ll.print();
ll.insert(89);
ll.delete(29);
ll.print();
ll.insert(43);
ll.delete(10);
ll.print();

// {
//   value: 25,
//   next: {
//     value : 34,
//     next: {
//       value: 12,
//       next: {
//         value: 3,
//         next: {
//           value: 87,
//           next: null
//         }
//       }
//     }
//   }
// }
