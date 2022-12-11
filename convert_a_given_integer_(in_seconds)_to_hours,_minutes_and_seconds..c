#include <stdio.h>
int main() {
	int sec, h, m, s;
	scanf("%d", &sec);
	h = (sec/3600); 
	m = (sec -(3600*h))/60;
	s = (sec -(3600*h)-(m*60));
	printf("H:M:S-%d:%d:%d
",h,m,s);
	return 0;
}