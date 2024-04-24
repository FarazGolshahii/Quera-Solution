// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/181681/

package library

import "strings"

type Library struct {
	capacity  int
	books     []string
	borrowers []string
}

func NewLibrary(capacity int) *Library {
	var lib Library
	lib.capacity = capacity
	lib.books = make([]string, capacity)
	lib.borrowers = make([]string, capacity)
	for i := 0; i < lib.capacity; i++ {
		// If you're seeing this shit on my repo, you have to know that
		// I wasn't enough familiar with Go and these values are only random bullshits to set state.
		lib.books[i] = "!.~~~~~~~~~~~~~~~~~~~~.!"
		lib.borrowers[i] = "@:~~~~~~~~~~~~~~~~~~~~:@"
	}
	return &lib
}

func (library *Library) AddBook(name string) string {
	for i := 0; i < library.capacity; i++ {
		if library.books[i] == "!.~~~~~~~~~~~~~~~~~~~~.!" {
			library.books[i] = strings.ToLower(name)
			return "OK"
		}
		if library.books[i] == strings.ToLower(name) {
			return "The book is already in the library"
		}
	}
	return "Not enough capacity"
}

func (library *Library) BorrowBook(bookName, personName string) string {
	for i := 0; i < library.capacity; i++ {
		if library.books[i] == strings.ToLower(bookName) {
			if library.borrowers[i] == "@:~~~~~~~~~~~~~~~~~~~~:@" {
				library.borrowers[i] = personName
				return "OK"
			} else {
				return "The book is already borrowed by " + library.borrowers[i]
			}
		}
	}
	return "The book is not defined in the library"
}

func (library *Library) ReturnBook(bookName string) string {
	for i := 0; i < library.capacity; i++ {
		if library.books[i] == strings.ToLower(bookName) {
			if library.borrowers[i] == "@:~~~~~~~~~~~~~~~~~~~~:@" {
				return "The book has not been borrowed"
			}
			library.borrowers[i] = "@:~~~~~~~~~~~~~~~~~~~~:@"
			return "OK"
		}
	}
	return "The book is not defined in the library"
}