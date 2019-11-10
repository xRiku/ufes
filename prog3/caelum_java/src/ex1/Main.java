/* Programa 1
 * Classe: Pessoa
 * Atributos: nome, idade.
 * Método: void fazAniversario()
 * Crie uma pessoa, coloque seu nome e idade iniciais,
 * faça alguns aniversários (aumentando a idade) e imprima seu nome e sua idade. 
*/

class Main {
    public static void main(String[] args){
        Pessoa Alberto = new Pessoa();
        System.out.println(Alberto.idade);
        Alberto.nome = "Alberto";
        Alberto.idade = 50;
        System.out.println("Idade do " + Alberto.nome+ " " + Alberto.idade);
        Alberto.fazAniversario();
        System.out.println("Idade do " + Alberto.nome+ " " + Alberto.idade);
        Alberto.fazAniversario();
        System.out.println("Idade do " + Alberto.nome+ " " + Alberto.idade);
        Alberto.fazAniversario();
        System.out.println("Idade do " + Alberto.nome+ " " + Alberto.idade);
        Alberto.fazAniversario();
        System.out.println("Idade do " + Alberto.nome+ " " + Alberto.idade);
    }
}