#include <stdio.h>
#include "color.h"

static console_color Foreground = GREY, Background = BLACK;
static signed char Foreground_C255 = 8, Background_C255 = 16;
static console_rgb_color Foreground_RGB = { 128, 128, 128 }, Background_RGB = { 0, 0, 0 };

void set_foreground(console_color color)
{
  Foreground = color;
  printf("\033[%dm", color);
}

void set_foreground_c255(signed char code)
{
    Foreground = CODE_255;
    Foreground_C255 = code;
    printf("\033[38;5;%dm", code);
}

void set_foreground_rgb(console_rgb_color color)
{
    Foreground = RGB;
    Foreground_RGB = color;
    printf("\033[38;2;%d;%d;%dm", color.r, color.g, color.b);
}

void set_foreground_hex(int hex)
{
    set_foreground_rgb((console_rgb_color){  });
}

void set_background(console_color color)
{
  Background = color;
  printf("\033[%dm", color + 10);
}

void set_background_c255(signed char code)
{
    Background = CODE_255;
    Background_C255 = code;
    printf("\033[48;5;%dm", code);
}

void set_background_rgb(console_rgb_color color)
{
    Background = RGB;
    Background_RGB = color;
    printf("\033[38;2;%d;%d;%dm", color.r, color.g, color.b);
}

console_color get_foreground()
{
  return Foreground;
}

console_color get_background()
{
  return Background;
}

void reset_colors()
{
  set_foreground(GREY);
  set_background(BLACK);
}
