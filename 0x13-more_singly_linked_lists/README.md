# 0x13. C - More singly linked lists


*In this project, we will continue working with singly linked lists, and learn how to manipulate them more effectively. The tasks in this project will involve printing a linked list, counting the number of nodes in a list, adding a new node to the beginning of a list, adding a new node to the end of a list, freeing a list, and more.*


## Learning Objectives


*At the end of this project, we should be able to:*

* Explain and use linked lists
* Look for the right source of information without too much help

**Tasks**

This project contains several tasks, which are documented in their respective files in this directory. The tasks are:

**0. Print list**
Write a function that prints all the elements of a listint_t list.

* Prototype: size_t print_listint(const listint_t *h);
* Return: the number of nodes
* Format: see example
* You are allowed to use printf

**1. List length**
Write a function that returns the number of elements in a linked listint_t list.

* Prototype: size_t listint_len(const listint_t *h);

**2. Add node**
Write a function that adds a new node at the beginning of a listint_t list.

* Prototype: listint_t *add_nodeint(listint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

**3. Add node at the end**
Write a function that adds a new node at the end of a listint_t list.

* Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

**4. Free list**
Write a function that frees a listint_t list.

* Prototype: void free_listint(listint_t *head);
