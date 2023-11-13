# Hash Table Project

## Overview
This project involves the implementation of a hash table data structure in C. The hash table supports basic operations such as insertion, retrieval, and deletion of key-value pairs.

## Table of Contents
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Functions](#functions)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Files
The project consists of the following files:
- `0-hash_table_create.c`: Function to create a hash table.
- `1-djb2.c`: Implementation of the djb2 hash function.
- `2-key_index.c`: Function to get the index of a key in the hash table array.
- `3-hash_table_set.c`: Function to add an element to the hash table.
- `4-hash_table_get.c`: Function to retrieve a value associated with a key.
- `5-hash_table_print.c`: Function to print the contents of the hash table.
- `6-hash_table_delete.c`: Function to delete a hash table.
- Other necessary header files.

## Compilation

To compile the hash table project, follow the steps below. Ensure you have a compatible C compiler (e.g., gcc) installed on your system.

### Prerequisites

- Ubuntu 20.04 LTS
- GCC (GNU Compiler Collection)

### Compilation Commands

Use the following commands in the terminal to compile the project:

1. **Clone the Repository:**

    ```bash
    git clone https://github.com/your-username/your-repository.git
    cd your-repository
    ```

2. **Compile the Source Code:**

    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_table
    ```

    Explanation of Compilation Flags:

    - `-Wall`: Enable most warning messages.
    - `-Werror`: Treat warnings as errors.
    - `-Wextra`: Enable some extra warning messages.
    - `-pedantic`: Enforce strict adherence to C standards.
    - `-std=gnu89`: Use the GNU dialect of ISO C90 with GNU extensions.

3. **Run the Executable:**

    ```bash
    ./hash_table
    ```

### Example Compilation and Execution

```bash
git clone https://github.com/your-username/your-repository.git
cd your-repository
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_table
./hash_table
```

## Usage

### Integrating the Hash Table into Your Project

To incorporate the hash table functionality into your C project, follow these steps:

1. **Include Header Files:**
    ```c
    #include "hash_tables.h"
    ```

2. **Initialize a Hash Table:**
    ```c
    hash_table_t *ht;
    ht = hash_table_create(1024);  // Choose an appropriate size for the hash table array
    ```

3. **Perform Operations:**
    Use the provided functions to interact with the hash table. Below are common operations:

    - **Inserting Key-Value Pairs:**
        ```c
        hash_table_set(ht, "key", "value");
        ```

    - **Retrieving Values:**
        ```c
        char *result = hash_table_get(ht, "key");
        ```

    - **Printing the Hash Table:**
        ```c
        hash_table_print(ht);
        ```

4. **Cleanup Resources:**
    Ensure to release memory when you are done with the hash table:
    ```c
    hash_table_delete(ht);
    ```

### Example

Here's a minimal example demonstrating the usage of the hash table:

```c
#include "hash_tables.h"

int main(void)
{
    // Initialize hash table
    hash_table_t *ht = hash_table_create(1024);

    // Insert key-value pair
    hash_table_set(ht, "name", "John Doe");

    // Retrieve value
    char *value = hash_table_get(ht, "name");
    printf("Value: %s\n", value);

    // Print hash table
    hash_table_print(ht);

    // Clean up resources
    hash_table_delete(ht);

    return (0);
}
```

## Functions

### `hash_table_create`

#### Prototype

```c
hash_table_t *hash_table_create(unsigned long int size);
```

#### Description

* This function creates a hash table with a specified size.

#### Parameters

- `size`: The size of the array in the hash table.

#### Returns

- A pointer to the newly created hash table.
- If an error occurs, the function returns `NULL`.

### `hash_djb2`

#### Prototype

```c
unsigned long int hash_djb2(const unsigned char *str);
```

#### Description

* This function implements the djb2 hashing algorithm, which converts a string into a hash value.

#### Parameters

- `str`: The string to be hashed.

#### Returns

- The hash value of the input string.

### `key_index`

#### Prototype

```c
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```

#### Description

* This function calculates the index where a key/value pair should be stored in the array of the hash table using the djb2 hashing algorithm.

#### Parameters

- `key`: The key for which the index is calculated.
- `size`: The size of the array in the hash table.

#### Returns

- The index where the key/value pair should be stored.

### `hash_table_set`

#### Prototype

```c
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

#### Description

- This function adds or updates an element in the hash table.

#### Parameters

- `ht`: The hash table to which the key/value pair is added or updated.
- `key`: The key (cannot be an empty string).
- `value`: The value associated with the key (duplicated, can be an empty string).

#### Returns

- `1` if the operation succeeds.
- `0` otherwise.

### `hash_table_get`

#### Prototype

```c
char *hash_table_get(const hash_table_t *ht, const char *key);
```

#### Description

- This function retrieves the value associated with a given key in the hash table.

#### Parameters

- `ht`: The hash table to search.
- `key`: The key to search for.

#### Returns

- The value associated with the key, or `NULL` if the key couldn't be found.

### `hash_table_print`

#### Prototype

```c
void hash_table_print(const hash_table_t *ht);
```

#### Description

- This function prints the contents of the hash table in order.

#### Parameters

- `ht`: The hash table to be printed.

#### Returns

- No return value.

### `hash_table_delete`

#### Prototype

```c
void hash_table_delete(hash_table_t *ht);
```

#### Description

- This function deletes a hash table, freeing up allocated memory.

#### Parameters

- `ht`: The hash table to be deleted.

#### Returns

- No return value.
