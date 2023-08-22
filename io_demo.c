#include  <stdio.h>
int main()
{
	char f, m, l;
	int age;

	printf("Enter your initials:\n");
	scanf("%c%c%c", &f, &m, &l);
	printf("Enter your age:\n");
	scanf("%d", &age);
	printf("My initials are %c%c%c, and my age is %d\n", f, m, l, age);
	return (0);
}
