#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
    if (vec.size() > 5) {  //example maintaining the vector's size 
        vec.erase(vec.begin());
    }
  }
  std::cout << "Size of the vector: " << vec.size() << std::endl; //Correct Size
  return 0;
} 