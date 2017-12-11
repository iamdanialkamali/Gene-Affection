#include <iostream>
#include "istream"
#include "ostream"
#include "list"
#include <string>
/*

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
    string w;
    char chars[500];
    getline(cin,w);
    chars = w.;
}*/
#include <iostream>
using namespace std;
class dtring {
public:

    list<char> myStr;
    bool operator == (const dtring& s) const {

        if(this->myStr.size() !=s.myStr.size()){
            return false ;
        }
        else {
            auto iterator1 = s.myStr.begin();
            auto iterator2 = this->myStr.begin();
            for (int i = 0; i < s.myStr.size(); i++) {
                if (*iterator1 != *iterator2) {
                    //cout<<i<<'\n';
                    return false;
                } else {
                    iterator1++;
                    iterator2++;
                }

            }
            return true;
        }
    }
    bool operator != (const dtring& s) const { return !operator==(s); }
    bool operator > (const dtring& s) const {
        auto iterator1 = s.myStr.begin();
        auto iterator2 = this->myStr.begin();
        int len1 = s.myStr.size();
        int len2 = this->myStr.size();
        int i =min(len1,len2);
        while (*iterator1!=NULL||*iterator2!=NULL){

            if(*iterator1>*iterator2){
                return false;
            }
            if(*iterator1<*iterator2){
                return true;
            }
            if(i==1){
                break;
            }
            iterator1++;
            iterator2++;
            i--;
        }
        if(len1==len2){
            return false;
        }
        if(len1<len2){
            return true;
        } else{
            return false;
        }

    }
    bool operator < (const dtring& s) const{
        auto iterator2 = s.myStr.begin();
        auto iterator1 = this->myStr.begin();
        int len1 = s.myStr.size();
        int len2 = this->myStr.size();
        int i =min(len1,len2);
        if(len1<len2){
            return true;
        }
        while (*iterator1!=NULL||*iterator2!=NULL){

            if(*iterator1>*iterator2){
                return false;
            }
            if(*iterator1<*iterator2){
                return true;
            }
            if(i==1){
                break;
            }
            iterator1++;
            iterator2++;
            i--;
        }
        if(len1==len2){
            return false;
        }
        if(len1<len2){
            return true;
        } else{
            return false;
        }

    }
    void add(char c) {

        myStr.push_back(c);
    }

    void print() {
        for (char c : myStr) {
            cout << c;
        }
        cout<<'\n';
    }


    bool is_equal(dtring string1, dtring string2) {

        if (string1.myStr.size() != string2.myStr.size()) {
            cout << string1.myStr.size() << "--" << string2.myStr.size();
            return false;
        }
        auto iterator1 = string2.myStr.begin();
        auto iterator2 = string1.myStr.begin();
        for (int i = 0; i < string1.myStr.size(); i++) {
            if (*iterator1 != *iterator2) {
                //cout<<i<<'\n';
                return false;
            } else {
                iterator1++;
                iterator2++;
            }

        }
        return true;
    }

};


struct NameNode {
    dtring name;
    NameNode *next;
};

class NameList {
public:
    list<dtring> nameList;
    NameList() {
    }
    bool contain(dtring name) {
        for(auto ci : nameList){
            if(ci.is_equal(ci,name)){
                return true;
            }
        }
        return false;
    }
    void remove(dtring name){
        int  i = 0;
        auto iterator = nameList.begin();
        for(int i =0; i<nameList.size() ; i++){
            if(*iterator != name){
                iterator ++;
                i++;
            }
        }
        nameList.erase(iterator);
    }

    int count() {
        return nameList.size();
    }
    void insert(dtring name) {
        if(contain(name)){
            cout << "you cant enter duplicate name" <<'\n';
        } else{
            nameList.push_front(name);
        }
    }
};


struct Gene {
    int x1, x2;
    list<dtring> Names;
};
/*
class GeneLIst {
    list<Gene> List;

    void AddGene(int x1, int x2, dtring name) {
        for (Gene tempGene :List) {
            if (tempGene.x1 == x1 && tempGene.x2 == x2) {
                if (tempGene.Names->contain(name)) {
                    cout << "Duplicate Name Inserted" << '\n';
                    List.remove(tempGene);
                    List.push_back(tempGene);
                    return;
                } else {
                    tempGene.Names->insert(name);
                    List.remove(tempGene);
                    List.push_back(tempGene);
                }
                break;
            }
        }

    }

    void AddGeneAlias(dtring name1, dtring name2) {
        for (Gene tempGene:List) {
            if (tempGene.Names->contain(name2)) {
                cout << "Duplicate Name Inserted" << '\n';
                List.remove(tempGene);
                List.push_back(tempGene);
            }

        }
        for (Gene tempGene:List) {
            if (tempGene.Names->contain(name1)) {
                tempGene.Names->insert(name2);
                List.remove(tempGene);
                List.push_back(tempGene);
            }

        }
    }
    void RemoveAlias(dtring name) {
        Gene *prev;
        for (Gene tempGene: List) {
            if (tempGene.Names->contain(name)) {
                tempGene.Names->remove(name);
                if (tempGene.Names->count() == 0) {
                    List.remove(tempGene);
                    List.remove(prev);
                    List.push_back(prev);
                    delete prev;
                    prev = nullptr;

                }
                prev = &tempGene;
            }

        }
    };
};

*/
struct dtringNode{
    char char1;
    dtringNode * next;
};

struct dictNode{
    dtring name ;
    Gene * gene;
    dictNode *leftChild;
    dictNode * rightChild ;
};

void printall(Gene *gene){
    list<dtring>names = gene->Names;
    cout<< gene->x1 <<" "<<gene->x2;
    for (dtring s : names){
        s.print();
        cout<<"  ";
    }
    cout<<'\n';
}
class dict {
public:
    //dictNode *root = new dictNode();
    dictNode* RR_Rotate(dictNode* k2){
        dictNode* k1 = k2->leftChild;
        k2->leftChild = k1->rightChild;
        k1->rightChild = k2;
        return k1;
    }
    dictNode* LL_Rotate(dictNode* k2) {
        dictNode* k1 = k2->rightChild;
        k2->rightChild = k1->leftChild;
        k1->leftChild = k2;
        return k1;
    }

    // An implementation of top-down splay tree
    dictNode* Splay(dtring key, dictNode* root) {
        if (!root)
            return NULL;
        dictNode header;
        /* header.rchild points to L tree;
        header.lchild points to R Tree */
        header.leftChild = header.rightChild = NULL;
        dictNode* LeftTreeMax = &header;
        dictNode* RightTreeMin = &header;
        //key.print();
        //root->name.print();
        while (1) {
            if (key < root->name) {
                if (!root->leftChild)
                    break;
        //        key.print();
                root->leftChild->name;
                if (key < root->leftChild->name) {
                    root = RR_Rotate(root);
                    // only zig-zig mode need to rotate once,
                    if (!root->leftChild)
                        break;
                }
                /* Link to R Tree */
                RightTreeMin->leftChild = root;
                RightTreeMin = RightTreeMin->leftChild;
                root = root->leftChild;
                RightTreeMin->leftChild = NULL;
            }
            else if (key > root->name) {
                if (!root->rightChild)
                    break;
                if (key > root->rightChild->name) {
                    root = LL_Rotate(root);
                    // only zag-zag mode need to rotate once,
                    if (!root->rightChild)
                        break;
                }
                /* Link to L Tree */
                LeftTreeMax->rightChild = root;
                LeftTreeMax = LeftTreeMax->rightChild;
                root = root->rightChild;
                LeftTreeMax->rightChild = NULL;
            }
            else
                break;
        }
        /* assemble L Tree, Middle Tree and R tree */
        LeftTreeMax->rightChild = root->leftChild;
        RightTreeMin->leftChild = root->rightChild;
        root->leftChild = header.rightChild;
        root->rightChild = header.leftChild;
        return root;
    }
    dictNode* New_Node(dtring key) {
        dictNode* p_node = new dictNode;
        if (!p_node) {
            fprintf(stderr, "Out of memory!\n");
            exit(1);
        }
        p_node->name = key;
        p_node->leftChild = p_node->rightChild = NULL;
        return p_node;
    }

    dictNode* Insert(int x1,int x2,dtring key, dictNode* root) {
        static dictNode* p_node = NULL;
        if (!p_node) {
            p_node = New_Node(key);
            p_node->gene = new Gene();
            p_node->gene->Names.push_front(key);
            p_node->gene->x1 = x1;
            p_node->gene->x2 = x2;
        }
        else
            p_node->name = key;
        if (!root) {
            root = p_node;
            p_node = NULL;
            return root;
        }
        root = Splay(key, root);
        /* This is BST that, all keys <= root->key is in root->lchild, all keys >
        root->key is in root->rchild. */
        if (key < root->name) {
            p_node->leftChild = root->leftChild;
            p_node->rightChild = root;
            root->leftChild= NULL;
            root = p_node;
        }
        else if (key > root->name) {
            p_node->rightChild = root->rightChild;
            p_node->leftChild = root;
            root->rightChild = NULL;
            root = p_node;
        }
        else {
            root->gene->Names.push_front(key);
            root->gene->x1 = x1;
            root->gene->x2 = x2;
            return root;
        }
        p_node = NULL;
       // cout<<"Duplicate Name Inserted";
        return root;

    }

    dictNode* Delete(dtring key, dictNode* root) {
        dictNode* temp;
        if (!root) {
            return NULL;
        }
        root = Splay(key, root);

        if (key != root->name) {
            return root;
        }
        else
        {
            if (!root->leftChild) {
                temp = root;
                root = root->rightChild;
                //printall(temp->gene);
            }
            else {
                temp = root;
                if(temp->gene->Names.size()==1){
                    temp->gene->Names.remove(key);
                    delete temp->gene;
                    temp->gene=NULL;
                } else{
                    temp->gene->Names.remove(key);
                }
                /*Note: Since key == root->key,
                so after Splay(key, root->lchild),
                the tree we get will have no right child tree.*/
                root = Splay(key, root->leftChild);
                root->rightChild = temp->rightChild;
                //printall(temp->gene);
            }
            free(temp);
            return root;
        }
    }

    dictNode* Search(dtring key,dictNode* root) {
        dictNode*founded =  Splay(key, root);
    //    key.print();
      //  root->name.print();
        if(root->name==key){
            return founded;
        } else{
            return nullptr;
        }
    }
    dictNode * AddGeneAlias(dtring name1 ,dtring name2,dictNode * root){
        dictNode *temp = Search(name1,root);
        if(Search(name2,root)== NULL){
            dictNode* secondary = Insert(temp->gene->x1,temp->gene->x2,name2,root);
            secondary->gene=temp->gene;
            secondary->gene->Names.push_front(name2);
            return secondary;
        } else{
            cout<<"Duplicate Alias Name Inserted";
            return temp;
        }

    }
    dictNode * RemoveAliasName(dtring name2 ,dictNode *root){
        return Delete(name2,root);


    }

};

//
//struct splay
//{
//    int key;
//    splay* lchild;
//    splay* rchild;
//};
//
//class SplayTree
//{
//public:
//    SplayTree()
//    {
//    }
//
//    // RR(Y rotates to the right)
//    splay* RR_Rotate(splay* k2)
//    {
//        splay* k1 = k2->lchild;
//        k2->lchild = k1->rchild;
//        k1->rchild = k2;
//        return k1;
//    }
//
//    // LL(Y rotates to the left)
//    splay* LL_Rotate(splay* k2)
//    {
//        splay* k1 = k2->rchild;
//        k2->rchild = k1->lchild;
//        k1->lchild = k2;
//        return k1;
//    }
//
//    // An implementation of top-down splay tree
//    splay* Splay(int key, splay* root)
//    {
//        if (!root)
//            return NULL;
//        splay header;
//        /* header.rchild points to L tree;
//        header.lchild points to R Tree */
//        header.lchild = header.rchild = NULL;
//        splay* LeftTreeMax = &header;
//        splay* RightTreeMin = &header;
//        while (1)
//        {
//            if (key < root->key)
//            {
//                if (!root->lchild)
//                    break;
//                if (key < root->lchild->key)
//                {
//                    root = RR_Rotate(root);
//                    // only zig-zig mode need to rotate once,
//                    if (!root->lchild)
//                        break;
//                }
//                /* Link to R Tree */
//                RightTreeMin->lchild = root;
//                RightTreeMin = RightTreeMin->lchild;
//                root = root->lchild;
//                RightTreeMin->lchild = NULL;
//            }
//            else if (key > root->key)
//            {
//                if (!root->rchild)
//                    break;
//                if (key > root->rchild->key)
//                {
//                    root = LL_Rotate(root);
//                    // only zag-zag mode need to rotate once,
//                    if (!root->rchild)
//                        break;
//                }
//                /* Link to L Tree */
//                LeftTreeMax->rchild = root;
//                LeftTreeMax = LeftTreeMax->rchild;
//                root = root->rchild;
//                LeftTreeMax->rchild = NULL;
//            }
//            else
//                break;
//        }
//        /* assemble L Tree, Middle Tree and R tree */
//        LeftTreeMax->rchild = root->lchild;
//        RightTreeMin->lchild = root->rchild;
//        root->lchild = header.rchild;
//        root->rchild = header.lchild;
//        return root;
//    }
//
//    splay* New_Node(int key)
//    {
//        splay* p_node = new splay;
//        if (!p_node)
//        {
//            fprintf(stderr, "Out of memory!\n");
//            exit(1);
//        }
//        p_node->key = key;
//        p_node->lchild = p_node->rchild = NULL;
//        return p_node;
//    }
//
//    splay* Insert(int key, splay* root)
//    {
//        static splay* p_node = NULL;
//        if (!p_node)
//            p_node = New_Node(key);
//        else
//            p_node->key = key;
//        if (!root)
//        {
//            root = p_node;
//            p_node = NULL;
//            return root;
//        }
//        root = Splay(key, root);
//        /* This is BST that, all keys <= root->key is in root->lchild, all keys >
//        root->key is in root->rchild. */
//        if (key < root->key)
//        {
//            p_node->lchild = root->lchild;
//            p_node->rchild = root;
//            root->lchild = NULL;
//            root = p_node;
//        }
//        else if (key > root->key)
//        {
//            p_node->rchild = root->rchild;
//            p_node->lchild = root;
//            root->rchild = NULL;
//            root = p_node;
//        }
//        else
//            return root;
//        p_node = NULL;
//        return root;
//    }
//
//    splay* Delete(int key, splay* root)
//    {
//        splay* temp;
//        if (!root)
//            return NULL;
//        root = Splay(key, root);
//        if (key != root->key)
//            return root;
//        else
//        {
//            if (!root->lchild)
//            {
//                temp = root;
//                root = root->rchild;
//            }
//            else
//            {
//                temp = root;
//                /*Note: Since key == root->key,
//                so after Splay(key, root->lchild),
//                the tree we get will have no right child tree.*/
//                root = Splay(key, root->lchild);
//                root->rchild = temp->rchild;
//            }
//            free(temp);
//            return root;
//        }
//    }
//
//    splay* Search(int key, splay* root)
//    {
//        return Splay(key, root);
//    }
//
//    void InOrder(splay* root)
//    {
//        if (root)
//        {
//            InOrder(root->lchild);
//            cout« "key: " «root->key;
//            if(root->lchild)
//                cout« " | left child: "« root->lchild->key;
//            if(root->rchild)
//                cout « " | right child: " « root->rchild->key;
//            cout« "\n";
//            InOrder(root->rchild);
//        }
//    }
//};


/*
struct dtringNode{
    char char1;
    dtringNode * next;
};
*/
string getdata(char mystr[200],int i){
    for (int j = 0; j <200 ; ++j) {

    }

}
int main() {
    dict dict1;
    dictNode *root = NULL;

    while(true){
        char mystr[200];
        cin.getline(mystr,200);
        if(mystr[0]=='A'){
            if(mystr[7]==' '){
                dtring name1;
                int x1,x2 ;
                string a ="";
                int j =0;
                for (int i = 8; i <200 ; ++i) {
                    if(j==0)
                        name1.add(mystr[i]);
                    if(mystr[i]==' ') {
                        if(a!="" and j==1){
                            x1=stoi(a);
                        }
                        if(a!="" and j==2){
                            x2=stoi(a);
                        }
                        j++;
                        a="";
                    }
                    if(j==1)
                        a+=mystr[i];
                    if(j==2)
                        a+=mystr[i];
                    else if(j>2){
                        break;
                    }
                }
                root=dict1.Insert(x1,x2,name1,root);
            }
            if(mystr[7]=='A'){
                int j =0;
                dtring name1;
                dtring name2;
                for (int i = 13; i <200 ; ++i) {
                    if(j==0 and mystr[i]!=' ' ){
                        name1.add(mystr[i]);
                    }
                    if(mystr[i]==' ' and j==0){
                        j++;
                    }
                    if(j==1 and mystr[i]!=' ' ){
                        name2.add(mystr[i]);
                    }if(mystr[i]==' ' and j==1){
                        break;
                    }


                }
                root =dict1.AddGeneAlias(name1,name2,root);
            }

        }if(mystr[0]=='R'){
            dtring name;
            for (int i = 11; i <200 ; ++i) {
                if(mystr[i]==' '){
                    break;
                }
                name.add(mystr[i]);
            }
            root = dict1.RemoveAliasName(name,root);
        }
        if(mystr[0]=='P'){
            dtring name ;
            for (int i = 14; i <200 ; ++i) {
                if(mystr[i]==' '){
                    break;
                }
                name.add(mystr[i]);
            }
            printall(dict1.Search(name,root)->gene);
        }
    }
    dtring dtring1;
    string string1="ABC";
    for(char c : string1){
       /* if(c=='\0') {
            break;
        }*/
        dtring1.add(c);
    }
    dtring dtring2;
    string string2 = "ABD";
    for(char c : string2){
      /*  if(c=='\0') {
            break;
        }*/
        dtring2.add(c);
    }
    dtring dtring3;
    string string3 ="ABE";
    for(char c : string3){
     /*   if(c=='\0') {
            break;
        }*/
        dtring3.add(c);
    }

    root = dict1.Insert(2,4,dtring2,root);
    root = dict1.AddGeneAlias(dtring2,dtring3,root);
    root = dict1.Insert(1,5,dtring1,root);

  //  printall(node->gene);
    //root=dict1.RemoveAliasName(dtring1,root);
    printall(root->gene);
 //   cout<<temp.size();

    cout << '\n'<<"done" ;
}