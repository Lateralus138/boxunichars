#include "BoxUniCharsLib.h"
void BoxUniCharsLib::SetModeSingle(bool mode)
{
  single_top_left_corner = ((mode) ? " 218" : "250C");
  single_top_middle = ((mode) ? " 194" : "252C");
  single_top_right_corner = ((mode) ? " 191" : "2510");
  single_horizontal = ((mode) ? " 196" : "2500");
  single_left_middle = ((mode) ? " 195" : "251C");
  single_middle = ((mode) ? " 197" : "253C");
  single_vertical = ((mode) ? " 179" : "2502");
  single_right_middle = ((mode) ? " 180" : "2524");
  single_bottom_left_corner = ((mode) ? " 192" : "2514");
  single_bottom_middle = ((mode) ? " 193" : "2534");
  single_bottom_right_corner = ((mode) ? " 217" : "2518");
}
void BoxUniCharsLib::SetModeDouble(bool mode)
{
  double_top_left_corner = ((mode) ? " 201" : "2554");
  double_top_middle = ((mode) ? " 203" : "2566");
  double_top_right_corner = ((mode) ? " 187" : "2557");
  double_horizontal = ((mode) ? " 205" : "2550");
  double_left_middle = ((mode) ? " 204" : "2560");
  double_middle = ((mode) ? " 206" : "256C");
  double_vertical = ((mode) ? " 186" : "2551");
  double_right_middle = ((mode) ? " 185" : "2563");
  double_bottom_left_corner = ((mode) ? " 200" : "255A");
  double_bottom_middle = ((mode) ? " 202" : "2569");
  double_bottom_right_corner = ((mode) ? " 188" : "255D");
}
void BoxUniCharsLib::SetModeSingleDouble(bool mode)
{
  single_vert_double_horz_vertical = ((mode) ? " 179" : "2502");
  single_vert_double_horz_horizontal = ((mode) ? " 205" : "2550");
  single_vert_double_horz_top_left_corner = ((mode) ? " 213" : "2552");
  single_vert_double_horz_top_middle = ((mode) ? " 209" : "2564");
  single_vert_double_horz_top_right_corner = ((mode) ? " 184" : "2555");
  single_vert_double_horz_left_middle = ((mode) ? " 198" : "255E");
  single_vert_double_horz_middle = ((mode) ? " 216" : "256A");
  single_vert_double_horz_right_middle = ((mode) ? " 181" : "2561");
  single_vert_double_horz_bottom_left_corner = ((mode) ? " 212" : "2558");
  single_vert_double_horz_bottom_middle = ((mode) ? " 207" : "2567");
  single_vert_double_horz_bottom_right_corner = ((mode) ? " 190" : "255B");
}
void BoxUniCharsLib::SetModeDoubleSingle(bool mode)
{
  double_vert_single_horz_vertical = ((mode) ? " 186" : "2551");
  double_vert_single_horz_horizontal = ((mode) ? " 196" : "2500");
  double_vert_single_horz_top_left_corner = ((mode) ? " 214" : "2553");
  double_vert_single_horz_top_middle = ((mode) ? " 210" : "2565");
  double_vert_single_horz_top_right_corner = ((mode) ? " 183" : "2556");
  double_vert_single_horz_left_middle = ((mode) ? " 199" : "255F");
  double_vert_single_horz_middle = ((mode) ? " 215" : "256B");
  double_vert_single_horz_right_middle = ((mode) ? " 182" : "2562");
  double_vert_single_horz_bottom_left_corner = ((mode) ? " 211" : "2559");
  double_vert_single_horz_bottom_middle = ((mode) ? " 208" : "2568");
  double_vert_single_horz_bottom_right_corner = ((mode) ? " 189" : "255C");
}

void BoxUniCharsLib::SetAllDefault(bool mode)
{
  SetCaption(mode);
  SetModeSingle(mode);
  SetModeDouble(mode);
  SetModeSingleDouble(mode);
  SetModeDoubleSingle(mode);
  BOXUNICHARS_ALL_DEFAULT =
    u8"┌───────────────────────────────────────────────────────────────────────┐"
    u8"\n│                         Box Unicode Characters                        │"
    u8"\n├───────────────────────────────────┬───────────────────────────────────┤"
    u8"\n│ ╔═╦═╗                             │ ╒═╤═╕                             │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╠═╬═╣          " + caption + u8"          │ ╞═╪═╡          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╚═╩═╝                             │ ╘═╧═╛                             │"
    u8"\n│ "
    + double_top_left_corner
    + u8" ╔ "
    + double_horizontal
    + u8" ═ "
    + double_top_middle
    + u8" ╦ "
    + double_horizontal
    + u8" ═ "
    + double_top_right_corner
    + u8" ╗│ "
    + single_vert_double_horz_top_left_corner
    + u8" ╒ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_middle
    + u8" ╤ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_right_corner
    + u8" ╕│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_left_middle
    + u8" ╠ "
    + double_horizontal
    + u8" ═ "
    + double_middle
    + u8" ╬ "
    + double_horizontal
    + u8" ═ "
    + double_right_middle
    + u8" ╣│ "
    + single_vert_double_horz_left_middle
    + u8" ╞ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_middle
    + u8" ╪ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_right_middle
    + u8" ╡│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_bottom_left_corner
    + u8" ╚ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_middle
    + u8" ╩ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_right_corner
    + u8" ╝│ "
    + single_vert_double_horz_bottom_left_corner
    + u8" ╘ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_middle
    + u8" ╧ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_right_corner
    + u8" ╛│"
    u8"\n├───────────────────────────────────┼───────────────────────────────────┤"
    u8"\n│ ╓─╥─╖                             │ ┌─┬─┐                             │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╟─╫─╢          " + caption + u8"          │ ├─┼─┤          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╙─╨─╜                             │ └─┴─┘                             │"
    u8"\n│ "
    + double_vert_single_horz_top_left_corner
    + u8" ╓ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_middle
    + u8" ╥ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_right_corner
    + u8" ╖│ "
    + single_top_left_corner
    + u8" ┌ "
    + single_horizontal
    + u8" ─ "
    + single_top_middle
    + u8" ┬ "
    + single_horizontal
    + u8" ─ "
    + single_top_right_corner
    + u8" ┐│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_vert_single_horz_left_middle
    + u8" ╟ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_middle
    + u8" ╫ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_right_middle
    + u8" ╢│ "
    + single_left_middle
    + u8" ├ "
    + single_horizontal
    + u8" ─ "
    + single_middle
    + u8" ┼ "
    + single_horizontal
    + u8" ─ "
    + single_right_middle
    + u8" ┤│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_vert_single_horz_bottom_left_corner
    + u8" ╙ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_middle
    + u8" ╨ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_right_corner
    + u8" ╜│ "
    + single_bottom_left_corner
    + u8" └ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_middle
    + u8" ┴ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_right_corner
    + u8" ┘│"
    u8"\n└───────────────────────────────────┴───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetAllHorz(bool mode)
{
  SetCaption(mode);
  SetModeSingle(mode);
  SetModeDouble(mode);
  SetModeSingleDouble(mode);
  SetModeDoubleSingle(mode);
  BOXUNICHARS_ALL_HORZ =
    u8"┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐"
    u8"\n│                                                           Box Unicode Characters                                                              │"
    u8"\n├───────────────────────────────────┬───────────────────────────────────┬───────────────────────────────────┬───────────────────────────────────┤"
    u8"\n│ ╔═╦═╗                             │ ╒═╤═╕                             │ ╓─╥─╖                             │ ┌─┬─┐                             │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╠═╬═╣          " + caption + u8"          │ ╞═╪═╡          " + caption + u8"          │ ╟─╫─╢          " + caption + u8"          │ ├─┼─┤          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │ │ │ │                             │ ║ ║ ║                             │ │ │ │                             │"
    u8"\n│ ╚═╩═╝                             │ ╘═╧═╛                             │ ╙─╨─╜                             │ └─┴─┘                             │"
    u8"\n│ "
    + double_top_left_corner
    + u8" ╔ "
    + double_horizontal
    + u8" ═ "
    + double_top_middle
    + u8" ╦ "
    + double_horizontal
    + u8" ═ "
    + double_top_right_corner
    + u8" ╗│ "
    + single_vert_double_horz_top_left_corner
    + u8" ╒ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_middle
    + u8" ╤ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_right_corner
    + u8" ╕│ "
    + double_vert_single_horz_top_left_corner
    + u8" ╓ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_middle
    + u8" ╥ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_right_corner
    + u8" ╖│ "
    + single_top_left_corner
    + u8" ┌ "
    + single_horizontal
    + u8" ─ "
    + single_top_middle
    + u8" ┬ "
    + single_horizontal
    + u8" ─ "
    + single_top_right_corner
    + u8" ┐│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_left_middle
    + u8" ╠ "
    + double_horizontal
    + u8" ═ "
    + double_middle
    + u8" ╬ "
    + double_horizontal
    + u8" ═ "
    + double_right_middle
    + u8" ╣│ "
    + single_vert_double_horz_left_middle
    + u8" ╞ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_middle
    + u8" ╪ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_right_middle
    + u8" ╡│ "
    + double_vert_single_horz_left_middle
    + u8" ╟ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_middle
    + u8" ╫ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_right_middle
    + u8" ╢│ "
    + single_left_middle
    + u8" ├ "
    + single_horizontal
    + u8" ─ "
    + single_middle
    + u8" ┼ "
    + single_horizontal
    + u8" ─ "
    + single_right_middle
    + u8" ┤│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + double_bottom_left_corner
    + u8" ╚ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_middle
    + u8" ╩ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_right_corner
    + u8" ╝│ "
    + single_vert_double_horz_bottom_left_corner
    + u8" ╘ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_middle
    + u8" ╧ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_right_corner
    + u8" ╛│ "
    + double_vert_single_horz_bottom_left_corner
    + u8" ╙ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_middle
    + u8" ╨ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_right_corner
    + u8" ╜│ "
    + single_bottom_left_corner
    + u8" └ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_middle
    + u8" ┴ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_right_corner
    + u8" ┘│"
    u8"\n└───────────────────────────────────┴───────────────────────────────────┴───────────────────────────────────┴───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetAllVert(bool mode)
{
  SetCaption(mode);
  SetModeSingle(mode);
  SetModeDouble(mode);
  SetModeSingleDouble(mode);
  SetModeDoubleSingle(mode);
  BOXUNICHARS_ALL_VERT =
    u8"┌───────────────────────────────────┐"
    u8"\n│      Box Unicode Characters       │"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╔═╦═╗                             │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╠═╬═╣          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╚═╩═╝                             │"
    u8"\n│ "
    + double_top_left_corner
    + u8" ╔ "
    + double_horizontal
    + u8" ═ "
    + double_top_middle
    + u8" ╦ "
    + double_horizontal
    + u8" ═ "
    + double_top_right_corner
    + u8" ╗│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_left_middle
    + u8" ╠ "
    + double_horizontal
    + u8" ═ "
    + double_middle
    + u8" ╬ "
    + double_horizontal
    + u8" ═ "
    + double_right_middle
    + u8" ╣│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_bottom_left_corner
    + u8" ╚ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_middle
    + u8" ╩ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_right_corner
    + u8" ╝│"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╒═╤═╕                             │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ╞═╪═╡          " + caption + u8"          │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ╘═╧═╛                             │"
    u8"\n│ "
    + single_vert_double_horz_top_left_corner
    + u8" ╒ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_middle
    + u8" ╤ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_right_corner
    + u8" ╕│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_vert_double_horz_left_middle
    + u8" ╞ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_middle
    + u8" ╪ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_right_middle
    + u8" ╡│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_vert_double_horz_bottom_left_corner
    + u8" ╘ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_middle
    + u8" ╧ "
    + double_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_right_corner
    + u8" ╛│"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╓─╥─╖                             │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╟─╫─╢          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╙─╨─╜                             │"
    u8"\n│ "
    + double_vert_single_horz_top_left_corner
    + u8" ╓ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_middle
    + u8" ╥ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_right_corner
    + u8" ╖│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_vert_single_horz_left_middle
    + u8" ╟ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_middle
    + u8" ╫ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_right_middle
    + u8" ╢│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_vert_single_horz_bottom_left_corner
    + u8" ╙ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_middle
    + u8" ╨ "
    + single_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_right_corner
    + u8" ╜│"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ┌─┬─┐                             │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ├─┼─┤          " + caption + u8"          │"
    u8"\n│ │ │ │                             │"
    u8"\n│ └─┴─┘                             │"
    u8"\n│ "
    + single_top_left_corner
    + u8" ┌ "
    + single_horizontal
    + u8" ─ "
    + single_top_middle
    + u8" ┬ "
    + single_horizontal
    + u8" ─ "
    + single_top_right_corner
    + u8" ┐│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_left_middle
    + u8" ├ "
    + single_horizontal
    + u8" ─ "
    + single_middle
    + u8" ┼ "
    + single_horizontal
    + u8" ─ "
    + single_right_middle
    + u8" ┤│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_bottom_left_corner
    + u8" └ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_middle
    + u8" ┴ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_right_corner
    + u8" ┘│"
    u8"\n└───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetSingle(bool mode)
{
  SetCaption(mode);
  SetModeSingle(mode);
  BOXUNICHARS_SINGLE_SINGLE =
    u8"┌───────────────────────────────────┐"
    u8"\n│      Box Unicode Characters       │"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ┌─┬─┐                             │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ├─┼─┤          " + caption + u8"          │"
    u8"\n│ │ │ │                             │"
    u8"\n│ └─┴─┘                             │"
    u8"\n│ "
    + single_top_left_corner
    + u8" ┌ "
    + single_horizontal
    + u8" ─ "
    + single_top_middle
    + u8" ┬ "
    + single_horizontal
    + u8" ─ "
    + single_top_right_corner
    + u8" ┐│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_left_middle
    + u8" ├ "
    + single_horizontal
    + u8" ─ "
    + single_middle
    + u8" ┼ "
    + single_horizontal
    + u8" ─ "
    + single_right_middle
    + u8" ┤│"
    u8"\n│ "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" │        "
    + single_vertical
    + u8" ││"
    u8"\n│ "
    + single_bottom_left_corner
    + u8" └ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_middle
    + u8" ┴ "
    + single_horizontal
    + u8" ─ "
    + single_bottom_right_corner
    + u8" ┘│"
    u8"\n└───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetDouble(bool mode)
{
  SetCaption(mode);
  SetModeDouble(mode);
  BOXUNICHARS_SINGLE_DOUBLE =
    u8"┌───────────────────────────────────┐"
    u8"\n│      Box Unicode Characters       │"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╔═╦═╗                             │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╠═╬═╣          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╚═╩═╝                             │"
    u8"\n│ "
    + double_top_left_corner
    + u8" ╔ "
    + double_horizontal
    + u8" ═ "
    + double_top_middle
    + u8" ╦ "
    + double_horizontal
    + u8" ═ "
    + double_top_right_corner
    + u8" ╗│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_left_middle
    + u8" ╠ "
    + double_horizontal
    + u8" ═ "
    + double_middle
    + u8" ╬ "
    + double_horizontal
    + u8" ═ "
    + double_right_middle
    + u8" ╣│"
    u8"\n│ "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║        "
    + double_vertical
    + u8" ║│"
    u8"\n│ "
    + double_bottom_left_corner
    + u8" ╚ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_middle
    + u8" ╩ "
    + double_horizontal
    + u8" ═ "
    + double_bottom_right_corner
    + u8" ╝│"
    u8"\n└───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetSingleDouble(bool mode)
{
  SetCaption(mode);
  SetModeSingleDouble(mode);
  BOXUNICHARS_SINGLE_SINGLE_VERT_DOUBLE_HORZ =
    u8"┌───────────────────────────────────┐"
    u8"\n│      Box Unicode Characters       │"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╒═╤═╕                             │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ╞═╪═╡          " + caption + u8"          │"
    u8"\n│ │ │ │                             │"
    u8"\n│ ╘═╧═╛                             │"
    u8"\n│ "
    + single_vert_double_horz_top_left_corner
    + u8" ╒ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_middle
    + u8" ╤ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_top_right_corner
    + u8" ╕│"
    u8"\n│ "
    + single_vert_double_horz_vertical
    + u8" │        "
    + single_vert_double_horz_vertical
    + u8" │        "
    + single_vert_double_horz_vertical
    + u8" ││"
    u8"\n│ "
    + single_vert_double_horz_left_middle
    + u8" ╞ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_middle
    + u8" ╪ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_right_middle
    + u8" ╡│"
    u8"\n│ "
    + single_vert_double_horz_vertical
    + u8" │        "
    + single_vert_double_horz_vertical
    + u8" │        "
    + single_vert_double_horz_vertical
    + u8" ││"
    u8"\n│ "
    + single_vert_double_horz_bottom_left_corner
    + u8" ╘ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_middle
    + u8" ╧ "
    + single_vert_double_horz_horizontal
    + u8" ═ "
    + single_vert_double_horz_bottom_right_corner
    + u8" ╛│"
    u8"\n└───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetDoubleSingle(bool mode)
{
  SetCaption(mode);
  double_vertical = ((mode) ? " 186" : "2551");
  SetModeDoubleSingle(mode);
  BOXUNICHARS_SINGLE_DOUBLE_VERT_SINGLE_HORZ =
    u8"┌───────────────────────────────────┐"
    u8"\n│      Box Unicode Characters       │"
    u8"\n├───────────────────────────────────┤"
    u8"\n│ ╓─╥─╖                             │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╟─╫─╢          " + caption + u8"          │"
    u8"\n│ ║ ║ ║                             │"
    u8"\n│ ╙─╨─╜                             │"
    u8"\n│ "
    + double_vert_single_horz_top_left_corner
    + u8" ╓ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_middle
    + u8" ╥ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_top_right_corner
    + u8" ╖│"
    u8"\n│ "
    + double_vert_single_horz_vertical
    + u8" ║        "
    + double_vert_single_horz_vertical
    + u8" ║        "
    + double_vert_single_horz_vertical
    + u8" ║│"
    u8"\n│ "
    + double_vert_single_horz_left_middle
    + u8" ╟ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_middle
    + u8" ╫ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_right_middle
    + u8" ╢│"
    u8"\n│ "
    + double_vert_single_horz_vertical
    + u8" ║        "
    + double_vert_single_horz_vertical
    + u8" ║        "
    + double_vert_single_horz_vertical
    + u8" ║│"
    u8"\n│ "
    + double_vert_single_horz_bottom_left_corner
    + u8" ╙ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_middle
    + u8" ╨ "
    + double_vert_single_horz_horizontal
    + u8" ─ "
    + double_vert_single_horz_bottom_right_corner
    + u8" ╜│"
    u8"\n└───────────────────────────────────┘\n";
}
void BoxUniCharsLib::SetCaption(bool mode)
{
  caption = ((mode) ? "Alt Codes" : "Hex Codes");
}
void BoxUniCharsLib::SetAll(bool mode)
{
  SetModeSingle(mode);
  SetModeDouble(mode);
  SetModeSingleDouble(mode);
  SetModeDoubleSingle(mode);
  SetAllDefault(mode);
  SetAllHorz(mode);
  SetAllVert(mode);
  SetSingle(mode);
  SetDouble(mode);
  SetSingleDouble(mode);
  SetDoubleSingle(mode);
}
std::string BoxUniCharsLib::Default()
{
  return BOXUNICHARS_ALL_DEFAULT;
}
std::string BoxUniCharsLib::Horizontal()
{
  return BOXUNICHARS_ALL_HORZ;
}
std::string BoxUniCharsLib::Vertical()
{
  return BOXUNICHARS_ALL_VERT;
}
std::string BoxUniCharsLib::SingleVerticalDoubleHorizontal()
{
  return BOXUNICHARS_SINGLE_SINGLE_VERT_DOUBLE_HORZ;
}
std::string BoxUniCharsLib::DoubleVerticalSingleHorizontal()
{
  return BOXUNICHARS_SINGLE_DOUBLE_VERT_SINGLE_HORZ;
}
std::string BoxUniCharsLib::Single()
{
  return BOXUNICHARS_SINGLE_SINGLE;
}
std::string BoxUniCharsLib::Double()
{
  return BOXUNICHARS_SINGLE_DOUBLE;
}