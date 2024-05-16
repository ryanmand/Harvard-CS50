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
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool validar(string senha);

int main(void)
{
    string senha = get_string("Digite sua senha: ");
    if (validar(senha))
    {
        printf("%s\n", "Sua senha é válida!");
    }
    else
    {
        printf("%s", "A senha precisa de 1 letra maiúscula, ");
        printf("%s\n", "1 letra minúscula, 1 número e 1 símbolo!");
    }

    return 0;
}

bool validar(string senha)
{
    bool tem_maiuscula = false;
    bool tem_minuscula = false;
    bool tem_numero = false;
    bool tem_simbolo = false;

    for (int i = 0; senha[i] != '\0'; i++)
    {
        char c = senha[i];
        if (isupper(c))
        {
            tem_maiuscula = true;
        }
        else if (islower(c))
        {
            tem_minuscula = true;
        }
        else if (isdigit(c))
        {
            tem_numero = true;
        }
        else
        {
            tem_simbolo = true;
        }
    }

    return tem_maiuscula && tem_minuscula && tem_numero && tem_simbolo;
}
