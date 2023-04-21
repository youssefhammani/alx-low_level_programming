#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>

void display_elf_header(Elf64_Ehdr *header);
void display_magic_class_data_version(Elf64_Ehdr *header);
void display_os_abi_type_entry(Elf64_Ehdr *header);

/**
 * main - processes command line arguments and displays ELF header information
 * @argc: the number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: 0 on success, 98 if an error occurs
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("Error: ");
		return (98);
	}

	Elf64_Ehdr header;
	ssize_t read_bytes = read(fd, &header, sizeof(header));

	if (read_bytes != sizeof(header) ||
			memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	display_elf_header(&header);
	close(fd);
	return (0);
}

/**
 * display_elf_header - displays the complete ELF header
 * @header: pointer to an Elf64_Ehdr
 * structure containing the header information
 */

void display_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	display_magic_class_data_version(header);
	display_os_abi_type_entry(header);
}

/**
 * display_magic_class_data_version - displays the magic,
 * class, data, and version
 *                                    fields of the ELF header
 * @header: pointer to an Elf64_Ehdr
 * structure containing the header information
 */

void display_magic_class_data_version(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	printf("  Data:                              ");
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");

	printf("  Version:                           ");
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf("1 (current)\n");
}

/**
 * display_os_abi_type_entry - displays the OS/ABI,
 * ABI version, type, and entry
 *                             point address fields of the ELF header
 * @header: pointer to an Elf64_Ehdr
 * structure containing the header information
 */

void display_os_abi_type_entry(Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %02x>\n", header->e_ident[EI_OSABI]);
			break;
	}

	printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf(" Type: ");
	switch (header->e_type)
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown: %02x>\n", header->e_type);
			break;
	}

	printf(" Entry point address: 0x%lx\n", header->e_entry);
}
