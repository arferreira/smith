#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

namespace fs = std::filesystem;

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "Usage: " << arg[0] << " ProjectName" << std::endl;
    return 1;
  }

  std::string project = argv[1];
  fs::create_directories(project + "/src");

  // copy template files to project
  fs::copy_file("templates/main.cpp", project + "/src/main.cpp", fs::copy_options::overwrite_existing);
  fs::copy_file("templates/CMakeLists.txt", project + "/CMakeLists.txt", fs::copy_options::overwrite_existing);

  std::cout << "Project created successfully: " << project << std::endl;


  return 0;
}
