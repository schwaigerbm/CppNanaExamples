# CMakeList.txt: CMake-Projekt f�r "Examples". Schlie�en Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)


find_package(unofficial-nana CONFIG REQUIRED)


# F�gen Sie der ausf�hrbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (02-Menu "02-Menu.cpp" )
target_link_libraries(02-Menu PRIVATE unofficial::nana::nana)
# TODO: F�gen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.