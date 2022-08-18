//
// Created by song on 8/18/2022.
//
#include "config.h"
#include <string.h>

char *loadConfig() {
    FILE *fp = fopen("config.txt", "r");
    if (fp == NULL) {
        return NULL;
    }
    char *buf = malloc(BUF_SIZE);
    size_t n = fread(buf, sizeof(char), BUF_SIZE, fp);
    buf[n] = '\0';
    fclose(fp);
    return buf;
}

void saveConfig(char* value) {
    FILE *fp = fopen("config.txt", "w");
    if (fp == NULL) {
        return;
    }
    fwrite(value, strlen(value), 1, fp);
    fclose(fp);
}