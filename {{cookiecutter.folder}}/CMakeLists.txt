cmake_minimum_required(VERSION 3.13...3.19 FATAL_ERROR)
project({{cookiecutter.project}} VERSION {{cookiecutter.version}} LANGUAGES CXX)
add_executable({{cookiecutter.executable}} main.cpp)

target_compile_options({{cookiecutter.executable}} PRIVATE -Wall -Wextra -Werror -Wpedantic)
target_compile_features({{cookiecutter.executable}} PRIVATE cxx_std_{{cookiecutter.cpp_standard}})
set_target_properties({{cookiecutter.executable}}
    PROPERTIES
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
)

{% for package, details in cookiecutter.libraries|dictsort %}
find_package({{package}} {{details.version}} REQUIRED COMPONENTS {{details.components | join(' ')}})
target_link_libraries({{cookiecutter.executable}} PRIVATE {{package}}::{{details.components | join(" " + package + "::")}}) 
{% endfor %}
