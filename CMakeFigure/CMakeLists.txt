# CMakeList.txt: проект CMake для CMakeFigure; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeFigure "CMakeFigure.cpp" "CMakeFigure.h" "FiguresCpp.cpp" "FiguresH.h" "Triangle.cpp" "Triangle.h" "Quadrilateral.cpp" "Quadrilateral.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeFigure PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
