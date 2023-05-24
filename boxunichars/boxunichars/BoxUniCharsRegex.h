#pragma once
#ifndef BOXUNICHARSREGEX_H
#define BOXUNICHARSREGEX_H
#include <regex>
namespace BoxUniCharsRegex
{
  const std::regex HELP         = std::regex("^/([\?]|[hH]|[hH][eE][lL][pP])$");
  const std::regex ALL          = std::regex("^/([aA]|[aA][lL][lL])$");
  const std::regex HORZ         = std::regex("^/([zZ]|[hH][oO][rR][iI][zZ][oO][nN][tT][aA][lL])$");
  const std::regex VERT         = std::regex("^/([vV]|[vV][eE][rR][tT][iI][cC][aA][lL])$");
  const std::regex SINGLE       = std::regex("^/([sS]|[sS][iI][nN][gG][lL][eE])$");
  const std::regex DOUBLE       = std::regex("^/([dD]|[dD][oO][uU][bB][lL][eE])$");
  const std::regex SINGLEDOUBLE = std::regex("^/([sS][dD]|[sS][iI][nN][gG][lL][eE][dD][oO][uU][bB][lL][eE])$");
  const std::regex DOUBLESINGLE = std::regex("^/([dD][sS]|[dD][oO][uU][bB][lL][eE][sS][iI][nN][gG][lL][eE])$");
  const std::regex HEXADECIMAL  = std::regex("^/([xX]|[hH][eE][xX][aA][dD][eE][cC][iI][mM][aA][lL])$");
  const std::regex ALT          = std::regex("^/([lL]|[aA][lL][tT])$");
};
#endif // !BOXUNICHARSREGEX_H