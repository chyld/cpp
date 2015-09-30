#include <iostream>
#include <vector>

namespace primitives{
  void fun_vectors(){
    std::vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    auto b = v.begin();
    for(; b != v.end();b++)
      std::cout << "yo" << *b << std::endl;
  }





  void list_sizes(){
    char c = 'a';
    int i = 3;
    bool b = true;
    long l = 4;
    float f = 3.14;
    double d = 1.684;

    size_t sc = sizeof(c);
    size_t si = sizeof(i);
    size_t sb = sizeof(b);
    size_t sl = sizeof(l);
    size_t sf = sizeof(f);
    size_t sd = sizeof(d);

    std::cout << sc << " - " << si << " - " << sb << std::endl;
    std::cout << sl << " - " << sf << " - " << sd << std::endl;
  }
}
