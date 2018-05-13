#include<stdio.h>
/*com1*/void f(){;}int main(){/*com2*/char *s="#include<stdio.h>%c/*com1*/void f(){;}int main(){/*com2*/char *s=%c%s%c;f();printf(s,10,34,s,34,10);}%c";f();printf(s,10,34,s,34,10);}
