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
public class Library {
    private String name;
    private ArrayList<Bookcase> bookcases;

    public Library(String name, ArrayList<Bookcase> bookcases) {
        this.name = name;
        this.bookcases = bookcases;
    }

    public String getName() {
        return name;
    }

    public ArrayList<Bookcase> getBookcases() {
        return bookcases;
    }
    
    public void insertBookcase(Bookcase bookcase) {
        this.bookcases.add(bookcase);
    }
    
    public ArrayList<Book> listBooks(CategoryBookcase category) {
        ArrayList<Book> books = new ArrayList<>();
        
        this.bookcases.forEach(bookcase -> {
            if(bookcase.getCategoryBookcase() == category){
                books.addAll(bookcase.getBooks());
            }
        });
        
        return books;
    }
    
    public int countBooks(CategoryBookcase category) {
        int books = 0;
        
        for(int i = 0; i < this.bookcases.size(); i++){
            if(this.bookcases.get(i).getCategoryBookcase() == category){
                books = 1;
            }
        }
        
        return books;
    }
    
}
