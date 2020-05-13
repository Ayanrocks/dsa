package main

import "fmt"

type LinkedList struct {
	value int
	next  *LinkedList
}

var head *LinkedList
var tail *LinkedList

func Init(value int) *LinkedList {
	l := &LinkedList{
		value: value,
		next:  nil,
	}
	head = l
	tail = l
	return l
}

func (l *LinkedList) Insert(value int) {
	newNode := LinkedList{
		value: value,
		next:  nil,
	}
	tail.next = &newNode
	tail = tail.next
}

func (l *LinkedList) Delete(node int) {
	currentNode := *head
	parentNode := currentNode
	if node == head.value {
		head = head.next
		return
	}
	for currentNode.next != nil {
		if currentNode.value == node {
			parentNode.next = currentNode.next
			break
		}
		parentNode = currentNode
		currentNode = *currentNode.next
	}
}

func (l *LinkedList) Print() {
	currentNode := *head
	for currentNode.next != nil {
		fmt.Printf("%d -> ", currentNode.value)
		currentNode = *currentNode.next
	}
	fmt.Println("")
}

func main() {
	ll := Init(10)
	ll.Insert(25)
	ll.Insert(34)
	ll.Insert(12)
	ll.Insert(3)
	ll.Insert(87)
	ll.Insert(43)
	ll.Insert(29)
	ll.Insert(56)
	ll.Print()
	ll.Insert(89)
	ll.Delete(29)
	ll.Print()
	ll.Delete(10)
	ll.Print()
}
