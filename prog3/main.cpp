#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

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
        vector<Pedido> pedido;
    public:
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
        vector<Pedido> getPedido(){
            return this->pedido;
        }
        void setPedido(vector<Pedido> pedido){
            this->pedido = pedido;
        }
};

class Pedido{
    Pedido(){
        qtdPedidos++;
    }
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        Funcionario funcionario;
        Cliente cliente;
        vector<ItemDePedido> item;
    public:
        static int qtdPedidos;
        float getValorTotal(){
            return this->valorTotal;
        }
        void setValorTotal(float valorTotal){
            this->valorTotal = valorTotal;
        }
        tm getData(){
            return this->data;
        }
        void setData(tm data){
            this->data = data;
        }
        string getStatus(){
            return this->status;
        }
        void setStatus(string status){
            this->status = status;
        }
        string getFormaPgto(){
            return this->formaPgto;
        }
        void setFormaPgto(string formaPgto){
            this->formaPgto = formaPgto;
        }
        Funcionario getFuncionario(){
            return this->funcionario;
        }
        void setFuncionario(Funcionario funcionario){
            this->funcionario = funcionario;
        }
        Cliente getCliente(){
            return this->cliente;
        }
        void setCliente(Cliente cliente){
            this->cliente = cliente;
        }
        vector<ItemDePedido> getItem(){
            return this->item;
        }
        void setItem(vector<ItemDePedido> item){
            this->item = item;
        }
};

class Cliente{
    private:
        string nome;
        tm data;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;   
        vector<Cliente> cliente;
    public:
        string getNome(){
            return this->nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        tm getData(){
            return this->Data;
        }
        void setData(tm Data){
            this->Data = Data;
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
        vector<Cliente> getCliente(){
            return this->cliente;
        }
        void setCliente(vector<Cliente> cliente){
            this->cliente = cliente;
        }

};

class ItemDePedido{
    private:
        int quantidade;
        float precoVenda;
        Pedido pedido;
        Produto produto;
    public:
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
        Pedido getPedido(){
            return this->pedido;
        }
        void setPedido(Pedido pedido){
            this->pedido = pedido;
        }
        Produto getProduto(){
            return this->produto;
        }
        void setProduto(Produto produto){
            this->produto = produto;
        }
};

class Produto{
    Produto(){
        qtdProdutos++;
    }
    private:
        int codigo;
        string nome;
        string descricao;
        int quantidadeEstoque;
        float precoBase;
        vector<ItemDePedido> item;
    public:
        static int qtdProdutos;
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
        vector<ItemDePedido> getItem(){
            return this->item;
        }
        void setItem(vector<ItemDePedido> item){
            this->item = item;
        }
};

int main(){
    
}