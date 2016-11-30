#ifndef SQLITE_LOGGING
#define SQLITE_LOGGING
    int log_fd;
    void *log_buffer;
    int is_open;
    unsigned int lastLsn;
#endif
