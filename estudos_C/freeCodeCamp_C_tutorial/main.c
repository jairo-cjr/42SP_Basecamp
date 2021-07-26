#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	memory_addresses();
void	structs();
void	pointers();
void	writing_files();
void	readring_files();

int	main()
{
	//structs();
	//memory_addresses();
	//pointers();
	//writing_files();
	//readring_files();
	return(0);
}

void readring_files()
{
	char line[255];
	FILE * file_pointer = fopen("text.txt", "r");

	/*
	* fgets(
		onde a informacao deve ser armazenada,
		o tamanho maximo que pode ser lido,
		file_pointer
		)
	*/

	//lê a 1ª linha do arquivo.
	fgets(line, 255, file_pointer);
	printf("%s", line);
	//lê a 2ª linha do arquivo.
	fgets(line, 255, file_pointer);
	printf("%s", line);

	
	fclose(file_pointer);
}
void writing_files()
{
	/*
	* fopen() é responsável por abrir um arquivo.
	*
	* fopen(nome_do_arquivo, file mode)
	* file mode diz o que será feito com o arquivo passado.
	*
	* Os 3 mais básicos são:
	* r - read | fprintf não adiciona nada
	* w - write, ou criar um arquivo inexistente | fprintf sobrescreve
	* a - append (acrescentar) algo ao arquivo | fprintf acrescenta
	*/
	FILE * file_pointer = fopen("text.txt", "w");

	/*
	* fprintf() permite escrever dentro de um arquivo.
	* fprintf(arquivo a ser lido, "Texto inserido.")
	*/

	fprintf(file_pointer, "Linha 1.\nLinha 2.\nLinha 3.\n");

	/*
	* Todo aquivo aberto deve ser fechado utilizando fclose()
	*/
	fclose(file_pointer);
}

void	pointers()
{
	/*
	* - Ponteiro é um tipo de dado, assim como int, double, char...
	* - É basicamente um endereço de memória, que se refere a um
	* endereço físico dentro da memória do computador onde valores são
	* armazenados.
	* - Quando criamos uma variável pointer, nós armazenamos dentro
	* dela o endereço de memória de outra variável existente dentro do 
	* nosso programa.
	*/

	int	age = 30;
	int	* p_age = &age;
	
	double	gpa = 3.47;
	double	* p_gpa = &gpa;

	char grade = 'A';
	char * p_grade = &grade;

	char	nome[] = "Jairo";
	char *ponteiro_nome = nome;
	
	printf("Nome: ");
	while(*ponteiro_nome!='\0')
		printf("%c",*ponteiro_nome++);
	printf("\n");

	printf("Age pointer: %p\n", p_age);
	printf("Gpa pointer: %p\n", p_gpa);
	printf("Grade pointer: %p\n", p_grade);

	/*
	* Desreferenciar um ponteiro significa ir até o endereço de
	* memória e coletar a informação/valor alocada nela.
	*/
	
	printf("------------\n");
	printf("Desreferenciando ponteiro: %d\n", *p_age);
	printf("Desreferenciando e imprimindo o end. de novo: %p\n", &*p_age);
}

void	memory_addresses()
{
	int	age = 30;
	double	pi = 3.1415;
	char	grade = 'A';

	printf("age: %p\n", &age);
	printf("pi: %p\n", &grade);
	printf("grade: %p\n", &pi);
}

void	structs()
{
	struct Funcionario
	{
		char nome[50];
		char emprego[50];
		int idade;
		// great point average
		double salario;
	};

	struct Funcionario funcionario_1;

	funcionario_1.idade = 25;
	funcionario_1.salario = 3.500;
	strcpy(funcionario_1.nome, "Jim");
	strcpy(funcionario_1.emprego, "Vendedor");

	struct Funcionario funcionario_2;

	funcionario_2.idade = 24;
	funcionario_2.salario = 3.200;
	strcpy(funcionario_2.nome, "Pam");
	strcpy(funcionario_2.emprego, "Recepcionista");

	/*
	* para um array de caracteres (char[]) não podemos atribuir um 
	* valor particular
	*
	* funcionario_1.nome = "Jim" - não iria funcionar
	* 
	* podemos utiliar uma função chamada 'string copy function'
	* que pega uma string e lhe atribui o valor especificado.
	* strcpy()
	*/

	printf("Nome: %s | %s\n", funcionario_1.nome, funcionario_2.nome);
	printf("Emprego: %s | %s\n", funcionario_1.emprego, funcionario_2.emprego);
	printf("Idade: %d | %d\n", funcionario_1.idade, funcionario_2.idade);
	printf("Salario: %f | %f\n", funcionario_1.salario, funcionario_2.salario);
}