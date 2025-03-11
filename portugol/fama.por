programa {
  funcao inicio() {

//definindo que x, y e z sao numeros inteiros.

    inteiro x, y, z

//escrevendo o valor de x, y, z.

    escreva("valor de x: ")

    leia(x)

    escreva("valor de y: ")

    leia(y)

    escreva("valor de z: ")

    leia(z)
//usando "se" e "e" para comparar os números.
    se(x>=y e x>=z)
    {//escrevendo x, se for o maior.
      escreva("x=", x, "\n")
    }
    se(y>=x e y>=z)
    {//escrevendo y, se for o maior.
      escreva("y=", y, "\n")
    }
    se(z>=y e z>=x)
    {//escrevendo z, se for o maior.
      escreva("z=", z)
    }
    
    
  }
}
