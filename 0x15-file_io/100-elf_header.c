#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

int main() {
char filename [] = "myfile.txt":
char text[] = "Hello, world!\n"; int fd;
fd = open(filename, O_CREATO_WRONLY, 0644); if (fd-1) {
}
perror("open");
exit (EXIT_FAILURE);
if (write (fd, text, sizeof(text) 1) == -1) {
}
perror("write");
exit (EXIT_FAILURE);
if (close (fd) == -1) |
perror("close");
exit (EXIT_FAILURE);
printf("Wrote \"%s\" to file \"%s\"\n", text, filename);
return 0;
}
