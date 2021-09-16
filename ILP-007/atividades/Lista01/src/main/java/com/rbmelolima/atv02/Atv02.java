/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.rbmelolima.atv02;

/**
 *
 * @author roger.de.melo.lima
 */
public class Atv02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Atividade 02");
        Lamp myLamp = new Lamp();

        myLamp.toggle(); //on
        myLamp.toggle(); //off   
        myLamp.toggle(); //on
        myLamp.toggle(); //off
        myLamp.toggle(); //on

        //Expect: true
        System.out.println("Está ligada?: " + myLamp.status());
        //Expect: 3
        System.out.println("Quantidade de vezes que foi ligada: " + myLamp.quantityUsage());

    }

}
