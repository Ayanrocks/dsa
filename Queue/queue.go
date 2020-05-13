package main

import "fmt"

type Queue struct {
	arr   []int
	front int
	rear  int
}

func (q *Queue) Init() *Queue {
	return &Queue{
		arr:   []int{},
		front: 0,
		rear:  -1,
	}
}

func (q *Queue) Insert(item int) {
	q.rear++
	q.arr = append(q.arr, item)
}

func (q *Queue) Remove() {
	q.front++
}

func (q *Queue) Peek() int {
	return q.arr[q.rear]
}

func (q *Queue) isEmpty() bool {
	return q.front == q.rear
}

func (q *Queue) Print() {
	fmt.Println("\n-------------- Queue ----------")
	for i := q.front; i <= q.rear; i++ {
		fmt.Printf("%d ", q.arr[i])
	}
}

func main() {
	// Creating Queue
	var q Queue
	queue := q.Init()
	queue.Insert(25)
	queue.Insert(34)
	queue.Insert(12)
	queue.Insert(3)
	queue.Insert(87)
	queue.Insert(43)
	queue.Insert(29)
	queue.Print()
	queue.Remove()
	queue.Print()
}
