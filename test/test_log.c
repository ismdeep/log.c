//
// Created by L. Jiang on 2020/11/27.
//

#include <stdio.h>
#include <stdlib.h>
#include <log.h>

int main() {
    FILE *log_file = fopen("product.log", "ab");
    log_add_fp(log_file, LOG_INFO);
    log_set_quiet(false);
    log_info("Hello, %s", "L. Jiang");
    log_fatal("Fatal");
    log_info("Int value %d", 1024);
    log_set_quiet(true);
    log_info("Only show in log file.");

    return EXIT_SUCCESS;
}