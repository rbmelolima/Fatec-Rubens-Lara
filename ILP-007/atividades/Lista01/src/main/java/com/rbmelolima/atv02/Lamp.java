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
public class Lamp {

    private boolean isOn;
    private int usage;

    public Lamp() {
        this.isOn = false;
        this.usage = 0;
    }

    public boolean status() {
        return isOn;
    }
    
    public int quantityUsage() {
        return usage;
    }
    
    public void toggle() {
        this.isOn = !this.isOn;
        if(isOn) usage++;
    }
}
