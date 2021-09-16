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
enum Sex {
    M, F
}

public class People {

    String name;
    Sex sex;
    int age;
    boolean isVegetarian;
    
    public People(String name, Sex sex, int age, boolean isVegetarian) {
        this.name = name;
        this.sex = sex;
        this.age = age;
        this.isVegetarian = isVegetarian;
    }
}
