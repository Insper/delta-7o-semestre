# Iteração em vetores

Neste segundo dia iremos trabalhar com problemas com iteração em vetores. 


# Tarefa 1

Raul gosta muito de Kare e conhece uma série de mercados orientais que vendem este prato. Porém, cada mercado vende porções de tamanhos diferentes e o Raul, pão duro que é, quer saber qual é o local que vende o Kare mais barato. 

Seu trabalho será criar uma função que encontra a oferta mais barata dado um vetor de produtos contendo um campo preço e um campo peso.

!!! example
    Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t1 -lsystemd -lm`


# Tarefa 2

Dada uma sequência de números, encontre o par que possui a maior soma. 

!!! example
    Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t2 -lsystemd -lm`

Com os testes passando, reflita sobre a questão abaixo. 

!!! question
    Qual a complexidade computacional da sua solução? É possível fazer melhor?

# Tarefa 3

Dada uma sequência de números inteiros, mostrar no terminal a contagem de quantas vezes cada um aparece. Veja o exemplo abaixo. 

**Entrada**
```
1 3 0 1 5 7 0 1 3
```

**Saída**
```
1 aparece 3 vezes
3 aparece 2 vezes
0 aparece 2 vezes
5 aparece 1 vez
7 aparece 1 vez
```

!!! example
    Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t3 -lsystemd -lm`

