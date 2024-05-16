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
#include <stdio.h>
#include <string.h>

void realizar_substituicao();
void valor_arr_alfabeto(char pos, string chave);

int main(int argc, string argv[])
{
    if (argc == 2) // número de comandos no terminal
    {
        if (strlen(argv[1]) == 26)
        {
            for (int i = 0; i < strlen(argv[1]); i++)
            {

                if (!isalpha(argv[1][i])) // se contém não-alfabético
                {
                    printf("A chave deve conter 26 caracteres.\n");
                    return 1;
                }

                for (int j = i + 1; j < strlen(argv[1]);
                     j++) // verificando o próximo elemento de arg[i]
                {

                    if (toupper(argv[1][j]) == toupper(argv[1][i])) // verificando elemento repetido
                    {
                        printf("A chave não deve conter letras repetidas.\n");
                        return 1;
                    }
                }
            }

            realizar_substituicao(argv[1]);
        }
        else
        {
            printf("A chave deve conter 26 caracteres.\n");
            return 1;
        }
    }
    else
    {
        printf("Uso: ./substitution chave\n");
        return 1;
    }

    return 0;
}

void realizar_substituicao(string chave)
{
    string texto_simples = get_string("texto_puro: ");

    printf("texto_cifrado: ");

    for (int i = 0; i < strlen(texto_simples); i++)
    {
        if (isalpha(texto_simples[i])) //  texto_simples[i] é alfabético
        {
            char x = texto_simples[i];
            if (islower(texto_simples[i]))
            {
                valor_arr_alfabeto(tolower(x), chave); // passando texto_simples[i] em minúsculas
            }
            else
            {
                valor_arr_alfabeto(toupper(x), chave); // passando texto_simples[i] em MAIÚSCULAS
            }
        }
        else
        {
            printf("%c", texto_simples[i]);
        }
    }

    printf("\n");
}
void valor_arr_alfabeto(char pos, string chave)
{
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // array de alfabeto

    for (int i = 0; i < strlen(alfabeto); i++) // acessando cada elemento no array de alfabeto
    {
        if (islower(pos)) // texto_simples[i] é minúsculo
        {
            if (pos == tolower(alfabeto[i]))
            {
                printf("%c", tolower(chave[i]));
            }
        }
        else // para MAIÚSCULAS // texto_simples[i] é maiúsculo
        {
            if (pos == toupper(alfabeto[i]))
            {
                printf("%c", toupper(chave[i]));
            }
        }
    }
}
