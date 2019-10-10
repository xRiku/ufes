#include "produto.hpp"

int Produto::qtdProdutos = 0;

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
