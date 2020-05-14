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

  // TODO NOT COMPLETE PRINT 

  print() {
    let diff = 16;
    let start = 50;
    let c = " ";

    thisLevel = [(this, start)];

    while (thisLevel) {
      let nextLevel = [];
      let lastLine = "";

      for ((node, d) in thisLevel) {
        let line = lastLine + c * (d - lastLine.length) + node.data.toString();
        console.log(line);

        lastLine = line;

        if (node.left) {
          nextLevel.push((node.left, d - diff));
        }
        if (thi.right) nextLevel.push((node.right, d + diff));
        thisLevel = nextLevel;
        diff = Math.max(diff);
      }
      console.log("\n");
    }
  }
}

//     11
//   8     16
// 5   10     18

const tree = new BinaryTree(56);
console.log(tree.value);
console.log(tree.left);
console.log(tree.left);

tree.insertLeft(8);
tree.insertRight(16);
const leftTree = tree.left;
const rightTree = tree;

leftTree.insertLeft(5);
leftTree.insertRight(10);

rightTree.insertRight(18);
tree.print()

console.log(tree.value);
console.log(tree.left);
console.log(tree.left);
