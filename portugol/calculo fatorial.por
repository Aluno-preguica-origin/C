programa 
{
  funcao inicio() 
  { //fat(fatoração), n(número a ser fatorado)
    inteiro f, numero

    escreva("um valor para fatorar: ")
    leia(numero)
    //a variavel fat é multiplicada por cada interação pelo antecessor do número escolhido.
    //o valor de f e n muda a cada interaçao
                                            //  1int f=1*n=4f=4 2int f=4*n=3f=12 3int f=12*n=2f=24 4int f=24*n=1f=24/ fim
    para(inteiro f = 1 ; numero > 1 ; numero = numero - 1 )
    {
      f = f * numero
    }
    escreva(f)
  }
}
