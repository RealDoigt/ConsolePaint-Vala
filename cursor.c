#include <stdio.h>
#include <string.h>

static int X = 0, Y = 0;

void set_cursor_position(int x, int y)
{
  X = x;
  Y = y;

  printf("\033[%d;%dH", y, x);
}

void set_cursor_x(int x)
{
  X = x;
  printf("\033[%dH", x);
}

void set_cursor_y(int y)
{
  Y = y;
  printf("\033[%dG", y);
}

int get_cursor_x()
{
  return X;
}

int get_cursor_y()
{
  return Y;
}

void console_clear()
{
  X = 0;
  Y = 0;

  printf("\033[2J");
}

void console_write(const char* str)
{
  printf("%s", str);
  X += strlen(str) - 1;
}

void console_write_line(const char* str)
{
  printf("%s\n", str);

  X = 0;
  ++Y;
}
