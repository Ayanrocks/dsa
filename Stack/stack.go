package main

import "fmt"

type Stack []int

func (s *Stack) Insert(item int) {
	*s = append(*s, item)
}

func (s *Stack) Delete() {
	if !s.IsEmpty() {
		*s = (*s)[:len(*s)-1]
	}
}

func (s *Stack) IsEmpty() bool {
	return len(*s) == 0
}

func (s *Stack) Peek() int {
	return (*s)[len(*s)-1]
}

func (s *Stack) Print() {
	fmt.Println("\n ---------- Printing -------- ")
	for i := len(*s) - 1; i >= 0; i-- {
		fmt.Println((*s)[i])
	}
}

func main() {
	var stack Stack

	stack.Insert(25)
	stack.Insert(34)
	stack.Insert(12)
	stack.Insert(3)
	stack.Insert(87)
	stack.Insert(43)
	stack.Insert(29)
	stack.Print()
	stack.Delete()
	stack.Print()
	stack.Peek()
}
