#include <sys/syscall.h>

int main() {
	syscall(SYS_write, 1, "Hello, World\n", 13);
	return 0;
}	
