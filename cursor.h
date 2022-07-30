#ifndef cursor_h
#define cursor_h

  void set_cursor_position(int, int);
  void set_cursor_x(int);
  void set_cursor_y(int);

  int get_cursor_x();
  int get_cursor_y();

  void console_clear();
  void console_write(char*);
  void console_write_line(char*);
#endif
