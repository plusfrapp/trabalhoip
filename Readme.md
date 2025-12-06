Alunos: rafael josé, lucas siqueira, henrique braz, cesar oliveira, gabriel vidal, matheus simão, luis victor

■ Calculadora Multifuncional em C
Este projeto implementa uma calculadora completa em C, organizada no estilo de documentação
GitHub, contendo um total de 28 operações matemáticas, lógicas e bitwise. O código segue boas
práticas de modularização, uso de ponteiros e verificações de erro.
■ Funcionalidades
Operações Aritméticas:
• Soma
• Subtração
• Multiplicação
• Divisão
• Resto (%)
• Potência
• Fatorial
• Média
• Somatório de intervalo
• Produtório de intervalo
• Valor absoluto
Operações de Comparação:
• Igualdade
• Diferente
• Maior que
• Menor que
• Maior ou igual
• Menor ou igual
• Mínimo
• Máximo
Operações Bitwise:
• AND (&)
• OR (|)
• XOR (^)
• Shift direita
• Shift esquerda
Operações Lógicas:
• AND lógico
• NAND
• OR lógico
• NOR lógico
■■ Como Funciona
O programa apresenta um menu com 28 operações.
O usuário escolhe a operação desejada digitando seu número.
Os valores necessários são solicitados.
A função correspondente é executada.
O resultado é exibido na tela.
O menu é repetido até o usuário digitar 0 para sair.
■ Exemplo de Execução
Entrada:
Escolha da operação: 1 (Soma)
Valores: 8 e 4
Saída: 12
■ Compilação e Execução
Compilar:
gcc -o calculadora main.c
Executar:
./calculadora
■ Observações Importantes
• Usa ponteiros para retorno das funções.
• Trata divisão por zero.
• Somatório e produtório funcionam com intervalos invertidos.
• Produtório retorna 0 se o intervalo incluir o valor zero.
• Operações lógicas aceitam somente 0 ou 1.
