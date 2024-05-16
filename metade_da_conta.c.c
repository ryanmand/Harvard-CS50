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

int main()
{

    float valor_comida, porcentagem_impostos, porcentagem_gorjeta;

    valor_comida = get_float("Valor da comida: ");
    porcentagem_impostos = get_float("Porcentagem de impostos: ");
    porcentagem_gorjeta = get_float("Porcentagem da gorjeta: ");

    float valor_total_com_impostos = valor_comida * (1 + (porcentagem_impostos / 100));

    float valor_gorjeta = valor_total_com_impostos * (porcentagem_gorjeta / 100);

    float valor_final = valor_total_com_impostos + valor_gorjeta;

    float cada_um_pagara = valor_final / 2;

    printf("Cada um pagará R$ %.2f!\n", cada_um_pagara);

    return 0;
}
