# Máquina de Pilha - Etapa 2

## Autores
- Aleanse dos Santos Lima Rego  
- Barbara Fernanda Santos Carvalho  
- Bruno Leonardo Silva Carvalho Amorim  
- Bryan Windson Queiroz de Souza  
- Camila Santos Ferreira  
- Gabriella Cristina Ferreira de Abreu  
- Raimundo Nonato Silva Santos

---

## Objetivo
Implementar um interpretador para uma máquina virtual baseada em pilha, agora com suporte a variáveis. A estrutura usa uma lista encadeada para armazenar variáveis nomeadas que podem ser lidas e escritas durante a execução.

---

## Comandos
- `push <valor|variável>` — Empilha um número ou o valor da variável.
- `pop <variável>` — Desempilha o topo da pilha e armazena na variável.
- `add`, `sub`, `mul`, `div` — Operações aritméticas entre os dois topos da pilha.
- `print` — Desempilha e imprime o valor do topo da pilha.
- `exit` — Sai do programa.

---

## Como compilar
Use o seguinte comando no terminal:

```bash
gcc main.c interpret.c stack.c lista.c -o maquina-pilha
