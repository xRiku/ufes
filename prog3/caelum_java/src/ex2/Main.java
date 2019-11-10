/* Programa 2 
 * Classe: Porta 
 * Atributos: aberta, cor, dimensaoX, dimensaoY, dimensaoZ
 * Métodos: void abre()
 * void fecha()
 * void pinta(String s)
 * boolean estaAberta().
 * Crie uma porta, abra e feche a mesma, pinte-a de diversas cores, altere suas dimensões e use o
 * método estaAberta para verificar se ela está aberta. */

class Main{
    public static void main(String[] args){
        Porta porta = new Porta();
        porta.abre();
        porta.fecha();
        porta.pinta("Preto");
        porta.pinta("Madeira");
        porta.pinta("Vermelha");
        porta.mudaDimensao(3.5, 4.5, 5.75);
        porta.info();
    }
}