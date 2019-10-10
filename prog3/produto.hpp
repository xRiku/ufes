#ifndef _PRODUTO_HPP
#define _PRODUTO_HPP

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
        Produto(int codigo, string nome, string descricao, int quantidadeEstoque, float precoBase);
            qtdProdutos++;
            this->codigo = codigo;
            this->nome = nome;
            this->descricao = descricao;
            this->quantidadeEstoque = quantidadeEstoque;
            this->precoBase = precoBase;
        }
        int getCodigo();
        void setCodigo(int codigo);
        string getNome();
        void setNome(string nome);
        string getDescricao();
        void setDescricao(string descricao);
        int getQuantidadeEstoque();
        void setQuantidadeEstoque(int quantidadeEstoque);
        float getPrecoBase();
        void setPrecoBase(float precoBase);
        vector<ItemDePedido*> getItem();
        void setItem(vector<ItemDePedido*> item);
};

#endif