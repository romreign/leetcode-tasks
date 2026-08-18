func simplifyPath(path string) string {
    pathSplit := strings.Split(path, "/")
    dirs := []string{}

    for _, v := range pathSplit {
        if v == ".." {
            if len(dirs) > 0 {
                dirs = dirs[:len(dirs) - 1]
            }
        } else if v != "" && v != "." {
            dirs = append(dirs, v)
        }
    }

    return "/" + strings.Join(dirs, "/")
}
