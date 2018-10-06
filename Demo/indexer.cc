#include "structure/postings.h"

#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Usage: ./inverted_index_main in_folder out_folder" << std::endl;
    return 1;
  }
  BuildPostingTermVector(argv[1], argv[2]);
  return 0;
}