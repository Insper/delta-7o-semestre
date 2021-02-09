# Fórmulas matemáticas

A implementação de programas a partir de fórmulas matemáticas é frequente em SuperComputação. Neste primeiro dia iremos melhorar nossas habilidades neste tipo de tarefa. 

## Tarefa 1

O cálculo de funções trigonométricas como *seno* e *cosseno* é normalmente feito com as funções do cabeçalho `math.h`. Nesta tarefa iremos fazer uma implementação alternativa para o *cosseno*, que pode ser calculado pela fórmula abaixo. 

$$
\cos x = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} - \frac{x^6}{6!} + \dots
$$

Seu trabalho será reimplementar esta função. Note que a série acima é infinita, então você deverá parar de calcular a série acima quando o módulo do termo atual for menor que $0,001$.

!!! example
    Abra o arquivo *solucao-t1.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t1 -lsystemd -lm`


## Tarefa 2

**(Adaptado de questão de prova)** Ao analisar séries temporais de preços de ativos ao longo do tempo uma transformação frequentemente aplicada é o log da razão entre preços de momentos consecutivos. Ou seja, produzimos uma nova série seguindo a fórmula abaixo:

$$
y_0 = x_0 \\
y_i = \log \frac{x_i}{x_{i-1}}
$$

* `y` é a série de saída
* `x` é a série de entrada

!!! example
    Abra o arquivo *solucao-t2.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t2 -lsystemd`

## Tarefa 3
**(Adaptado de questão de prova)** A média móvel dos últimos 7 dias está sendo muito usada na análise de casos de COVID-19 para determinar se uma região tem tendência de subida ou descida. Vamos fazer implementações simples desse cálculo em CPU e GPU. Você deverá levar em conta o seguinte:

1. se não houve coleta de dados em um dia, ele deverá ser considerado como tendo 0 casos
2. as séries divulgadas se iniciam no primeiro dia em que foram registrados casos de COVID.


Dada uma série de números $x$, a média móvel dos últimos $D$ dias é uma nova série $y$ que segue a fórmula abaixo. 

$$
y_i = \frac{1}{D} \sum_{k=0}^D x_{i - k}
$$

Note que tanto $x$ quanto $y$ tem a mesma quantidade de dias $N$, mas cada elemento de $y$ é uma média dos $D$ elementos anteriores de $x$.

!!! example
    Abra o arquivo *solucao-t3.c* e modifique-o para passar nos testes. Para isto basta compilar o programa com as instruções abaixo e executá-lo.

    `gcc -Og -Wall solucao.c testes.c -o testes-t3 -lsystemd`
