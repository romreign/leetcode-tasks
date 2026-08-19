type RecentCounter struct {
    calls []int
}


func Constructor() RecentCounter {
    return RecentCounter{}
}


func (this *RecentCounter) Ping(t int) int {
    this.calls = append(this.calls, t)
    countCalls := 0

    for _, v := range this.calls {
        if t - 3000 <= v && v <= t {
            countCalls++
        }
    }

    return countCalls
}


/**
 * Your RecentCounter object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Ping(t);
 */