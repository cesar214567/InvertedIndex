#include "Page.h"

    void Page::Write(std::ofstream &file){
        file.write((char*)this,sizeof(this));
    } 
    void Page::Read(std::ifstream &file){
        file.read((char*)this,sizeof(this));
    }
    void Page::insert(int pos,par data){
        m_Reg[pos]=data;
    }
    void Page::setSize(int size){
        m_size=size;
    };
