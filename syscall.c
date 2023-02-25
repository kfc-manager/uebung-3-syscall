#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/time.h>

void first();
void second();

int main(int argc, char** argv) {
#ifdef FIRST
	first();
#endif
#ifdef SECOND
	second();
#endif

	return 0;
}

void first() {
	struct timeval time;
	for (int i = 0; i < 9999999; i++) {
		gettimeofday(&time,NULL);	
	}
}

void second() {
	int c;
	struct timeval time;
	for (int i = 0; i < 9999999; i++) {
		c = syscall(SYS_gettimeofday,&time,NULL);
	}
}


