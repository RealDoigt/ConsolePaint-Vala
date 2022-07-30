[CCode(cheader_filename = "cursor.h,color.h", cprefix = "", lower_case_cprefix = "")]
namespace Console
{
  [CCode(cname = "set_cursor_x")]
  void set_cursor_x(int x);

  [CCode(cname = "set_cursor_y")]
  void set_cursor_y(int y);

  [CCode(cname = "set_cursor_position")]
  void set_cursor_position(int x, int y);

  [CCode(cname = "get_cursor_x")]
  int get_cursor_x();

  [CCode(cname = "get_cursor_y")]
  int get_cursor_y();

  [CCode(cname = "console_clear")]
  void clear();

  [CCode (cname = "console_color", has_type_id = false, cprefix = "", lower_case_cprefix = "")]
  enum color
  {
    BLACK,
    DARK_RED,
    DARK_GREEN,
    DARK_YELLOW,
    DARK_BLUE,
    DARK_MAGENTA,
    DARK_CYAN,
    DARK_GREY,
    WHITE,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    GREY
  }

  [CCode(cname = "set_foreground")]
  void set_foreground_color(color c);

  [CCode(cname = "set_background")]
  void set_background_color(color c);

  [CCode(cname = "get_foreground")]
  color get_foreground_color();

  [CCode(cname = "get_background")]
  color get_background_color();

  [CCode(cname = "reset_colors")]
  void reset_colors();

  [CCode(cname = "console_write")]
  void write(string str);

  [CCode(cname = "console_write_line")]
  void write_line(string str);
}
