// Binary Tree

class BinaryTree {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
  insertLeft(item) {
    if (!this.left) {
      this.left = new BinaryTree(item);
    } else {
      const newNode = new BinaryTree(item);
      newNode.left = this.left;
      this.left = newNode;
    }
  }
  insertRight(item) {
    if (!this.right) {
      this.right = new BinaryTree(item);
    } else {
      const newNode = new BinaryTree(item);
      newNode.right = this.right;
      this.right = newNode;
    }
  }
  // BFS
  breadthFirstSearch() {
    const queue = [];
    queue.push(this);
    let string = "";

    while (queue.length !== 0) {
      const currentNode = queue.shift();
      string += currentNode.value + " -> ";
      if (currentNode.left) {
        queue.push(currentNode.left);
      }
      if (currentNode.right) {
        queue.push(currentNode.right);
      }
    }
    console.log(string);
  }

  // DFS
  depthFirstSearch(type) {
    if (type === "INORDER") return this.preOrderTraversal(this);
    if (type === "PREORDER") return this.preOrderTraversal(this);
    if (type === "POSTORDER") return this.postOrderTraversal(this);
  }

  inOrderTraversal() {
    
  }
  preOrderTraversal() {

  }
  postOrderTraversal() {

  }
}

//     11
//   8     16
// 5   10     18
// BFS -> 11 -> 8 -> 16 -> 5 -> 10 -> 18
// DFS
//  Inorder   -> 5 -> 8 -> 10 -> 11 -> 16 -> 18
//  PreOrder  -> 11 -> 8 -> 5 -> 10 -> 16 -> 18
//  PostOrder -> 5 -> 10 -> 8 -> 18 -> 16 -> 11
const tree = new BinaryTree(11);
// console.log(tree.value);
// console.log(tree.left);
// console.log(tree.left);

tree.insertLeft(8);
tree.insertRight(16);
const leftTree = tree.left;
const rightTree = tree.right;

leftTree.insertLeft(5);
leftTree.insertRight(10);

rightTree.insertRight(18);
tree.breadthFirstSearch();

console.log(tree.value);
console.log(tree.left);
console.log(tree.right);
