# RUSH00 - jvitor-n, jcaetano e vde-sous 

`ctrl + shift + v` para visualizar melhor o documento.

## Explicação do tema

**Pasta de entrega:** `ex00/`

**Arquivos para entragar:** `main.c`, `ft_putchar.c`, `rush00.c`

**Funções autorizadas:** `write()`

- Exemplo de `main.c`:
```c
	int	main()
	{
		rush(5,5);
		return(0);
	}
```

- Escrever a função `rush` tendo como parâmetro duas variáveis de tipo inteiro nomeadas respectivamente `x` e `y`;

- A função `rush` deverá exibir na tela um retângulo de `x` caracteres de largura, e `y` de altura;

- A função `main()` será modificada na defesa para poder mudar os parâmetro da chamada à função rush. Por exemplo, o tipo de coisa que será testada:

```c
	int main()
	{
		rush(132, 42);
		return(0);
	}
```
# DOCUMENTAÇÃO DO DESENVOLVIMENTO

[Repo explicando regras da Norminette](https://github.com/eduardomosko/norminette-tutorial)

```c
	(i == 1 || i == y) 
	&& 
	(j == 1 || j == x)

	(i == 1 && j == 1)
	(i == 1 && j == x)
	(i == y && j == 1)
	(i == y && j == x)
```

# Tipos de condições

Combinação possíveis para cantos/vertices:

```
i == 1 && j == 1
i == y && j == 1
i == 1 && j == y
i == y && j == x
```

### Criando um alias para executar os arquivos.

```bash

#basta atribuir o comando desejado para dentro da váriavel
$> alias rush0="clear; gcc main.c ft_putchar.c rush00.c; ./a.out"
$> alias n0="clear; norminette rush00.c"

#depois basta executá-la chamando a variável
$> rush0
$> n0
```