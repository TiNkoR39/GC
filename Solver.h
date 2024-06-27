#include "Parser.cpp"

bool cmp(std::vector<std::vector<int>> edges1, std::vector<std::vector<int>> edges2);

class Solver{
    int N,M;
    std::vector<std::vector<int>> edges;
public:
    Solver(int, int, std::vector<std::vector<int>>);
    std::vector<int> colorize();
};