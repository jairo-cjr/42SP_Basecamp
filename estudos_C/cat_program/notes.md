[37.3 - Implementing a Simple cat Program](https://www.youtube.com/watch?v=4BtddPF4Kng)

buffer = um espaço na memória que aloca um valor/conteúdo enquanto ele está sendo processado ou tranferido

```c
	//HEADER
	#include <unistd.h>
	#include <fcntl.h>

	#define	BUFFER_SIZE	80
	char	buffer[BUFFER_SIZE];
```

```c
	// 0 = standard input, 1 = standard output, 2 = standard error log
	read(
			entrada | 0,1,2, 
			arquivo buffer | deve ser um campo do stadin(0), 
			tamanho a ser lido | 80bytes é o máximo que o buffer conseque segurar
			)
```

```c
	write(
			saída | 0,1,2, 
			arquivo buffer a ser lído passado pelo read, 
			tamanho a ser lido | o máximo que o buffer conseque segurar
			)
```

Como não sabemos o tamanho exatos de bytes a serém passados (sendo 80 o máximo nesse caso), devemos verificar o tamanho do buffer antes de continuar. Criamos uma váriavel do tipo `ssize_t` (**signed size_t**, sendo capaz de representar o número `-1`, muitas vezes utilizado pelos sistemas para informar um **erro**) para representar o tamanho de um objeto na memória.

```c
	ssize_t bytes_read;
	bytes_read = read(0, buffer, 80);
	write(1, buffer, byter_read);
```

Rodando o programa...
```bash
	$ gcc -o a.out cat.c
	$ ./a.out
	  hello, world
	  hello, world
	$
```

Para deixá-lo mais semelhante ao comando `cat`, podemos usar usar o `reaad` em um loop.

```bash
	while ((bytes_read = read(0, buffer, BUFFER_SIZE0))) {
			write(1, buffer, 80);
		}
```

Enquanto `bytes_read` estiver recebendo valores, a função `write()` continuará sendo executada.

Agora transformamos o `0` e `1` das funções `read()` e `write()` em constantes fornecidas pela própria `unistd.h`

```c
	while ((bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE))) {
		write(STDOUT_FILENO, buffer, 80);
	}
```