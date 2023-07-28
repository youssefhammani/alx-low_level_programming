#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

#define BUF_SIZE 1024
#define EI_NIDENT 16

typedef struct
{
        unsigned char e_ident[EI_NIDENT];
        unsigned short e_type;
        unsigned short e_machine;
        unsigned int e_version;
        unsigned long e_entry;
        unsigned long e_phoff;
        unsigned long e_shoff;
        unsigned int e_flags;
        unsigned short e_ehsize;
        unsigned short e_phentsize;
        unsigned short e_phnum;
        unsigned short e_shentsize;
        unsigned short e_shnum;
        unsigned short e_shstrndx;
} ElfHeader;


ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
