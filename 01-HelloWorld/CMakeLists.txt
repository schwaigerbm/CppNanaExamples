# CMakeList.txt: CMake-Projekt f�r "Examples". Schlie�en Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)


find_package(unofficial-nana CONFIG REQUIRED)


# F�gen Sie der ausf�hrbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (01-HelloWorld "01-HelloWorld.cpp" "01-HelloWorld.h")
target_link_libraries(01-HelloWorld PRIVATE unofficial::nana::nana)
# TODO: F�gen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.