//  This file is part of Systematics Normalization
//  Copyright (C) Abigail Wilson, 2020.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "base/vector.h"
#include "config/command_line.h"

#include "../example.h"

// This is the main function for the NATIVE version of Systematics Normalization.

int main(int argc, char* argv[])
{
  emp::vector<std::string> args = emp::cl::args_to_strings(argc, argv);

  std::cout << "Hello, world!" << std::endl;

  return example();
}
