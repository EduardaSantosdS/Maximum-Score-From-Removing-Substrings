__Eduarda dos Santos da Silva__

O problema do exercício é encontrar a pontuação máxima possível ao remover substrings "ab" e "ba" de uma string dada. Existem duas operações possíveis:
__Remover "ab" e ganhar x pontos.__
__Remover "ba" e ganhar y pontos.__
O objetivo é aplicar essas operações qualquer número de vezes e retornar a pontuação máxima possível.

As situações testadas foram as seguintes:
__Entrada 1:__ s = "cdbcbbaaabab", x = 4, y = 5
__Saída 1:__ 19
__Exaplicação:__ 
__Remover "ba"__
Primeiro "ba": s = "cdbcbaabab", pontos = 5
Segundo "ba": s = "cdbcabab", pontos = 5 + 5 = 10
Terceiro "ba": s = "cdcabab", pontos = 10 + 5 = 15

__Remover "ab"__
Primeiro "ab": s = "cdcabab", pontos = 15 + 4 = 19
Então, a string final seria "cdcab" e a pontuação total é 19.

__Entrada 2:__ s = "aabbaaxybbaabb", x = 5, y = 4
__Saída 2:__ 20
__Exaplicação:__ 
__Remover "ab"__
Primeiro "ab": s = "abaaxybbaabb", pontos = 5
Segundo "ab": s = "aaxybbaabb", pontos = 5 + 5 = 10
Terceiro "ab": s = "aaxybbab", pontos = 10 + 5 = 15
Quarto "ab": s = "aaxybb", pontos = 15 + 5 = 20
Desta maneira, a string final seria "aaxybb" e a pontuação 20, sem ocorrências de "ba".

__Entrada 3:__ s = "bbaaxybbabaabba", x = 5, y = 4
__Saída 3:__ 27
__Exaplicação:__ 
__Remover "ab"__ 
Primeiro "ab": s = "bbaaxybbaabba", pontos = 5
Segundo "ab": s = "bbaaxybbaba", pontos = 5 + 5 = 10
Terceiro "ab": s = "bbaaxybba", pontos = 10 + 5 = 15

__Remover "ba"__
Primeiro "ba": s = "baxybba", pontos = 4
Segundo "ba": s = "xybba", pontos = 4 + 4 = 8
Terceiro "ba": s = "xyb", pontos = 8 + 4 = 12
Calculo de pontos acumulados: 15 + 12 = 27
Então, a string final seria "xyb" e a pontuação 27.



