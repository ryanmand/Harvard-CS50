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
#include <math.h>
#include <stdio.h>
#include <string.h>

int contar_letras(string texto);
int contar_palavras(string texto);
int contar_frases(string texto);

int main(void)
{

    string texto = get_string("Texto: ");

    int letras = contar_letras(texto);
    int palavras = contar_palavras(texto);
    int frases = contar_frases(texto);

    float L = ((float) letras / (float) palavras) * 100;
    float S = ((float) frases / (float) palavras) * 100;

    float indice = 0.0588 * L - 0.296 * S - 15.8;
    int grau = round(indice);

    if (grau >= 16)
    {
        printf("Grau 16+\n");
    }
    else if (grau < 1)
    {
        printf("Abaixo do Grau 1\n");
    }
    else
    {
        printf("Grau %i\n", grau);
    }
}

int contar_letras(string texto)
{
    int count = 0;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isalpha(texto[i]))
        {
            count++;
        }
    }
    return count;
}

int contar_palavras(string texto)
{
    int count = 1;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

int contar_frases(string texto)
{
    int count = 0;
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            count++;
        }
    }
    return count;
}
