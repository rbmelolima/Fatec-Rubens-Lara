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
public class Atv01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        ArrayList<Book> books = new ArrayList<>();
        books.add(new Book("Livro1", 2021, "rbmelolima"));
        books.add(new Book("Livro2", 2020, "rbmelolima"));
        books.add(new Book("Livro3", 2019, "rbmelolima"));
        books.add(new Book("Livro4", 2018, "rbmelolima"));
        books.add(new Book("Livro5", 2017, "rbmelolima"));

        ArrayList<Bookcase> bookcases = new ArrayList<>();

        bookcases.add(new Bookcase("Ciência", CategoryBookcase.Science, books));
        bookcases.add(new Bookcase("Literatura", CategoryBookcase.Literature, books));
        bookcases.add(new Bookcase("Filosofia", CategoryBookcase.Philosophy, books));
        
        Library library = new Library("Fatec", bookcases);
    }

}
