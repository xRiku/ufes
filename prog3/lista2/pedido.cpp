#include "pedido.hpp"

int Pedido::qtdPedidos = 0;

Pedido(float valorTotal, tm data, string status, Funcionario* funcionario, Cliente* cliente, vector<ItemDePedido*> item){
    qtdPedidos++;
    this->valorTotal = valorTotal;
    this->data = data;
    this->status = status;
    this->formaPgto = formaPgto;
    this->funcionario = funcionario;
    this->cliente = cliente;
    this->item = item;
}

void print(){
    cout << "Valor Total:\t" << this->valorTotal;
    cout << "Data:\t" << this->data.tm_mday << this->data.tm_mon << this->data.tm_year;
    cout << "Status:\t" << this->status;
    cout << "Funcionario:\t" << this->funcionario->Funcionario::getNome();
    cout << "Cliente:\t" << this->cliente->Cliente::getNome();
}


// get, set

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
Funcionario* getFuncionario(){
    return this->funcionario;
}
void setFuncionario(Funcionario* funcionario){
    this->funcionario = funcionario;
}
Cliente* getCliente(){
    return this->cliente;
}
void setCliente(Cliente* cliente){
    this->cliente = cliente;
}
vector<ItemDePedido*> getItem(){
    return this->item;
}
void setItem(vector<ItemDePedido*> item){
    this->item = item;
}