Structures and typedef in C

A structure is a data type defined by a user which allows for different kinds of data items.
Typedef is used to create an alias for a structure type.

Syntax:
typedef struct dog
{
	char name;
	int age;
} doggie

Accessing elements in a structure can be done directly:
doggie.name = "Toffee"

Or with a pointer, but the pointer has to be dereferenced first:
struct dog *pt; (pt = pointer)
pt = &doggie: (dereference pt)

then access the elements:
(*pt).name = "Toffee"
Or
pt->age = 3
