type MyQueue struct {
    in []int
    out []int
}

func Constructor() MyQueue {
    return MyQueue{
        in: []int{},
        out: []int{},
    }
}

func (this *MyQueue) Push(x int)  {
    this.in = append(this.in, x)
}

func (this *MyQueue) Pop() int {
    this.Amortirazed()
    
    val := this.out[len(this.out) - 1]
    this.out = this.out[:len(this.out) - 1]
    return val
}

func (this *MyQueue) Peek() int {
    this.Amortirazed()

    return this.out[len(this.out) - 1]
}

func (this *MyQueue) Empty() bool {
    return len(this.in) == 0 && len(this.out) == 0
}

func (this *MyQueue) Amortirazed() {
    if len(this.out) != 0 {
        return
    }

    for len(this.in) > 0 {
        this.out = append(this.out, this.in[len(this.in) - 1])
        this.in = this.in[:len(this.in) - 1]
    }
}



/**
 * Your MyQueue object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * param_2 := obj.Pop();
 * param_3 := obj.Peek();
 * param_4 := obj.Empty();
 */