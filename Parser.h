#include <fstream>
#include <iostream>
#include <string>
#include <vector>



class Parser{
    int N, M;
    std::vector<std::vector<int>> edges;

public:
    void parse(std::string filename);
    int get_N();
    int get_M();
    std::vector<std::vector<int>> get_edges();

};






