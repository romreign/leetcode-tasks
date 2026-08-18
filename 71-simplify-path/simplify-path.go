func simplifyPath(path string) string {
    dirs := [][]byte{}

    for s, e := 0, 0; e < len(path); e++ {
        for s < len(path) && path[s] == '/' {
            s++
            e++
        }
        
        for e < len(path) && path[e] != '/' {
            e++
        }

        if s != len(path) {
            dir := []byte(path[s:e])
            dirs = append(dirs, dir)
            s = e
        }
    }

    res := []byte{}
    currDir := []byte{'.'}
    parrentDir := []byte{'.', '.'}

    for _, dir := range dirs {
        if equalSlices(dir, currDir) {
            continue
        } else if equalSlices(dir, parrentDir) {
            i := len(res) - 1
            for i >= 0 && res[i] != '/' {
                i--
            } 
            if i <= 0 {
                res = nil
            } else {
                res = res[:i]
            }
        } else {
            res = append(res, '/')
            for _, b := range dir {
                res = append(res, b)
            }
        }
    }

    if len(res) == 0 {
        res = append(res, '/')
    }

    return string(res)
}

func equalSlices[T comparable](sl1, sl2 []T) bool {
    if len(sl1) != len(sl2) {
        return false
    }

    for i := range len(sl1) {
        if sl1[i] != sl2[i] {
            return false
        }
    }

    return true
}

