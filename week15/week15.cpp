#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(char* z)
{
	int a = 0;
	while (z[a] != '\0')
	{
		a++;
	}
	return a;
}

void uplow(char* str)
{
	int up=0, low=0,other=0;
	for (int i = 0; i < count(str); i++) {
		if (str[i] >= 97 && str[i] <= 122)
			low++;
		else if (str[i] >= 65 && str[i] <= 90)
			up++;
		else
			other++;
	}
	printf("UPPER : %d\nLOWER : %d\nOTHER : %d\n", up, low, other);
}

int main() {
	char x[1000];
	scanf("%s", x);
	uplow(x);
	return 0;
	
}