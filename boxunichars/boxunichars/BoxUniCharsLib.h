#pragma once
#ifndef BOXUNICHARSLIB_H
#define BOXUNICHARSLIB_H
#include <string>
class BoxUniCharsLib
{
private:
  std::string BOXUNICHARS_ALL_DEFAULT;
  std::string BOXUNICHARS_ALL_HORZ;
  std::string BOXUNICHARS_ALL_VERT;
  std::string BOXUNICHARS_SINGLE_SINGLE_VERT_DOUBLE_HORZ;
  std::string BOXUNICHARS_SINGLE_DOUBLE_VERT_SINGLE_HORZ;
  std::string BOXUNICHARS_SINGLE_SINGLE;
  std::string BOXUNICHARS_SINGLE_DOUBLE;
  std::string single_top_left_corner;
  std::string single_top_middle;
  std::string single_top_right_corner;
  std::string single_horizontal;
  std::string single_left_middle;
  std::string single_middle;
  std::string single_vertical;
  std::string single_right_middle;
  std::string single_bottom_left_corner;
  std::string single_bottom_middle;
  std::string single_bottom_right_corner;
  std::string double_top_left_corner;
  std::string double_top_middle;
  std::string double_top_right_corner;
  std::string double_horizontal;
  std::string double_left_middle;
  std::string double_middle;
  std::string double_vertical;
  std::string double_right_middle;
  std::string double_bottom_left_corner;
  std::string double_bottom_middle;
  std::string double_bottom_right_corner;
  std::string single_vert_double_horz_vertical;
  std::string single_vert_double_horz_horizontal;
  std::string single_vert_double_horz_top_left_corner;
  std::string single_vert_double_horz_top_middle;
  std::string single_vert_double_horz_top_right_corner;
  std::string single_vert_double_horz_left_middle;
  std::string single_vert_double_horz_middle;
  std::string single_vert_double_horz_right_middle;
  std::string single_vert_double_horz_bottom_left_corner;
  std::string single_vert_double_horz_bottom_middle;
  std::string single_vert_double_horz_bottom_right_corner;
  std::string double_vert_single_horz_vertical;
  std::string double_vert_single_horz_horizontal;
  std::string double_vert_single_horz_top_left_corner;
  std::string double_vert_single_horz_top_middle;
  std::string double_vert_single_horz_top_right_corner;
  std::string double_vert_single_horz_left_middle;
  std::string double_vert_single_horz_middle;
  std::string double_vert_single_horz_right_middle;
  std::string double_vert_single_horz_bottom_left_corner;
  std::string double_vert_single_horz_bottom_middle;
  std::string double_vert_single_horz_bottom_right_corner;
  std::string caption;
public:
  void SetAll(bool mode);
  void SetAllDefault(bool mode);
  void SetAllHorz(bool mode);
  void SetAllVert(bool mode);
  void SetSingle(bool mode);
  void SetDouble(bool mode);
  void SetSingleDouble(bool mode);
  void SetDoubleSingle(bool mode);
  void SetModeSingle(bool mode);
  void SetModeDouble(bool mode);
  void SetModeSingleDouble(bool mode);
  void SetModeDoubleSingle(bool mode);
  void SetCaption(bool mode);
  std::string Default();
  std::string Horizontal();
  std::string Vertical();
  std::string SingleVerticalDoubleHorizontal();
  std::string DoubleVerticalSingleHorizontal();
  std::string Single();
  std::string Double();
};
#endif // !BOXUNICHARSLIB_H
