#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    char buffer[letters];
    ssize_t bytesRead;
    ssize_t bytesWritten;

    if (filename == NULL) {
        return (0);
    }

    file = open(filename, O_RDONLY);
    if (file == -1) {
        return (0);
    }

    bytesRead = read(file, buffer, letters);
    if (bytesRead <= 0) {
        close(file);
        return (0);
    }

    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten != bytesRead) {
        close(file);
        return (0);
    }

    close(file);
    return (bytesRead);
}


