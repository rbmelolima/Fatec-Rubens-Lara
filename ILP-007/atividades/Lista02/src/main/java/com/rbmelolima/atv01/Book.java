/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.rbmelolima.atv01;

/**
 *
 * @author roger.de.melo.lima
 */
public class Book {

    private final String name;
    private final int year;
    private final String author;

    public Book(String name, int year, String author) {
        this.name = name;
        this.year = year;
        this.author = author;
    }

    public String getName() {
        return name;
    }

    public int getYear() {
        return year;
    }

    public String getAuthor() {
        return author;
    }

    @Override
    public String toString() {
        return "Livro {" + "Nome: " + name + ", Ano de publicação: " + year + ", Autor: " + author + '}';
    }

}
