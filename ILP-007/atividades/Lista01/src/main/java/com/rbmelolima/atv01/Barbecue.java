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
public class Barbecue {

    private double quantityMeat;

    public void Barbecue() {
        this.quantityMeat = 0;
    }

    public double getQuantityMeat() {
        return quantityMeat;
    }

    public double checkConsumption(People people) {
        if (people.isVegetarian) {
            return 0;
        } else {
            if (people.age <= 3) {
                return 0;
            }
            if (people.age >= 4 && people.age <= 12) {
                this.quantityMeat += 1;
                return 1;
            }
            if (people.age > 12) {
                this.quantityMeat += 2;
                return 2;
            }
        }
        return 0;
    }

}
