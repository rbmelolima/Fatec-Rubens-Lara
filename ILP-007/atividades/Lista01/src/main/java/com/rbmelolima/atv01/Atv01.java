package com.rbmelolima.atv01;
/**
 * @author roger.de.melo.lima
 */
public class Atv01 {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Atividade 01");
        People people1 = new People("Roger Bernardo", Sex.M, 19, false);
        People people2 = new People("Gabriela", Sex.F, 20, true);
        People people3 = new People("Matheus", Sex.M, 3, false);
        
        Barbecue barbecue = new Barbecue();
        barbecue.checkConsumption(people3);
        barbecue.checkConsumption(people2);
        barbecue.checkConsumption(people1);
        
        System.out.println("Consumo de carne no total: " + barbecue.getQuantityMeat() + "kg");
    }
    
}
