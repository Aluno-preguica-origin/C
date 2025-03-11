programa {
    funcao inicio() {
        inteiro soma = 0 //o += salva o valor a acrescentar da variavel?
        para(inteiro x = 0; x <= 100; x += 2) {
            soma = soma + x
        }
        escreva("A soma dos números pares de 0 a 100 é: ", soma)
    }
}