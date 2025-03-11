programa {
  funcao inicio() {

    real num
              //declaração de uma variável de controle(x), ;(separa a declaraçao, conndição e a alteração a ser feita a cada alteração na variavel que nesse caso é "x"), condiçao a ser testada(no caso é se x<=10), alteraçao na variavel de controle a ser feita a cada iteração(que no caso é "++")
    para(inteiro x=1; x<=10; x++)
    {
      num=x*2
      escreva ("passo", x, "= ", num, "\n")
    }
  }
}
