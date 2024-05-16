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
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cipher(char letter, int key)
{
    if (isalpha(letter))
    {
        char base = islower(letter) ? 'a' : 'A';
        return (((letter - base) + key) % 26) + base;
    }
    return letter;
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Uso: ./cesar chave\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Uso: ./cesar chave\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    printf("Texto puro: ");
    char input[100];
    fgets(input, sizeof(input), stdin);

    printf("Texto cifrado: ");
    for (int i = 0; i < strlen(input); i++)
    {
        printf("%c", cipher(input[i], key));
    }
    printf("\n");

    return 0;
}
