/* Programa 3 
 * Classe: Casa
 * Atributos: cor, porta1, porta2, porta3 
 * Método: void pinta(String s), int quantasPortasEstaoAbertas() 
 * Crie uma casa e pinte-a. Crie três portas e coloque-as na casa; 
 * Abra e feche as mesmas como desejar. 
 * Utilize o método quantasPortasEstaoAbertas para imprimir o número de portas abertas.
 */


class Main{
    public static void main(String[] args){
        int quantidade;
        Casa casa = new Casa();
        casa.porta1 = new Porta();
        casa.porta2 = new Porta();
        casa.porta3 = new Porta();
        System.out.println(casa.cor);
        casa.pinta("Branca");
        System.out.println(casa.cor);
        quantidade = casa.quantasPortasEstaoAbertas();
        System.out.println(casa.quantasPortasEstaoAbertas() + 20);
        System.out.printf("Quantidade: %d\n", quantidade);
        casa.porta1.abre();
        casa.porta3.abre();
        quantidade = casa.quantasPortasEstaoAbertas();
        System.out.printf("Quantidade: %d\n", quantidade);
    }
}
