/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:07:43 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/23 10:21:37 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int menu(void);

char f(unsigned int i, char c)
{
    int P = i;
    P = 0;
    char str;
    str = c + 1;
    return (str);
}

int main() {
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
    do{
        opc = menu();
        switch (opc) {
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
                printf("%s\n", ft_substr(word, a, z));
                break;
            case 23:
                printf("%s\n", ft_strjoin(str, strl));
                break;
            case 24:
                printf("%s\n", ft_strtrim("gtksholacwq", "gtkscwq"));
                break;
            case 25:
                i = 0;
                cadena = ft_split(ml, 'z');
                while (cadena[i]) {
                    printf("%s\n", cadena[i]);
                    i++;
                }
                break;
            case 26:
                printf("%s\n", ft_itoa(100));
                printf("%s\n", ft_itoa(-245));
                printf("%s\n", ft_itoa(0));
                break;
            case 27:
                str2 = ft_strmapi(str1, *f);
                printf("%s\n", str2);
                break;
            case 28:
                ft_putchar_fd('a', 1);
                printf("\n");
                break;
            case 29:
                ft_putstr_fd("hola", 1);
                printf("\n");
                break;
            case 30:
                ft_putendl_fd("hola", 1);
                break;
            case 31:
                ft_putnbr_fd(-2147483648, 1);
                printf("\n");
                break;
            case 32:
                lp = ft_lstnew("quecosas");
                printf("%p\n", lp -> content);
                printf("%p\n", lp -> next);
                printf("%p\n", lp);
                break;
            case 33:
                ft_lstadd_front(&lst, new);
                printf("%p\n", lst -> content);
                t_list *lst = ft_lstnew("Hola");
                t_list *new = ft_lstnew("Dan");
                ft_lstadd_front(&lst, new);
                printf("%p\n", lst -> content);
                int size = ft_lstsize(lst);
                printf("%d\n", size);
                break;
            case 34:
                ft_lstadd_front(&lpt, neww);
                printf("%p\n", lpt -> content);
                ft_lstadd_front(&lpt, ft_lstnew("Dan"));
                t_list *last_element = ft_lstlast(lpt);
                printf("%p\n", last_element -> content);
                break;
            case 35:
                printf("%p\n", elem -> content);
                ft_lstdelone(elem, del_content);
                printf("%p\n", elem -> content);
                break;
            case 36:
                ft_lstadd_back(&lstt, ft_lstnew("Mal"));
                ft_lstclear(&lst, del_content);
                break;
            case 37:
                ft_lstadd_back(&lptt, ft_lstnew("Dan"));
                ft_lstiter(lptt, print_content);
                break;
            case 38:
                ft_lstadd_back(&elemto, ft_lstnew("Dan"));
                t_list *new_lst = ft_lstmap(elemto, transform_content, del_content);
                printf("%p\n", new_lst -> content);
                break;
            case 0:
                if(opc == 0){
                    printf("Termina el programa\n");
                }
                break;
        }
    }
    while(opc != 0);
    
    return 0;
}
int menu(){
    int opc;
    do{
        printf("Menú\n");
        printf("1) ft_isalpha\n");
        printf("2) ft_isdigit\n");
        printf("3) ft_isalnum\n");
        printf("4) ft_isascii\n");
        printf("5) ft_isprint\n");
        printf("6) ft_strlen\n");
        printf("7) ft_memset\n");
        printf("8) ft_bzero\n");
        printf("9) ft_mencpy\n");
        printf("10) ft_memmove\n");
        printf("11) ft_strlcpy\n");
        printf("12) ft_strlcat\n");
        printf("13) ft_toupper\n");
        printf("14) ft_tolower\n");
        printf("15) ft_strchr\n");
        printf("16) ft_strrchr\n");
        printf("17) ft_strncmp\n");
        printf("18) ft_memchr\n");
        printf("19) ft_memcmp\n");
        printf("20) ft_strnstr\n");
        printf("21) ft_atoi\n");
        printf("22) ft_isprint\n");
        printf("23) ft_subtr\n");
        printf("24) ft_strjoin\n");
        printf("25) ft_strtrim\n");
        printf("26) ft_split\n");
        printf("27) ft_strmapi\n");
        printf("28) ft_striteri\n");
        printf("29) ft_putchar_fd\n");
        printf("30) ft_putstr_fd\n");
        printf("31) ft_puntendl_fd\n");
        printf("32) ft_putnbr\n");
        printf("0) Salir\n");

        printf("Opción: ");
        scanf("%d", &opc);
        fflush(stdin);
    }while(opc < 0 || opc > 42);
    return opc;
}
