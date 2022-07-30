#ifndef color_h
#define color_h

typedef enum
{
  BLACK        = 30,
  DARK_RED     = 31,
  DARK_GREEN   = 32,
  DARK_YELLOW  = 33,
  DARK_BLUE    = 34,
  DARK_MAGENTA = 35,
  DARK_CYAN    = 36,
  DARK_GREY    = 90,
  WHITE        = 97,
  RED          = 91,
  GREEN        = 92,
  YELLOW       = 93,
  BLUE         = 94,
  MAGENTA      = 95,
  CYAN         = 96,
  GREY         = 37,
  CODE_255     = 30,
  RGB          = 30
}
console_color;

typedef struct
{
    unsigned char r, g, b;
}
console_rgb_color

void set_foreground(console_color);
void set_background(console_color);
console_color get_foreground();
console_color get_background();
void reset_colors();
#endif
