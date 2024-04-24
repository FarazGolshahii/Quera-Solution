// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/126106/

package main

import (
	"fmt"
)

func HelloCodeCup(n int) string {
	return "Hello CodeCup " + fmt.Sprint(n)
}

func main() {
	str := HelloCodeCup(6)
	fmt.Println(str)
}