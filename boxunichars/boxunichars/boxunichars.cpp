//////////////////////////////////////////////////
// Box Unicode Characters - Print all the box   //
// characters with their corresponding alt and  //
// hexadecimal codes.                           //
// © 2023 Ian Pride - New Pride Software /      //
// Services                                     //
//////////////////////////////////////////////////
#include "Globals.h"
#include <Windows.h>
#include <iostream>
#include "resource.h"
#include <chrono>
#include <thread>
#include "BoxUniCharsLib.h"
#include "BoxUniCharsRegex.h"

void parse_args(int argc, const char* argv[], bool &mode, BoxUniCharsLib &box, std::string &boxOutput)
{
  const std::vector<std::string> args(argv + 1, argv + argc);
  for (const std::string arg : args)
  {
    if (std::regex_match(arg, BoxUniCharsRegex::HELP))
    {
      const std::string HELPMESSAGE =
        "\n"
        "Box Unicode Characters - Print all box characters\n"
        "                         with their corresponding\n"
        "                         alt and hexadecimal codes.\n"
        "\n"
        "boxunichars   [/? | /h | /help] | [/a | /all] |\n"
        "  [/z | /horizonatal] | [/v | /vertical]\n"
        "  [/s | /single] | [/d | /double]\n"
        "  [/sd | /singledouble] | [/ds | /doublesingle]\n"
        "  [/x | /hexadecimal] | [/l | /alt]\n"
        "\n"
        "  The user can use as many of these display switches\n"
        "  as they like and they can change the code mode (alt\n"
        "  or hexadecimal) of each by providing either the\n"
        "  /l, /alt, /x, or /hexadecimal switches before each\n"
        "  display switch. The last provided code mode will be\n"
        "  be used if none is provided (defaulting to alt\n"
        "  mode)\n"
        "\n"
        "  /a, /all            Display all types in a square.\n"
        "                      This is the default.\n"
        "  /z, /horizontal     Display all types horizontally.\n"
        "  /v, /vertical       Display all types vertically.\n"
        "  /s, /single         Display single type.\n"
        "  /d, /double         Display double type.\n"
        "  /sd, /singledouble  Display single vertical double\n"
        "                      horizontal type.\n"
        "  /ds, /doublesingle  Display double vertical single\n"
        "                      horizontal type.\n"
        "  /x, /hexadecimal    Values displayed in hexadecimal\n"
        "                      code format.\n"
        "  /l, /alt            Values displayed in alt code\n"
        "                      format. This is the default,\n"
        "\n";
      std::cout << HELPMESSAGE;
      WaitCheck();
      std::exit(EXIT_SUCCESS);    }
    if (std::regex_match(arg, BoxUniCharsRegex::ALT))
    {
      mode = true;
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::HEXADECIMAL))
    {
      mode = false;
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::ALL))
    {
      box.SetAllDefault(mode);
      boxOutput.append(box.Default());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::HORZ))
    {
      box.SetAllHorz(mode);
      boxOutput.append(box.Horizontal());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::VERT))
    {
      box.SetAllVert(mode);
      boxOutput.append(box.Vertical());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::SINGLE))
    {
      box.SetSingle(mode);
      boxOutput.append(box.Single());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::DOUBLE))
    {
      box.SetDouble(mode);
      boxOutput.append(box.Double());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::SINGLEDOUBLE))
    {
      box.SetSingleDouble(mode);
      boxOutput.append(box.SingleVerticalDoubleHorizontal());
      continue;
    }
    if (std::regex_match(arg, BoxUniCharsRegex::DOUBLESINGLE))
    {
      box.SetDoubleSingle(mode);
      boxOutput.append(box.DoubleVerticalSingleHorizontal());
      continue;
    }
  }
}

int main(int argc, const char* argv[])
{
  HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
  SetConsoleMode(hInput, ENABLE_VIRTUAL_TERMINAL_INPUT);
  HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleMode(hOutput, ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleTitleW(L"Box Unicode Characters");
  std::this_thread::sleep_for(std::chrono::milliseconds(50));
  const HINSTANCE hInstance = GetModuleHandleW(NULL);
  const HICON hIcon = LoadIconW(hInstance, MAKEINTRESOURCE(IDI_ICON2));
  if (hIcon)
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    const HWND HWND_ = GetConsoleWindow();
    if (HWND_ != NULL)
    {
      SendMessageW(HWND_, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
    }
  }
  bool mode = true; // alt
  BoxUniCharsLib box;
  std::string boxOutput;
  if (argc > 1)
  {
    parse_args(argc, argv, mode, box, boxOutput);
  }
  if (boxOutput.empty())
  {
    box.SetAllDefault(mode);
    boxOutput.append(box.Default());
  }
  std::cout << boxOutput;
  WaitCheck();
  return EXIT_SUCCESS;
}