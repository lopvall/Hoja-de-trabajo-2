#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
 
char nombre[5],curso[5];
float nota1[5],nota2[5],nota3[5],sumatoria[5],promedio[5];
 
int op,i;
int a=1;
int fila=6;
 
void gotoxy(int x,int y)
{
	HANDLE hcon;
	hcon =
GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos .X = x;
	dwPos .Y = y;
SetConsoleCursorPosition(hcon,dwPos);
}
 
main()
{
	op=0;
	while((op!=1) || (op!=2))
	{
		system("cls");
		system("color 50");
		gotoxy(10,2);  printf("UNIVERSIDAD MARIANO GALVEZ");
		gotoxy(14,4);  printf("SISTEMA REGISTRO DE NOTAS");
		gotoxy(10,7);  printf("<-----------{ MENU }----------->");
		gotoxy(10,10); printf("********************************");
		gotoxy(10,11); printf("*				 *");
		gotoxy(10,12); printf("*				 *");
		gotoxy(10,13); printf("*      1. Ingreso de Notas     *");
		gotoxy(10,14); printf("*      2. Reporte de Notas     *");
		gotoxy(10,15); printf("*      3. Salir                *");
		gotoxy(10,16); printf("*				 *");
		gotoxy(10,17); printf("*				 *");
		gotoxy(10,18); printf("********************************");
		gotoxy(10,20); printf("      Escoja la Opcion: ");
		while ((op<1) || (op>3))
		{
			gotoxy(35,20); scanf("%d",&op);
			if ((op<1) || (op>3))
			{
				gotoxy(10,22); printf("<<<OPCION INCORRECTA>>>");
				gotoxy(10,23); printf("Pulse ENTER para Continuar. VUELVA INGRESAR");
				getchar();
				gotoxy(10,22); printf("										");
				gotoxy(10,23); printf("										");
			}
			else
			{
				gotoxy(10,22); printf("<---OPCION CORRECTA--->");
				gotoxy(10,23); printf("Pulse ENTER para Continuar.");
				getchar();
				gotoxy(10,22); printf("										");
				gotoxy(10,23); printf("										");
			}
		}
		switch(op)
		{
			case 1:
				system("cls");
				system("Color 10");
				gotoxy(12,2); printf("UNIVERSIDAD MARIANO GALVEZ");
				gotoxy(12,4); printf("NOTAS ACADEMICAS");
				gotoxy(12,6); printf("<INGRESE 5 ALUMNOS>");
				for (i=1; i<3; i++)
				{
					gotoxy(12,8);  printf("<REGISTRO No. %d > ",a);
					gotoxy(12,10); printf("Ingrese el Nombre: "); scanf("%s",&nombre[i]);
					gotoxy(12,11); printf("Ingrese el Curso : "); scanf("%s",&curso[i]);
					gotoxy(12,12); printf("Ingrese la Nota 1: "); scanf("%f",&nota1[i]);
					gotoxy(12,13); printf("Ingrese la Nota 2: "); scanf("%f",&nota2[i]);
					gotoxy(12,14); printf("Ingrese la Nota 3: "); scanf("%f",&nota3[i]);
					sumatoria[i]=nota1[i]+nota2[i]+nota3[i];
					promedio[i]=sumatoria[i]/3;
					gotoxy(12,16); printf("Pulse ENTER para nuevo regristro.");
					getch();
					gotoxy(12,16); printf(" 									    ");
					gotoxy(31,10); printf("											");
					gotoxy(31,11); printf("											");
					gotoxy(31,12); printf("											");
					gotoxy(31,13); printf("											");
					gotoxy(31,14); printf("											");
					a++;
				}
				gotoxy(12,12); printf("<Pulse ENTER para continuar>");
				getch();
			break;
			case 2:
				system("cls");
				system("Color 20");
				gotoxy(12,2); printf("UNIVERSIDAD MARIANO GALVEZ");
				gotoxy(12,4); printf("Reporte de Notas Academicas. ");
				gotoxy( 1,fila); printf("Nombre");
				gotoxy(20,fila); printf("Curso");
				gotoxy(30,fila); printf("Nota 1");
				gotoxy(40,fila); printf("Nota 2");
				gotoxy(50,fila); printf("Nota 3");
				gotoxy(60,fila); printf("Sumatoria");
				gotoxy(70,fila); printf("Promedio");
				fila=6;
				for (i=1; i<3; i++)
				{
					fila++;
					gotoxy( 1,fila); printf("%s",nombre[i]);
					gotoxy(20,fila); printf("%s",curso[i]);
					gotoxy(30,fila); printf("%f",nota1[i]);
					gotoxy(40,fila); printf("%f",nota2[i]);
					gotoxy(50,fila); printf("%f",nota3[i]);
					gotoxy(60,fila); printf("%f",sumatoria[i]);
					gotoxy(70,fila); printf("%f",promedio[i]);
				}
				gotoxy(12,12); printf("<Pulse ENTER para continuar>");
				getch();
			break;
			case 3:
				system("cls");
				system("Color 55");
				gotoxy(12,2); printf("Usted a elejido Salir...");
				gotoxy(12,4); printf("Gracias por preferirnos. ");
				gotoxy(12,6); printf("Pulse ENTER para salir ");
				getch();
				op=3;
			break;
			default:
				system("cls");
				system("Color 55");
				gotoxy(12,2); printf("Opcion no valida. ERROR ERROR");
				gotoxy(12,4); printf("Solo opciones del 1 al 3. ");
				gotoxy(12,6); printf("Pulse ENTER para continuar en el menu");
				getch();
		}
 
	}
	system("cls");
    system("PAUSE");
}
