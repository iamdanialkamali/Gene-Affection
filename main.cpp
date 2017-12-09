#include <iostream>
#include <list>

using namespace std;
class GeneLIst {
    list List<Gene>;
    void AddGene(int x1 ,int x2 , dtring name){
        for (Gene tempGene :List ){
            if(tempGene.x1==x1 && tempGene.x2==x2){
                if(tempGene.Names.contain(name)){
                    cout<<"Duplicate Name Inserted"<<'\n';
                    List.remove(tempGene);
                    List.push_back(tempGene);
                    return;
                } else{
                    tempGene.Names.insert(name);
                    List.remove(tempGene);
                    List.push_back(tempGene);
                }
                break;
            }
        }

    }
    void AddGeneAlias(dtring name1,dtring name2){
        for(Gene tempGene:List){
            if(tempGene.Names.contain(name2)){
                cout<<"Duplicate Name Inserted"<<'\n';
                List.remove(tempGene);
                List.push_back(tempGene);
            }

        }
        for(Gene tempGene:List){
            if(tempGene.Names.contain(name1)){
               tempGene.Names->insert(name2);
                List.remove(tempGene);
                List.push_back(tempGene);
            }

        }
    }
    void RemoveAlias(dtring name){
        Gene  *perv;
        for(Gene tempGene:List){
            if(tempGene.Names.contain(name)){
                tempGene.Names.remove(name);
                if(tempGene.Names.count()==0){
                    List.remove(tempGene);
                    List.remove(perv);
                    List.push_back(perv);
                    delete perv;
                    perv = nullptr;

            }
                perv = &tempGene;
        }

    }
};
class dtring{
public:
    dtringNode * root;
    void insert(char s){

    }

    bool is_equal(dtring *pDtring) {

    }
};
struct dtringNode{
    char char1;
    dtringNode * next;
};

struct NameNode{
    dtring name;
    NameNode* next;
};
class NameList{
    NameList(){

    }
    void insertName(NameNode *nameNode,dtring *newname){
        if(nameNode->name.is_equal(newname)){
                cout<<"duplicate name founded";
        }
        while ( nameNode->next!= nullptr){
            if(nameNode->name.is_equal(newname)){
                cout<<"duplicate name founded";
            }
            nameNode= nameNode->next;
        }
        nameNode->next=new NameNode();
        nameNode->next->name=*newname;
        delete  newname;
    }
};
struct Gene{
    Gene* next;
    int x1 , x2;
    NameList * Names;
};

int main() {
    list <int> list1 ;
    list1.push_front(10);
    list1.push_front(15);
    list1.push_front(104);
    list1.push_front(101);
    list1.push_front(1);
    list1.push_front(1550);
}