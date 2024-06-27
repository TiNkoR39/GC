#include "Solver.cpp"



int main(){

    Parser p;

    std::string filename = "gc_70_9";
    p.parse(filename);

    Solver s(p.get_N(), p.get_M(), p.get_edges());

    std::vector<int> colors = s.colorize();

    for(int i = 0; i < colors.size(); i++) std::cout << colors[i] << " ";

    return 0;
}


