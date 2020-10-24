#include <bits/stdc++.h>
#include "node.h"
#define par std::pair<char[25],node[6]>

class Page { 
private: 
    par m_Reg[20];
    int m_size; 
    int m_current;
    unsigned long m_pNext; 
public: 
    Page(){}
    void setSize(int size); 
    void Write(std::ofstream &file); 
    void Read(std::ifstream &file); 
    void insert(int pos,par data);
}; 