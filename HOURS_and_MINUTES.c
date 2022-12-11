#include<stdio.h>
int tot_mins;
int hrs;
int mins;       
const int MINaHOUR = 60;    
char line_text[50]; 
int main() {
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &tot_mins);
	hrs = (tot_mins / MINaHOUR);
	mins = (tot_mins % MINaHOUR);
	printf("%d Hour(s) %d Minute(s)
", hrs, mins);
	return(0);
}