#ifndef _PEDIDO_HPP
#define _PEDIDO_HPP

class Pedido{
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        Funcionario *funcionario;
        Cliente* cliente;
        vector<ItemDePedido*> item;
    public:
        Pedido(float valorTotal, tm data, string status, Funcionario* funcionario, Cliente* cliente, vector<ItemDePedido*> item);
        void print();
        static int qtdPedidos;
        float getValorTotal();
        void setValorTotal(float valorTotal);
        tm getData();
        void setData(tm data);
        string getStatus();
        void setStatus(string status);
        string getFormaPgto();
        void setFormaPgto(string formaPgto);
        Funcionario* getFuncionario();
        void setFuncionario(Funcionario* funcionario);
        Cliente* getCliente();
        void setCliente(Cliente* cliente);
        vector<ItemDePedido*> getItem();
        void setItem(vector<ItemDePedido*> item);
};

#endif