{% if cookiecutter.license != "No License" %} /* Copyright (c) {% now 'utc', '%Y' %}, {{ cookiecutter.author_name }}. License: {{ cookiecutter.license }} */ {% endif %}
#include <iostream>
#include <algorithm>
#include <iterator>

int main(int argc, char *argv[]) {
  std::copy(argv + 1, argv + argc, std::ostream_iterator<std::string>(std::cout, " "));
  return 0;
}
