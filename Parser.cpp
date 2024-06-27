#include "Parser.h"


std::vector<std::vector<int>> Parser::get_edges(){return edges;}

int Parser::get_N(){return N;}

int Parser::get_M(){return M;}

void Parser::parse(std::string filename){
    std::ifstream File(filename);

    if(!File.is_open()) {
        std::cout << "can not read file" << std::endl;
        return;
    }

    File >> N;
    File >> M;
    edges.resize(N);
    int start, end;
    for(int i = 0; i<M; i++){
        File >> start;
        File >> end;
        edges[start].push_back(end);
        edges[end].push_back(start);
    }

    File.close();
    return;
}