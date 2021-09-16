/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.rbmelolima.atv01;

import java.util.ArrayList;

/**
 *
 * @author roger.de.melo.lima
 */
enum CategoryBookcase {
    Science, Literature, Philosophy
}

public class Bookcase {

    private final String name;
    private final CategoryBookcase categoryBookcase;
    private ArrayList<Book> books;

    public Bookcase(String name, CategoryBookcase categoryBookcase, ArrayList<Book> books) {
        this.name = name;
        this.categoryBookcase = categoryBookcase;
        this.books = books;
    }

    public String getName() {
        return name;
    }

    public CategoryBookcase getCategoryBookcase() {
        return categoryBookcase;
    }

    public ArrayList<Book> getBooks() {
        return books;
    }

    public void insertBook(Book book) {
        this.books.add(book);
    }

    public void removeBook(Book book) {
        this.books.remove(book);
    }

    public void removeBook(int index) {
        this.books.remove(index);
    }

    public void insertBooks(ArrayList<Book> books) {
        this.books.addAll(books);
    }

    ArrayList<String> retrieveAllAuthors() {
        var authors = new ArrayList<String>();

        this.books.forEach(book -> {
            authors.add(book.getAuthor());
        });

        return authors;
    }

    ArrayList<String> showAllBooks() {
        var listBooks = new ArrayList<String>();

        this.books.forEach(book -> {
            listBooks.add(book.toString());
        });

        return listBooks;
    }
    
    public int countBooks() {
        return this.books.size();
    }

}
