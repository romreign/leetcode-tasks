type Node struct {
    key, val int
    prev *Node
    next *Node
}

type LRUCache struct {
    cap int
    head, tail *Node
    mp map[int]*Node 
}

func Constructor(capacity int) LRUCache {
    h := &Node{val: -1}
    t := &Node{val: -1}

    h.next = t
    t.prev = h

    return LRUCache{
        cap: capacity,
        mp: map[int]*Node{},
        head: h,
        tail: t,
    }
}

func (this *LRUCache) Get(key int) int {
    if node, ok := this.mp[key]; ok {
        this.toHead(node)
        return node.val
    }
    return -1
}

func (this *LRUCache) Put(key int, value int)  {
    if node, ok := this.mp[key]; ok {
        node.val = value
        this.toHead(node)
        return
    }

    node := &Node{
        key: key,
        val: value,
        prev: this.head,
        next: this.head.next,
    }

    this.head.next.prev = node
    this.head.next = node
    this.mp[key] = node

    if this.cap < len(this.mp) {
        this.removeTail()
    }
}

func (this *LRUCache) toHead(node *Node) {
    node.next.prev = node.prev
    node.prev.next = node.next

    node.prev = this.head
    node.next = this.head.next
    this.head.next.prev = node
    this.head.next = node
}

func (this *LRUCache) removeTail() {
    delNode := this.tail.prev
    delNode.prev.next = this.tail
    this.tail.prev = delNode.prev
    delete(this.mp, delNode.key)
}


/**
 * Your LRUCache object will be instantiated and called as such:
 * obj := Constructor(capacity);
 * param_1 := obj.Get(key);
 * obj.Put(key,value);
 */