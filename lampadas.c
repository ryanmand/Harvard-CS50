/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Ryan Mandelli Gomes
 *    Matrícula: 202416711
 *    Turma: cc1mb
 *    Email: ryanmandelli2610@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void imprimir_lampada(int bit);

int main(void)
{

    string mensagem = get_string("Insira a mensagem: ");

    for (int i = 0, n = strlen(mensagem); i < n; i++)
    {
        int decimal = (int) mensagem[i];

        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (decimal >> j) & 1;
            imprimir_lampada(bit);
        }
        printf("\n");
    }
}

void imprimir_lampada(int bit)
{
    if (bit == 0)
    {

        printf("\U000026AB");
    }
    else if (bit == 1)
    {

        printf("\U0001F7E1");
    }
}
