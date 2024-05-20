#include <stdio.h>
#include "libft.h"

int		menu(void);
void	*transform_content(void *content);
void	del_content(void *content);
void	print_content(void *content);
char	*ft_strncpy(char *d, const char *s, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_count(char const *s, char c);

char f (unsigned int i, char c)
{
	int P = i;
	P = 0;
	char str;
	str = c + 1;
	return (str);
}

int main ()
{
	char valor;
	char str [] = "Que tal te encuentras";
	char strl [] = "Queda vacio todo";
	char ch = 'e';
	int opc;
	int result;
	char b [] = "te";
	char ato [] = "  -2309 ";
	char word[] = "charaholacter";
	int a = 5;
	int z = 4;
	char **cadena;
	char ml[] = "Comozzestaszchaval";
	char *newstr;
	int i;
	char str1[] = "bcd";
	char* str2;
	t_list *lp;
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hola");
	t_list *lpt = NULL;
	t_list *neww = ft_lstnew("Hola");
	t_list *elem = ft_lstnew("Adios");
	t_list *lstt = ft_lstnew("Hola");
	t_list *lptt = ft_lstnew("Hola");
	t_list *elemto = ft_lstnew("Hola");
	int comp;

	do
	{
		opc = menu();

		switch (opc)
		{
			case 1:
				printf("Introduce en caracter a comprobar si lo es: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %d\n", valor,ft_isalpha(valor));
				break;
			case 2:
				printf("Introduce en caracter a comprobar si es numerico: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %d\n", valor,ft_isdigit(valor));
				break;
			case 3:
				printf("Introduce en caracter a comprobar si es alfanumerico: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %d\n", valor,ft_isalnum(valor));
				break;
			case 4:
				printf("Introduce en caracter a comprobar si esta contenido en la tabla ascii: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %d\n", valor,ft_isascii(valor));
				break;
			case 5:
				printf("Introduce en caracter a comprobar si es imprimible: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %d\n", valor,ft_isprint(valor));
				break;
			case 6:
				printf("Introduce en caracter a comprobar longitud: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("Valor %c es %zu\n", valor,ft_strlen(&valor));
				break;
			case 7:
				printf("Cambia los bytes indicados con un caracter: \n");
				puts(str);
				ft_memset(str, 'A', 10);
				puts(str);
				break;
			case 8:
				printf("Cambia los bytes indicados con valor NULL: \n");
				puts(strl);
				ft_bzero(strl, 10);
				puts(strl);
				break;
			case 9:
				printf("Copia una cadena encima de otra, pero solo el numero de bytes indicados: \n");
				puts(str);
				ft_memcpy(str, strl, 10);
				puts(str);
				break;
			case 10:
				printf("Mueve una cadena encima de otra, pero solo el numero de bytes indicados: \n");
				puts(str);
				ft_memmove(str, strl, 10);
				puts(str);
				break;
			case 11:
				printf("Copia el numero de bytes indicados en otra cadena y superpone la información: \n");
				puts(str);
				ft_strlcpy(str, strl, 10);
				puts(str);
				break;
			case 12:
				printf("Concatena dos cadenas(suma una a la otra) a partir del byte indicado: \n");
				printf("La suma de cadenas hace un total de %zu caracteres\n",ft_strlcat(str, strl, 10));
				break;
			case 13:
				printf("Introduce en caracter a cambiar a mayuscula en valor ascii: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("%c es %d en su valor ascii mayuscula\n", valor,ft_toupper(valor));
				break;
			case 14:
				printf("Introduce en caracter a cambiar a minuscula en valor ascii: ");
				scanf("%c", &valor);
				fflush(stdin);
				printf("%c es %d en su valor ascii minuscula\n", valor,ft_tolower(valor));
				break;
			case 15:
				printf("Busca el primer caracter de un tipo(concreto) he imprime desde hay: \n");
				printf("caracter %c la cadena queda: %s\n", ch, ft_strchr(str, ch));
				break;
			case 16:
				printf("Busca el ultimo caracter de un tipo(concreto) he imprime desde hay: \n");
				printf("caracter %c la cadena queda: %s\n", ch, ft_strrchr(str, ch));
				break;
			case 17:
				printf("Comapara en ultimo byte de las cadenas: \n");
				result = ft_strncmp(str, strl, 16);
				   if( result < 0 )
					  printf( "First is less than second.\n" );
				   else if( result == 0 )
					  printf( "First is equal to second.\n" );
				   else
					  printf( "First is greater than second.\n" );
				break;
			case 18:
				printf("Busca en los byte indicados una coincidencia he imprime el resto de la cadena si la encuentra: \n");
				puts(str);
				printf("La cadena: %p\n",ft_memchr(str, ch, 5));
				break;
			case 19:
				printf("Compara en byte indicado dentro de una cadena: \n");
				puts(str);
				puts(strl);
				result = ft_memcmp(str, strl, 16);
				   if( result < 0 )
					  printf( "First is less than second.\n" );
				   else if( result == 0 )
					  printf( "First is equal to second.\n" );
				   else
					  printf( "First is greater than second.\n" );
				break;
			case 20:
				printf("Busca una cadena dentro de otra: \n");
				puts(str);
				printf("La cadena: %s\n",ft_strnstr(str, b, 21));
				break;
			case 21:
				printf("Busca una cadena dentro de otra: \n");
				puts(ato);
				printf("La cadena: %d\n",ft_atoi(ato));
				break;
			case 22:
				//printf("%s\n", ft_substr(word, a, z));
                
                printf("%s\n", ft_substr(word, 400, 20));
				break;
			case 23:
				printf("%s\n", ft_strjoin(str, strl));
				break;
			case 24:
				printf("%s\n", ft_strtrim("gtksholacwq", "gtkscwq"));
				break;
			case 25:
				i = 0;
				cadena = ft_split("  tripouille  42  ", ' ');
				while (cadena[i])
				{
					printf("%s\n", cadena[i]);
					i++;
                }
                printf("%s\n", cadena[0]);
                comp = !strcmp(cadena[0], "tripouille");
                printf("%d\n", comp);
                
                printf("%s\n", cadena[1]);
                comp = !strcmp(cadena[1], "42");
                printf("%d\n", comp);
                (cadena[1], strlen("42") + 1);
				break;
			case 26:
				printf("%s\n", ft_itoa(100));
				printf("%s\n", ft_itoa(-245));
				printf("%s\n", ft_itoa(0));
				break;
			case 27:
				printf("%p\n", ft_calloc(6, 3));
				break;
			case 28:
				if ((newstr = ft_strdup(str)) != NULL)
					printf("The new string is: %s\n", newstr);
				break;
			case 29:
				str2 = ft_strmapi(str1, *f);
				printf("%s\n", str2);
				break;
			case 30:
				ft_putchar_fd('a', 1);
				printf("\n");
				break;
			case 31:
				ft_putstr_fd("hola", 1);
				printf("\n");
				break;
			case 32:
				ft_putendl_fd("hola", 1);
				break;
			case 33:
				ft_putnbr_fd(-2147483648, 1);
				printf("\n");
				break;
			case 34:
				lp = ft_lstnew("quecosas");
				printf("%p\n", lp -> content);
				printf("%p\n", lp -> next);
				printf("%p\n", lp);
				break;
			case 35:
				ft_lstadd_front(&lst, new);
				printf("%p\n", lst -> content);
				t_list *lst = ft_lstnew("Hola");
				t_list *new = ft_lstnew("Dan");
				ft_lstadd_front(&lst, new);
				printf("%p\n", lst -> content);
				int size = ft_lstsize(lst);
				printf("%d\n", size);
				break;
			case 36:
				ft_lstadd_front(&lpt, neww);
				printf("%p\n", lpt -> content);
				ft_lstadd_front(&lpt, ft_lstnew("Dan"));
				t_list *last_element = ft_lstlast(lpt);
				printf("%p\n", last_element -> content);
				break;
			case 37:
				printf("%p\n", elem -> content);
				ft_lstdelone(elem, del_content);
				printf("%p\n", elem -> content);
				break;
			case 38:
				ft_lstadd_back(&lstt, ft_lstnew("Mal"));
				ft_lstclear(&lst, del_content);
				break;
			case 39:
				ft_lstadd_back(&lptt, ft_lstnew("Dan"));
				ft_lstiter(lptt, print_content);
				break;
			case 40:
				ft_lstadd_back(&elemto, ft_lstnew("Dan"));
				t_list *new_lst = ft_lstmap(elemto, transform_content, del_content);
				printf("%p\n", new_lst -> content);
				break;
			case 0:
				if (opc == 0)
					printf("Termina el programa\n");
				break;
		}
	}while (opc != 0);
	
	return (0);
}
int menu ()
{
	int opc;

	do
	{
		printf("Menú\n");
		printf("Ordenados por la secuencia en la que salen en el pdf\n");
		printf("Son un total de 40\n");
		printf("0) Salir\n");

		printf("Opción: ");
		scanf("%d", &opc);
		fflush(stdin);
	}while (opc < 0 || opc > 42);

	return opc;
}

void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}

void	*transform_content(void *content)
{
	if (content == NULL)
		return NULL;
	char *str = (char *)content;
	char *result = strdup(str);
	for (size_t i = 0; result[i]; i++)
		result[i] = ft_toupper(result[i]);

	return result;
}

void	del_content(void *content)
{
	free(content);
}

char	*ft_strncpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}

	return (d);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}

	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_count(char const *s, char c)
{
	char	last;
	int		i;
	int		j;

	last = c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((last == c) && (s[i] != c))
			j++;
		last = s[i];
		i++;
	}

	return (j);
}
