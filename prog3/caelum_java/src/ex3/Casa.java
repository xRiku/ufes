class Casa{
    String cor = "Sem cor";
    Porta porta1;
    Porta porta2;
    Porta porta3;
    
    void pinta(String s){
        this.cor = s;
    }
    int quantasPortasEstaoAbertas(){
        int i = 0;
        if (porta1.estaAberta()){
            i++;
        }
        if (porta2.estaAberta()){
            i++;
        }
        if (porta3.estaAberta()){
            i++;
        }
        return i;
    }
}