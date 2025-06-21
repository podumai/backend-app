#include "sub_handlers/hello_function.hpp"

#include <fmt/format.h>

namespace auth::hello
{

std::string helloFunction(std::string_view name)
{
  if (name.empty())
  {
    name = "unknown user";
  }
  return fmt::format("Hello to {}!", name);
}

} /* End namespace auth::hello */