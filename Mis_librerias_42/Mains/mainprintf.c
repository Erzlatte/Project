#include "ft_printf.h"

int menu(void);

int main ()
{
	int opc;
	char ascii = 'C';
	char cadena[] = "Hola q tal??";
	int num = 7;
	int minnum = -3;
	int mnum = 43;
	int bignum = 4312;
	int mio;
	int delprog;

	do
	{
		opc = menu();

		switch (opc)
		{
			case 1:
				ft_printf("%c\n", ascii);
				printf("\n");
				break;
			case 2:
				ft_printf("%s\n", cadena);
				printf("\n");
				break;
			case 3:
				ft_printf("%p\n", cadena);
				printf("\n");
				break;
			case 4:
				ft_printf("%d\n", num);
				printf("\n");
				ft_printf("%d\n", minnum);
				printf("\n");
				break;
			case 5:
				ft_printf("%i\n", mnum);
				printf("\n");
				ft_printf("%i\n", minnum);
				printf("\n");
				break;
			case 6:
				ft_printf("%u\n", bignum);
				printf("\n");
				ft_printf("%u\n", minnum);
				printf("\n");
				break;
			case 7:
				ft_printf("%x\n", mnum);
				printf("\n");
				ft_printf("%x\n", minnum);
				printf("\n");
				break;
			case 8:
				ft_printf("%X\n", mnum);
				printf("\n");
				ft_printf("%X\n", minnum);
				printf("\n");
				break;
			case 9:
				ft_printf("%%\n");
				printf("\n");
				break;
			case 10:
				printf("Pruebas del extricto\n");
				 mio = ft_printf("0x%p-");
				printf("%d\n", mio);
				printf("\n");
				delprog = printf("0x%p-");
				printfn("%d\n", delprog);
				printf("\n");
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
		printf("Pruebas de la prinft\n");
		printf("0) Salir\n");

		printf("Opción: ");
		scanf("%d", &opc);
		printf("\n");
		fflush(stdin);
	}while (opc < 0 || opc > 12);

	return opc;
}
