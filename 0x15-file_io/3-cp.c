#include "main.h"

int main(int argc, char *argv[]) {
	const char *file_from = NULL, *file_to = NULL;
	char buffer[BUF_SIZE];
	int source_fd, target_fd;
	ssize_t bytes_read, bytes_written;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    file_from = argv[1];
    file_to = argv[2];

    source_fd = open(file_from, O_RDONLY);
    if (source_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return 98;
    }

    target_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (target_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(source_fd);
        return 99;
    }

    while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0) {
        bytes_written = write(target_fd, buffer, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(source_fd);
            close(target_fd);
            return 99;
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error reading from file %s: %s\n", file_from, strerror(errno));
        close(source_fd);
        close(target_fd);
        return 98;
    }

    if (close(source_fd) == -1 || close(target_fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        return 100;
    }

    return 0;
}
