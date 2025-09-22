#include <stdio.h>
#include <locale.h>

void name()
{
	puts("\n\n");
	puts("\t\t* * * * * * * * * * * * * * * * * * * * * *");
	puts("\t\t*                                         *");
	puts("\t\t* тема: Разработка консольного приложения *");
	puts("\t\t*                                         *");
	puts("\t\t*     Выполнил Сериков Н.А.               *");
	puts("\t\t*                                         *");
	puts("\t\t* * * * * * * * * * * * * * * * * * * * * *");	
}

void date()
{
	puts("\t\t   __            __   __       __  __");
	puts("\t\t     | |  |     |  | |  |     |  |   |");
	puts("\t\t    /  |__|     |  | |__|     |__|  /");
	puts("\t\t   /__    |  .  |__|  __|  .   __| /__");
	puts("\n");
}

void main()
{
	setlocale(LC_ALL, "RUS");

	name();
	date();

	return 0;
}