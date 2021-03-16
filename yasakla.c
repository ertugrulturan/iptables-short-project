#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        char buffer[50];
        sprintf(buffer, "iptables -A INPUT -s '%s' -j DROP", argv[1]);
        system(buffer);
		printf("YASAKLANDI! Yasaklanan Ip Adresi:, %s\n", argv[1]);
		return 0;
}
