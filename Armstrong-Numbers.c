#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int yuz, on, bir, kup, sayi;
	
	/*for (i = 100 ; i <= 999 ; i++ )
	{
		yuz = i / 100;
		on = (i % 100) / 10;
		bir = i % 10;
		kup = yuz * yuz * yuz + on * on * on + bir * bir * bir;
		
		if ( kup == i )
		{
			printf("%d\t", i);
		}
	}*/
	for (yuz = 1 ; yuz < 10 ; yuz++)
	{
		for(on = 0 ; on < 10 ; on++)
		{
			for(bir = 0 ; bir < 10 ; bir++)
			{
				sayi = yuz * 100 + on * 10 + bir * 1;
				kup = yuz * yuz * yuz + on * on * on + bir * bir * bir;
				
				if ( sayi == kup )
				{
					printf("%d\t", sayi);
				}
			}
		}
	}
	
	
	
	
	
	
	return 0;
}
