type RandomizedSet struct {
    sl []int
    mp map[int]int
}


func Constructor() RandomizedSet {
    return RandomizedSet {
        sl: []int{},
        mp: map[int]int{},
    }
}


func (this *RandomizedSet) Insert(val int) bool {
    if this.Contains(val) {
        return false
    }
    this.sl = append(this.sl, val)
    this.mp[val] = len(this.sl) - 1
    return true
}


func (this *RandomizedSet) Remove(val int) bool {
    if !this.Contains(val) {
        return false
    }

    idx := this.mp[val]
    lastVal := this.sl[len(this.sl) - 1]
    this.sl[idx] = lastVal
    this.mp[lastVal] = idx
    this.sl = this.sl[:len(this.sl) - 1]
    delete(this.mp, val)
    return true
}


func (this *RandomizedSet) GetRandom() int {
    if len(this.mp) == 0 {
        return 0
    }
    return this.sl[rand.Intn(len(this.sl))]
}

func (this *RandomizedSet) Contains(val int) bool {
    _, ok := this.mp[val]
    return ok
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Insert(val);
 * param_2 := obj.Remove(val);
 * param_3 := obj.GetRandom();
 */