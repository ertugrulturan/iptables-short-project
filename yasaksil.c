#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        char buffer[50];
        sprintf(buffer, "iptables -D INPUT -s '%s' -j DROP", argv[1]);
        system(buffer);
		printf("%s Ip Adresinin Yasagi Kaldirildi!\n", argv[1]);
		return 0;
}
