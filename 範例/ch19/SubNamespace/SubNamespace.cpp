#include <cstdlib>
#include <iostream>

using namespace std;
namespace IBM{
  namespace Taiwan {           // 子命名空間 Taiwan
      class Notebook {

      };
 }
  namespace Japan {            // 子命名空間 Japan
      class Notebook {

      };
  }
}

namespace Compaq{
  class Notebook {

  };
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  IBM::Taiwan::Notebook A ;
  IBM::Japan::Notebook B ;
  Compaq::Notebook C ; 
  system("PAUSE");

  return 0;
}
