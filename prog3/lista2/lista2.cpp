#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "pedido.hpp"
#include "produto.hpp"

using namespace std;

class Pedido;
class ItemDePedido;
class Cliente;

class Funcionario{
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        string matricula;
        vector<Pedido*> pedido;
    public:
        Funcionario(string nome, tm dataNascimento, string RG, string CPF,string endereco, string telefone, string email, string matricula){
            this->dataNascimento = dataNascimento;
            this->RG = RG;
            this->CPF = CPF;
            this->endereco = endereco;
            this->telefone = telefone;
            this->email = email;
            this->matricula = matricula;
        }
        string getNome(){
            return this->nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        tm getDataNascimento(){
            return this->dataNascimento;
        }
        void setDataNascimento(tm dataNascimento){
            this->dataNascimento = dataNascimento;
        }
        string getRG(){
            return this->RG;
        }
        void setRG(string RG){
            this->RG = RG;
        }
        string getCPF(){
            return this->CPF;
        }
        void setCPF(string CPF){
            this->CPF = CPF;
        }
        string getEndereco(){
            return this->endereco;
        }
        void setEndereco(string endereco){
            this->endereco = endereco;
        }
        string getTelefone(){
            return this->telefone;
        }
        void setTelefone(string telefone){
            this->telefone = telefone;
        }
        string getEmail(){
            return this->email;
        }
        void setEmail(string email){
            this->email = email;
        }
        string getMatricula(){
            return this->matricula;
        }
        void setMatricula(string matricula){
            this->matricula = matricula;
        }
        vector<Pedido*> getPedido(){
            return this->pedido;
        }
        void setPedido(vector<Pedido*> pedido){
            this->pedido = pedido;
        }
};

class Cliente{
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;   
        vector<Pedido*> pedido;
    public:
        Cliente(string nome, tm dataNascimento, string RG, string CPF, string endereco, string telefone, string email){
            this->nome = nome;
            this->dataNascimento = dataNascimento;
            this->RG = RG;
            this->CPF = CPF;
            this->endereco = endereco;
            this->telefone = telefone;
            this->email = email;   
        }
        string getNome(){
            return this->nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        tm getData(){
            return this->dataNascimento;
        }
        void setData(tm dataNascimento){
            this->dataNascimento = dataNascimento;
        }
        string getRG(){
            return this->RG;
        }
        void setRG(string RG){
            this->RG = RG;
        }
        string getCPF(){
            return this->CPF;
        }
        void setCPF(string CPF){
            this->CPF = CPF;
        }
        string getEndereco(){
            return this->endereco;
        }
        void setEndereco(string endereco){
            this->endereco = endereco;
        }
        string getTelefone(){
            return this->telefone;
        }
        void setTelefone(string telefone){
            this->telefone = telefone;
        }
        string getEmail(){
            return this->email;
        }
        void setEmail(string email){
            this->email = email;
        }
        vector<Pedido*> getPedido(){
            return this->pedido;
        }
        void setPedido(vector<Pedido*> pedido){
            this->pedido = pedido;
        }
};

class Produto{
    private:
        int codigo;
        string nome;
        string descricao;
        int quantidadeEstoque;
        float precoBase;
        vector<ItemDePedido*> item;
        
    public:
        static int qtdProdutos;
        Produto(int codigo, string nome, string descricao, int quantidadeEstoque, float precoBase){
            qtdProdutos++;
            this->codigo = codigo;
            this->nome = nome;
            this->descricao = descricao;
            this->quantidadeEstoque = quantidadeEstoque;
            this->precoBase = precoBase;
        }
        int getCodigo(){
            return this->codigo;
        }
        void setCodigo(int codigo){
            this->codigo = codigo;
        }
        string getNome(){
            return this->nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        string getDescricao(){
            return this->descricao;
        }
        void setDescricao(string descricao){
            this->descricao = descricao;
        }
        int getQuantidadeEstoque(){
            return this->quantidadeEstoque;
        }
        void setQuantidadeEstoque(int quantidadeEstoque){
            this->quantidadeEstoque = quantidadeEstoque;
        }
        float getPrecoBase(){
            return this->precoBase;
        }
        void setPrecoBase(float precoBase){
            this->precoBase = precoBase;
        }
        vector<ItemDePedido*> getItem(){
            return this->item;
        }
        void setItem(vector<ItemDePedido*> item){
            this->item = item;
        }
};

class ItemDePedido{
    private:
        int quantidade;
        float precoVenda;
        Pedido *pedido;
        Produto *produto;
    public:
        ItemDePedido(int quantidade, float precoVenda, Pedido* pedido, Produto* produto){
            this->quantidade = quantidade;
            this->precoVenda = precoVenda;
            this->pedido = pedido;
            this->produto = produto;
        }
        int getQuantidade(){
            return this->quantidade;
        }
        void setQuantidade(int quantidade){
            this->quantidade = quantidade;
        }
        float getPrecoVenda(){
            return this->precoVenda;
        }
        void setPrecoVenda(float precoVenda){
            this->precoVenda = precoVenda;
        }
        Pedido* getPedido(){
            return this->pedido;
        }
        void setPedido(Pedido* pedido){
            this->pedido = pedido;
        }
        Produto* getProduto(){
            return this->produto;
        }
        void setProduto(Produto* produto){
            this->produto = produto;
        }
};

int main(){
    tm dataf1, dataf2, dataf3;
    dataf1.tm_mday = 22;
    dataf1.tm_mon = 0;
    dataf1.tm_year = 1999-1900;
    dataf2.tm_mday = 27;
    dataf2.tm_mon = 3;
    dataf2.tm_year = 2000-1900;
    dataf3.tm_mday = 30;
    dataf3.tm_mon = 4;
    dataf3.tm_year = 1990-1900;
    Funcionario* f1 = new Funcionario("Philipe", dataf1, "3871545", "29050227", "Rua Humberto Martins de Paula", "27999757749", "lipe.aguiar.marques@gmail.com", "2018103819");
    Funcionario* f2 = new Funcionario("Jeffin", dataf1, "125545", "212050227", "Rua Nascimento Filho", "27998627749", "jeffinreidelas@gmail.com", "2018103820");
    Funcionario* f3 = new Funcionario("Weberton", dataf1, "853545", "128050153", "Rua Royal Candy", "279986274569", "foderosochef@gmail.com", "2018103821");
    
}