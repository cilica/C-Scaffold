#include <add_numbers.h>

/* TODO - these should be in a header file */
extern void Foo_Resume(void);
extern char Foo_GetOtherNumber(void);

/* TODO - add description */
char SumOfTwoNumbers(char a, char b)
{
  /* test*/
  Foo_Resume();
  /* REQREF DES_2313 */
  /* FIXME Second parameter "b" is useless */
  return a + Foo_GetOtherNumber();
}