type RandomizedSet struct {
    mp map[int]int
    sl []int
}


func Constructor() RandomizedSet {
    return RandomizedSet {
        mp: map[int]int{},
        sl: []int{},
    }
}


func (this *RandomizedSet) Insert(val int) bool {
    if _, ok := this.mp[val]; ok {
        return false
    }

    this.sl = append(this.sl, val)
    this.mp[val] = len(this.sl) - 1
    return true
}


func (this *RandomizedSet) Remove(val int) bool {
    if _, ok := this.mp[val]; !ok {
        return false
    }

    idxDel := this.mp[val]
    valLast := this.sl[len(this.sl) - 1]
    this.mp[valLast] = idxDel

    this.sl[idxDel] = this.sl[len(this.sl) - 1]

    this.sl = this.sl[:len(this.sl) - 1]
    delete(this.mp, val)

    return true
}


func (this *RandomizedSet) GetRandom() int {
    if len(this.mp) == 0 {
        return 0
    }

    return this.sl[rand.IntN(len(this.sl))]
}


/**
 * Your RandomizedSet object will be instantiated and called as such:
 * obj := Constructor();
 * param_1 := obj.Insert(val);
 * param_2 := obj.Remove(val);
 * param_3 := obj.GetRandom();
 */