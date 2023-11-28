#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */


int main(int argc, char *argv[]) {
const char *file_from;
const char *file_to;
int fd_from;
int fd_to;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = argv[1];
file_to = argv[2];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
exit(99);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

if (close(fd_from) == -1 || close(fd_to) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(100);
}

return (0);
}
