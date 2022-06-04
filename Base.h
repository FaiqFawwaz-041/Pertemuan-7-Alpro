#include <iostream>
using namespace std;

struct mahasiswa{
  string nama;
  int nim;
};

class BaseProject{
public:
  void input();
  void proses();
  void output();
private:
  mahasiswa mhs[10];
  mahasiswa urut[10];
};
