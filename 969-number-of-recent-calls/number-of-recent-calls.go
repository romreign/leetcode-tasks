type RecentCounter struct {
    calls []int
    countCalls int
}


func Constructor() RecentCounter {
    return RecentCounter{}
}


func (this *RecentCounter) Ping(t int) int {
    this.calls = append(this.calls, t)
   
    for t - 3000 > this.calls[this.countCalls] {
        this.countCalls++
    }
    
    return len(this.calls) - this.countCalls
}


/**
 * Your RecentCounter object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Ping(t);
 */