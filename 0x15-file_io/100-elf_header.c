#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(Elf64_Ehdr header);
void print_entry(Elf64_Ehdr header);

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;
	unsigned char *e_ident;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	e_ident = header.e_ident;
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1)
		if (e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_osabi(e_ident);
	print_abiversion(e_ident);
	print_type(header);
	print_entry(header);

	close(fd);
	return (0);
}

/**
 * print_magic - prints the magic number of an ELF header
 * @e_ident: pointer to the e_ident field of an Elf64_Ehdr struct
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("   Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}
/**
 * print_class - prints the class of an ELF header
 * @e_ident: pointer to the e_ident field of an ELF64_ehdrr struct
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:			");
	printf("%s\n", e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
}

/**
 * print_data - prints the data encoding of an ELF header
 * @e_ident: pointer to ELF structure
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                             ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("2's complement, little endian");
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: pointer to ELF struct
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                          ");
	printf("%d%s\n",  e_ident[EI_VERSION],
			e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
}

/**
 * print_osabi - prints the OS/ABI of an elf header
 * @e_ident: pointer to ELF struct
 */

void print_osabi(unsigned char  *e_ident)
{
	printf("  OS/ABI:				");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("LINUX");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("FreeBSD");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD");
			break;
		default:
			printf("<unknown: %x>", e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
}

/**
 * print_abiversion - prints the ABI version of an ELF file
 * @e_ident: pointer to the e_ident field of an ELf64_Ehdr structure
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("  ABI version:				");
	printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF file
 * @header: an ELf64_Ehdr structure
 */

void print_type(Elf64_Ehdr header)
{
	printf("  Type:				");
	switch (header.e_type)
	{
		case ET_NONE:
			printf("No file type");
			break;
		case ET_REL:
			printf("Relocatable file");
			break;
		case ET_EXEC:
			printf("Executable file");
			break;
		case ET_DYN:
			printf("Shared object file");
			break;
		case ET_CORE:
			printf("Core file");
			break;
		default:
			printf("<unknown: %x>", header.e_type);
			break;
	}
	printf("\n");
}

/**
 * print_entry - prints the entry point address of an ELF file
 * @header: an ELF64_Ehdr structure
 */
void print_entry(Elf64_Ehdr header)
{
	printf(" Entry point address:			");
	printf("%#lx\n", header.e_entry);
}
