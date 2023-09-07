#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(message);
    ssize_t ret;

    ret = write(2, message, len);
    if (ret != len) {
        int error = (ret == -1) ? errno : EIO;
        const char *errorMsg = strerror(error);
        write(2, errorMsg, strlen(errorMsg));
        return 1;
    }

    return (1);
} 
