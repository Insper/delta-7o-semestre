# Exercícios diversos

No dia de hoje não trabalharemos com nenhum conceito em específico, mas usaremos 

## Tarefa 1

Já vimos que em *C* os tipos inteiros tem tamanhos fixos e que muitas vezes precisamos ficar atentos com os limites dos tipos usados. Diversas linguagens oferecem um tipo adicionar chamado `BigInt` que faz contas com precisão arbitrária. Para isso eles guardam os dígitos (em base 10) de um número em um vetor e implementam manualmente operações aritméticas. 

!!! example
    Sua tarefa será implementar a soma de dois `BigInt`. Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall testes.c -o testes -lsystemd -lm`

## Tarefa 2 

No diagnóstico da delta fizemos um exercício de identificar se os parênteses de uma string estão equilibrados. Vamos agora dar um passo além: queremos equilibrar a quantidade de "()", "[]" e "{}" em uma string. Ou seja, a string "([)]" não é válida pois o primeiro "(" é fechado antes do fechamento do "[" que vem em seguida. Para a string estar equilibrada é necessário que todos os três tipos de parênteses sejam fechados na ordem em que foram abertos. 

!!! example
    Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes -lsystemd -lm`

## Tarefa 3

Dadas $N$ tarefas, dizemos que uma tarefa `i` depende de uma tarefa `j` se precisamos executar `i` antes de `j`. Essa relação de dependência pode ser codificada em uma matriz, em que o elemento `i,j` vale `1` se `i` depende de `j` e `0` caso contrário.

!!! question 
    A matriz acima é simétrica? Ou seja, o valor de `i,j` é sempre igual ao valor de `j,i`? 

Desejamos identificar situações de *dependência circular*. Isto ocorre quando uma tarefa `i` depende de outras tarefas que eventualmente dependem de `i` também. 

!!! example
    Abra o arquivo *solucao.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes -lsystemd -lm`

Veja os exemplos abaixo. Para facilitar sua compreensão, desenhe as relações de dependência representadas pelas matrizes mostradas.

### Exemplo 1

```
0 0 0 0
1 0 0 0 
1 0 0 0 
0 1 0 0
```

Neste caso não há dependência circular.

### Exemplo 2

```
0 0 1 0
0 0 0 1
0 1 0 0
1 0 0 0
```

Neste caso há dependência circular.

### Exemplo 3

```
0 0 0 0
0 0 0 1
1 1 0 0
1 0 0 0
```

Neste caso não há dependência circular.

### Exemplo 4

```
0 1 0 1 0 0 
0 0 0 0 1 0
0 0 0 0 0 0
0 0 1 0 0 0
0 0 0 0 0 1
1 0 0 0 0 0
```

Neste caso há dependência circular: `0 -> 1 -> 4 -> 5 -> 0`.

### Exemplo 5

```
0 1
1 0
```

Neste caso há dependência circular. 