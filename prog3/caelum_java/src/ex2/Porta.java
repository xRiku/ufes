class Porta{
    boolean aberta;
    String cor;
    double dimensaoX = 0;
    double dimensaoY = 0;
    double dimensaoZ = 0;
    void abre(){
        this.aberta = true;
    }
    void fecha(){
        this.aberta = false;
    }
    boolean estaAberta(){
        return this.aberta;
    }
    void pinta(String s){
        this.cor = s;
    }
    void mudaDimensao(double x, double y, double z){
        this.dimensaoX = x;
        this.dimensaoY = y;
        this.dimensaoZ = z;
    }
    void info(){
        System.out.printf("Estado da porta: %s\n", (estaAberta() ? "Aberta" : "Fechada"));
        System.out.printf("Cor da porta: %s\n", this.cor);
        System.out.printf("Dimensoes: %.2f %.2f %.2f\n", this.dimensaoX, this.dimensaoY,
                                this.dimensaoZ);
    }

}