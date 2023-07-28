#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void displayElfHeader(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	ElfHeader elfHeader;

	if (read(fd, &elfHeader, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}

	if (elfHeader.e_ident[0] != 0x7f || elfHeader.e_ident[1] != 'E' || elfHeader.e_ident[2] != 'L' || elfHeader.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: Not a valid ELF file: %s\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", elfHeader.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ELF");
	printf("%d\n", elfHeader.e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                              2's complement, %s\n", elfHeader.e_ident[5] == 1 ? "little endian" : "big endian");
	printf("  Version:                           %d (current)\n", elfHeader.e_version);
	printf("  OS/ABI:                            ");
	switch (elfHeader.e_ident[7])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		default:
			printf("<unknown: %d>\n", elfHeader.e_ident[7]);
	}
	printf("  ABI Version:                       %d\n", elfHeader.e_ident[8]);
	printf("  Type:                              ");
	switch (elfHeader.e_type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown: %d>\n", elfHeader.e_type);
	}
	printf("  Entry point address:               0x%lx\n", elfHeader.e_entry);

	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	displayElfHeader(argv[1]);

	return (0);
}

