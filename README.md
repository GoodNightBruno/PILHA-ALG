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
Implementar um interpretador para uma máquina virtual baseada em pilha, agora com suporte a variáveis usando lista encadeada.

---

## Comandos
- `push <valor|variável>` — Empilha um número ou o valor de uma variável.  
- `pop <variável>` — Desempilha o topo da pilha e armazena na variável.  
- `add`, `sub`, `mul`, `div` — Operações aritméticas entre os dois topos da pilha.  
- `print` — Desempilha e imprime o valor do topo da pilha.  
- `exit` — Encerra o programa.

---

## Como compilar
```bash
gcc main.c interpret.c stack.c lista.c -o maquina-pilha
```

---

## Como executar
```bash
./maquina-pilha
```

Exemplo de uso:
```
> push 10
> push 5
> add
> print
```

---

## Estrutura do projeto
```
/maquina-pilha-etapa2
├── main.c
├── interpret.c
├── interpret.h
├── stack.c
├── stack.h
├── lista.c
├── lista.h
├── README.md
```
