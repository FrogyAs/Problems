#include <stdio.h>
#include <stdlib.h>

#define quantidade_de_produtos 5

int soma_valores_dos_produtos(int *valores_dos_produtos);

int tem_dinheiro_suficiente(int meu_dinheiro, int soma_da_compra);

int main()
{
    int meu_dinheiro = 100;
    int valores_dos_produtos[quantidade_de_produtos] = {10, 7, 30, 22, 100};

    int soma_da_compra;

    soma_da_compra = soma_valores_dos_produtos(valores_dos_produtos);

    if (tem_dinheiro_suficiente(meu_dinheiro, soma_da_compra))
    {
        printf("\nTenho dinheiro suficiente");
    }
    else
    {
        printf("\nNao tenho dinheiro suficiente");
    }

    return EXIT_SUCCESS;
}

int soma_valores_dos_produtos(int *valores_dos_produtos)
{
    int soma = 0;

    for (int i = 0; i < quantidade_de_produtos; i++)
    {
        int valor_do_produto_no_indice = valores_dos_produtos[i];

        soma += valor_do_produto_no_indice;
    }

    return soma;
}

int tem_dinheiro_suficiente(int meu_dinheiro, int soma_da_compra)
{
    if (meu_dinheiro >= soma_da_compra)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}