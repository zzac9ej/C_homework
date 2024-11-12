#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, pay, m, total, total50, total10, total5, total1;
	n = 0;
	pay = 0;
	m = 0;
	total = 0;
	total50 = 0;
	total10 = 0;
	total5 = 0;
	total1 = 0;
	printf("¡ ∂Rn∂µΩ≠µÊ:");
	scanf("%d", &n);
	for (m = 1; m <= n; m++)
	{
		printf("™˜√B:");
		scanf("%d", &pay);
		total50 = pay / 50 + total50;
		total10 = (pay - total50 * 50) / 10 + total10;
		total5 = (pay - total50 * 50 - total10 * 10) / 5 + total5;
		total1 = (pay - total50 * 50 - total10 * 10 - total5 * 5) + total1;
	}
	printf("%d\n%d\n%d\n%d", total50, total10, total5, total1);
	system("pause");
	return 0;



}