#include <iostream>
// namespaces podem armezenar entidades com valores difirentes
namespace uploader{
    std::string base = "b3";
}

int main(){
    using namespace uploader; // é como usar o from import do python, porém sem ter que especificar o que estamos importando

    std::cout<<"base: "<<base<<std::endl;
    return 0;
};