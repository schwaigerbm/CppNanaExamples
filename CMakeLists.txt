# CMakeList.txt: CMake-Projektdatei der obersten Ebene. Führen Sie hier die globale Konfiguration aus,
# und schließen Sie Unterprojekte ein.
#
cmake_minimum_required (VERSION 3.8)

project ("01-HelloWorld")
project ("Examples")


# Schließen Sie Unterprojekte ein.
add_subdirectory ("01-HelloWorld")
add_subdirectory ("Examples")
