#include <stdio.h>
#include <string.h>

//   memcpy - copy memory area
// void *memcpy(void *dest, const void *src, size_t n);

int main ()
{
char str1[] = "Hello";
char str2[] = "World";

puts("str1 before memcpy ");
puts(str1);

memcpy (str1, str2, 3);

puts("\nstr1 after memcpy ");
puts(str1);

return 0;
}

