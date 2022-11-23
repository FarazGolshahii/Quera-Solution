package main

import "fmt"

func main() {
    var P, L int
    fmt.Scanf("%d %d", &P, &L)

    var Y int
    fmt.Scanf("%d", &Y)

    for i := 0; i < Y; i++ {
        P*=2;
        P-=L
    }

    fmt.Println(P)
}