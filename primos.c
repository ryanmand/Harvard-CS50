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
// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int menor, maior;

    do
    {
        menor = get_int("Menor número: ");
    }
    while (menor < 1 || menor >= 100);

    do
    {
        maior = get_int("Maior número: ");
    }
    while (maior <= menor || maior > 100);

    for (int num = menor; num <= maior; num++)
    {
        int primo = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo && num > 1)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
