/*
**
** Reverse its input a line at a time.
**
*/
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

void reverse(char line[], int length);
int getlines(char line[], int maxline);

int main()
{
  int len;
  
  char line[MAXLINE];

  
/*
** 
** Read a line into s, return length.
**
*/
int getlines(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}
