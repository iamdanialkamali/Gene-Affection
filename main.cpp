//#include <iostream>
//#include "istream"
//#include "ostream"
//#include "list"
//#include <string>
//
//using namespace std;
///*
//  class GeneLIst {
//    list List<Gene>;
//    void AddGene(int x1 ,int x2 , dtring name){
//        for (Gene tempGene :List ){
//            if(tempGene.x1==x1 && tempGene.x2==x2){
//                if(tempGene.Names.contain(name)){
//                    cout<<"Duplicate Name Inserted"<<'\n';
//                    List.remove(tempGene);
//                    List.push_back(tempGene);
//                    return;
//                } else{
//                    tempGene.Names.insert(name);
//                    List.remove(tempGene);
//                    List.push_back(tempGene);
//                }
//                break;
//            }
//        }
//
//    }
//    void AddGeneAlias(dtring name1,dtring name2){
//        for(Gene tempGene:List){
//            if(tempGene.Names.contain(name2)){
//                cout<<"Duplicate Name Inserted"<<'\n';
//                List.remove(tempGene);
//                List.push_back(tempGene);
//            }
//
//        }
//        for(Gene tempGene:List){
//            if(tempGene.Names.contain(name1)){
//               tempGene.Names->insert(name2);
//                List.remove(tempGene);
//                List.push_back(tempGene);
//            }
//
//        }
//    }
//    void RemoveAlias(dtring name){
//        Gene  *perv;
//        for(Gene tempGene:List){
//            if(tempGene.Names.contain(name)){
//                tempGene.Names.remove(name);
//                if(tempGene.Names.count()==0){
//                    List.remove(tempGene);
//                    List.remove(perv);
//                    List.push_back(perv);
//                    delete perv;
//                    perv = nullptr;
//
//            }
//                perv = &tempGene;
//        }
//
//    }
//};
//class dtring{
//public:
//    dtringNode * root;
//    void insert(char s){
//
//    }
//
//    bool is_equal(dtring *pDtring) {
//
//    }
//};
//struct dtringNode{
//    char char1;
//    dtringNode * next;
//};
//struct NameNode{
//    dtring name;
//    NameNode* next;
//};
//class NameList{
//    NameList(){
//
//    }
//    void insertName(NameNode *nameNode,dtring *newname){
//        if(nameNode->name.is_equal(newname)){
//                cout<<"duplicate name founded";
//        }
//        while ( nameNode->next!= nullptr){
//            if(nameNode->name.is_equal(newname)){
//                cout<<"duplicate name founded";
//            }
//            nameNode= nameNode->next;
//        }
//        nameNode->next=new NameNode();
//        nameNode->next->name=*newname;
//        delete  newname;
//    }
//};
//struct Gene{
//    Gene* next;
//    int x1 , x2;
//    NameList * Names;
//};
//int main() {
//    string w;
//    char chars[500];
//    getline(cin,w);
//    chars = w.;
//}*/
//#include <iostream>
//using namespace std;
//class dtring {
//public:
//
//    list<char> myStr;
//    bool operator == (const dtring& s) const {
//
//        if(this->myStr.size() !=s.myStr.size()){
//            return false ;
//        }
//        else {
//            auto iterator1 = s.myStr.begin();
//            auto iterator2 = this->myStr.begin();
//            for (int i = 0; i < s.myStr.size(); i++) {
//                if (*iterator1 != *iterator2) {
//                    //cout<<i<<'\n';
//                    return false;
//                } else {
//                    iterator1++;
//                    iterator2++;
//                }
//
//            }
//            return true;
//        }
//    }
//    bool operator != (const dtring& s) const { return !operator==(s); }
//    bool operator > (const dtring& s) const {
//        auto iterator1 = s.myStr.begin();
//        auto iterator2 = this->myStr.begin();
//        int len1 = s.myStr.size();
//        int len2 = this->myStr.size();
//        int i =min(len1,len2);
//        while (*iterator1!=NULL||*iterator2!=NULL){
//
//            if(*iterator1>*iterator2){
//                return false;
//            }
//            if(*iterator1<*iterator2){
//                return true;
//            }
//            if(i==1){
//                break;
//            }
//            iterator1++;
//            iterator2++;
//            i--;
//        }
//        if(len1==len2){
//            return false;
//        }
//        if(len1<len2){
//            return true;
//        } else{
//            return false;
//        }
//
//    }
//    bool operator < (const dtring& s) const{
//        auto iterator2 = s.myStr.begin();
//        auto iterator1 = this->myStr.begin();
//        int len1 = s.myStr.size();
//        int len2 = this->myStr.size();
//        int i =min(len1,len2);
//        if(len1<len2){
//            return true;
//        }
//        while (*iterator1!=NULL||*iterator2!=NULL){
//
//            if(*iterator1>*iterator2){
//                return false;
//            }
//            if(*iterator1<*iterator2){
//                return true;
//            }
//            if(i==1){
//                break;
//            }
//            iterator1++;
//            iterator2++;
//            i--;
//        }
//        if(len1==len2){
//            return false;
//        }
//        if(len1<len2){
//            return true;
//        } else{
//            return false;
//        }
//
//    }
//    void add(char c) {
//
//        myStr.push_back(c);
//    }
//
//    void print() {
//        for (char c : myStr) {
//            cout << c;
//        }
//        cout<<'\n';
//    }
//
//
//    bool is_equal(dtring string1, dtring string2) {
//
//        if (string1.myStr.size() != string2.myStr.size()) {
//            cout << string1.myStr.size() << "--" << string2.myStr.size();
//            return false;
//        }
//        auto iterator1 = string2.myStr.begin();
//        auto iterator2 = string1.myStr.begin();
//        for (int i = 0; i < string1.myStr.size(); i++) {
//            if (*iterator1 != *iterator2) {
//                //cout<<i<<'\n';
//                return false;
//            } else {
//                iterator1++;
//                iterator2++;
//            }
//
//        }
//        return true;
//    }
//
//};
//
//
//struct NameNode {
//    dtring name;
//    NameNode *next;
//};
//
//class NameList {
//public:
//    list<dtring> nameList;
//    NameList() {
//    }
//    bool contain(dtring name) {
//        for(auto ci : nameList){
//            if(ci.is_equal(ci,name)){
//                return true;
//            }
//        }
//        return false;
//    }
//    void remove(dtring name){
//        int  i = 0;
//        auto iterator = nameList.begin();
//        for(int i =0; i<nameList.size() ; i++){
//            if(*iterator != name){
//                iterator ++;
//                i++;
//            }
//        }
//        nameList.erase(iterator);
//    }
//
//    int count() {
//        return nameList.size();
//    }
//    void insert(dtring name) {
//        if(contain(name)){
//            cout << "you cant enter duplicate name" <<'\n';
//        } else{
//            nameList.push_front(name);
//        }
//    }
//};
//
//struct Gene {
//    int x1, x2;
//    list<dtring> Names;
//};
//
//struct dtringNode{
//    char char1;
//    dtringNode * next;
//};
//
//struct dictNode{
//    dtring name ;
//    Gene * gene;
//    dictNode *leftChild;
//    dictNode * rightChild ;
//};
//
//void printall(Gene *gene){
//    if(gene== nullptr){
//        return;
//    }
//    list<dtring>names = gene->Names;
//    cout<< gene->x1 <<" "<<gene->x2;
//    for (dtring s : names){
//        s.print();
//        cout<<"  ";
//    }
//    cout<<'\n';
//}
//class dict {
//public:
//
//   dictNode* Rotate_to_l(dictNode *dictNode1) {
//        dictNode* temp = dictNode1->rightChild;
//        dictNode1->rightChild = temp->leftChild;
//        temp->leftChild = dictNode1;
//        return temp;
//    }
//    dictNode* Rotata_to_r(dictNode *dictNode1){
//        dictNode* temp = dictNode1->leftChild;
//        dictNode1->leftChild = temp->rightChild;
//        temp->rightChild = dictNode1;
//        return temp;
//    }
//    dictNode* Splay(dtring key, dictNode* root) {
//        if (!root)
//            return NULL;
//        dictNode header;
//        header.leftChild = header.rightChild = NULL;
//        dictNode* LeftTreeMax = &header;
//         dictNode* RightTreeMin = &header;
//        //key.print();
//      //  root->name.print();
//        while (1) {
//            if (!root->leftChild)
//                break;
//            if (key < root->name) {
//        //        key.print();
//                root->leftChild->name;
//                if (key < root->leftChild->name) {
//                    root = Rotata_to_r(root);
//                    if (!root->leftChild)
//                        break;
//                }
//                RightTreeMin->leftChild = root;
//                RightTreeMin = RightTreeMin->leftChild;
//                root = root->leftChild;
//                RightTreeMin->leftChild = NULL;
//            }
//            else if (key > root->name) {
//                if (!root->rightChild)
//                    break;
//                if (key > root->rightChild->name) {
//                    root = Rotate_to_l(root);
//                    if (!root->rightChild)
//                        break;
//                }
//
//                LeftTreeMax->rightChild = root;
//                LeftTreeMax = LeftTreeMax->rightChild;
//                root = root->rightChild;
//                LeftTreeMax->rightChild = NULL;
//            }
//            else
//                break;
//        }
//        LeftTreeMax->rightChild = root->leftChild;
//        RightTreeMin->leftChild = root->rightChild;
//        root->leftChild = header.rightChild;
//        root->rightChild = header.leftChild;
//        return root;
//    }
//    dictNode* New_Node(dtring key) {
//        dictNode* p_node = new dictNode;
//        p_node->name = key;
//        p_node->leftChild = p_node->rightChild = NULL;
//        return p_node;
//    }
//    dictNode* Insert(int x1,int x2,dtring key, dictNode* root) {
//        static dictNode* p_node = NULL;
//        if (!p_node) {
//            p_node = New_Node(key);
//            p_node->gene = new Gene();
//            p_node->gene->Names.push_front(key);
//            p_node->gene->x1 = x1;
//            p_node->gene->x2 = x2;
//        }
//        else
//            p_node->name = key;
//        if (!root) {
//            root = p_node;
//            p_node = NULL;
//            return root;
//        }
//        root = Splay(key, root);
//        /* This is BST that, all keys <= root->key is in root->lchild, all keys >
//        root->key is in root->rchild. */
//        if (key < root->name) {
//            p_node->leftChild = root->leftChild;
//            p_node->rightChild = root;
//            root->leftChild= NULL;
//            root = p_node;
//        }
//        else if (key > root->name) {
//            p_node->rightChild = root->rightChild;
//            p_node->leftChild = root;
//            root->rightChild = NULL;
//            root = p_node;
//        }
//        else {
//            root->gene->Names.push_front(key);
//            root->gene->x1 = x1;
//            root->gene->x2 = x2;
//            return root;
//        }
//        p_node = NULL;
//       // cout<<"Duplicate Name Inserted";
//        return root;
//
//    }
//    dictNode* Delete(dtring key, dictNode* root) {
//        dictNode* temp;
//        if (!root) {
//            return NULL;
//        }
//        root = Splay(key, root);
//
//        if (key != root->name) {
//            return root;
//        }
//        else
//        {
//            if (!root->leftChild) {
//                temp = root;
//                root = root->rightChild;
//                //printall(temp->gene);
//            }
//            else {
//                temp = root;
//                if(temp->gene->Names.size()==1){
//                    temp->gene->Names.remove(key);
//                    delete temp->gene;
//                    temp->gene=NULL;
//                } else{
//                    temp->gene->Names.remove(key);
//                }
//                /*Note: Since key == root->key,
//                so after Splay(key, root->lchild),
//                the tree we get will have no right child tree.*/
//                root = Splay(key, root->leftChild);
//                root->rightChild = temp->rightChild;
//                //printall(temp->gene);
//            }
//            free(temp);
//            return root;
//        }
//    }
//    dictNode* Search(dtring key,dictNode* root) {
//        root =  Splay(key, root);
//        //key.print();
//        //root->name.print();
//        if(root->name==key){
//            return root;
//        } else{
//            return nullptr;
//        }
//    }
//    dictNode * AddGeneAlias(dtring name1 ,dtring name2,dictNode * root){
//        root = Search(name1,root);
//        //name1.print();
//        //root->name.print();
//        if(Search(name2,root)== NULL){
//            root = Insert(root->gene->x1,root->gene->x2,name2,root);
//            root->gene=root->gene;
//            root->gene->Names.push_front(name2);
//            return root;
//        } else{
//            cout<<"Duplicate Alias Name Inserted";
//            return root;
//        }
//
//    }
//    dictNode * RemoveAliasName(dtring name2 ,dictNode *root){
//        return Delete(name2,root);
//
//
//    }
//
//};
//#include <iostream>
//#include <list>
////////////////////////////////////////////////////
//using namespace std;
//class namelist{
//    namelist(){};
//    Charlist *data;
//    namelist *next;
//};
//class Charlist{
//
//public:
//    char data;
//    Charlist* next;
//    Charlist(){}
//    Charlist(string name){
//        Charlist * temp  = this;
//        for (char c :name) {
//            temp->data=c;
//            temp->next= new Charlist();
//            temp=temp->next;
//        }
//    }
//
//    bool isequal(Charlist *s) {
//        int len1=0;
//        int len2=0;
//        if(this->data!=s->data) {
//            return false;
//        }
//        Charlist *it1 = this->next;
//        Charlist *it2 = s->next;
//
//        Charlist * temp  = it1;
//        int i = 0;
//        while (temp){
//            i++;
//            temp=temp->next;
//        }
//        len1=i;
//        temp  = it2;
//        i = 0;
//        while (temp){
//            i++;
//            temp=temp->next;
//        }
//        len2=i;
//        if(len1 !=len2){
//            return false ;
//        }
//        for (int i = 0; i < len1; i++) {
//            if (it1->data!=it2->data) {
//                //cout<<i<<'\n';
//                return false;
//            } else {
//                it1 = it1->next;
//                it2 = it2->next;
//            }
//
//        }
//        return true;
//    }
//};
//int lenght(Charlist *s) {
//    Charlist * temp  = s;
//    int i = 0;
//    while (temp){
//        i++;
//        temp=temp->next;
//    }
//    return i-1;
//}
//void PrintGraph(list<Gene*> Genelist){
//    for(Gene* temp :Genelist){
//        if(temp->Connected.back()) {
//            cout << temp->name << " --> " << temp->Connected.back()->name << '\n';
//        } else{
//            cout << temp->name << '\n';
//        }
//    }
//}
//class Gene{
//public:
//    Gene(){}
//    Gene(string name1){
//        this->name=name1;
//    }
//    string name;
//    list<Gene*> Connected;
//    static  list<Gene*> GeneList;
//    void Connect(Gene * second){
//        Connected.push_back(second);
//        Gene *ss = Connected.front();
//    }
//    void Disconnect(Gene *second){
//        Connected.remove(second);
//    }
//};
//int main() {
//    list<Gene*> Genelist;
//    Charlist* s2 = new Charlist("Danial");
//    Charlist* s1=new Charlist("Danial");
//    Gene *D = new Gene("A");
//    Gene *S = new Gene("B");
//    D->Connect(S);
//    Gene *Ss = new Gene("C");
//    S->Connect(Ss);
//    S->Disconnect(Ss);
//    cout<<D->Connected.front()->Connected.front()->name;
//    return 0;
//
//}
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
//    splay* Rotata_to_r(splay* k2)
//    {
//        splay* k1 = k2->lchild;
//        k2->lchild = k1->rchild;
//        k1->rchild = k2;
//        return k1;
//    }
//
//    // LL(Y rotates to the left)
//    splay* Rotate_to_l(splay* k2)
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
//                    root = Rotata_to_r(root);
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
//                    root = Rotate_to_l(root);
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
//struct dictNode{
//    Charlist *name ;
//    Gene * gene;
//    dictNode *leftChild;
//    dictNode * rightChild ;
//};
//struct splay {
//    int key;
//    splay* lchild;
//    splay* rchild;
//};
//
//class SplayTree{
//public:
//    SplayTree()
//    {
//    }
//
//    // RR(Y rotates to the right)
//    splay* Rotata_to_r(splay* k2)
//    {
//        splay* k1 = k2->lchild;
//        k2->lchild = k1->rchild;
//        k1->rchild = k2;
//        return k1;
//    }
//
//    // LL(Y rotates to the left)
//    splay* Rotate_to_l(splay* k2)
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
//                    root = Rotata_to_r(root);
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
//                    root = Rotate_to_l(root);
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
//class Gene{
//public:
//    Gene(){}
//    Gene(string name1){
//        this->name=new Charlist(name1);
//    }
//    Charlist *name;
//    list<Gene*> Connected;
//    static  list<Gene*> GeneList;
//    void Connect(Gene * second){
//        Connected.push_back(second);
//        Gene *ss = Connected.front();
//    }
//    void Disconnect(Gene *second){
//        Connected.remove(second);
//    }
//};
//////////////////////////////////////////////////////////////////
///*
//struct dtringNode{
//    char char1;
//    dtringNode * next;
//};
//*/
//string getdata(char mystr[200],int i){
//    for (int j = 0; j <200 ; ++j) {
//
//    }
//
//}
//int main() {
//    dict dict1;
//    dictNode *root = NULL;
//    /*while(true){
//        char mystr[200];
//        cin.getline(mystr,200);
//        if(mystr[0]=='A'){
//            if(mystr[7]==' '){
//                dtring name1;
//                int x1,x2 ;
//                string a ="";
//                int j =0;
//                for (int i = 8; i <200 ; ++i) {
//                    if(mystr[i]=='\000'){
//                        break;
//                    }
//                    if(mystr[i]==' '|| mystr[i]=='\000') {
//                        if(a!="" and j==1){
//                            x1=stoi(a);
//                            a="";
//                        }
//                        if(a!="" and j==2){
//                            x2=stoi(a);
//                        }
//                        j++;
//                    }
//                    if(j==1)
//                        a+=mystr[i];
//                    if(j==2)
//                        a+=mystr[i];
//                    else if(j>2){
//                        break;
//                    }
//                    if(j==0)
//                        name1.add(mystr[i]);
//
//                }
//                //name1.print();
//                root=dict1.Insert(x1,x2,name1,root);
//            }
//            if(mystr[7]=='A'){
//                int j =0;
//                dtring name1;
//                dtring name2;
//                for (int i = 13; i <200 ; ++i) {
//                    if(mystr[i]=='\000'){
//                        break;
//                    }
//                    if(j==1 and mystr[i]!=' ' ){
//                        name2.add(mystr[i]);
//                    }
//                    if(j==0 and mystr[i]!=' ' ){
//                        name1.add(mystr[i]);
//                    }
//                    if(mystr[i]=='\000' and j==1){
//                        break;
//                    }
//                    if(mystr[i]==' ' and j==0 ){
//                        j++;
//                    }
//
//                }
//                //name1.print();
//                //name2.print();
//                root =dict1.AddGeneAlias(name1,name2,root);
//            }
//
//        }if(mystr[0]=='R'){
//            dtring name;
//            for (int i = 11; i <200 ; ++i) {
//                if(mystr[i]=='\000'){
//                    break;
//                }
//                if(mystr[i]==' '||mystr[i]=='\000'){
//                    break;
//                }
//                name.add(mystr[i]);
//            }
//            root = dict1.RemoveAliasName(name,root);
//        }
//        if(mystr[0]=='P'){
//            dtring name ;
//            for (int i = 14; i <200 ; ++i) {
//                if(mystr[i]=='\000'){
//                    break;
//                }
//                name.add(mystr[i]);
//            }
//            root = dict1.Search(name,root);
//            printall(root->gene);
//        }
//    }*/
//    /*while (true) {
//        string command;
//        cin >> command;
//        //cout << command;
//        if (command == "AddGene") {
//            int x1, x2;
//            string name;
//            dtring name1;
//            cin >> name >> x1 >> x2;
//            cout<<name<<x1<<x2;
//            for (char c : name) {
//                name1.add(c);
//            }
//            root = dict1.Insert(x1, x2, name1, root);
//
//        } else if (command == "AddGeneAlias") {
//            string name1, name2;
//            cin >> name1 >> name2;
//            dtring dname1;
//            dtring dname2;
//            for (char c : name1) {
//                dname1.add(c);
//            }
//            for (char c : name2) {
//                dname2.add(c);
//            }
//            root = dict1.AddGeneAlias(dname1, dname2, root);
//        } else if (command == "RemoveAlias") {
//            string name;
//            cin >> name;
//            dtring name1;
//            for (char c : name) {
//                name1.add(c);
//            }
//            root = dict1.RemoveAliasName(name1, root);
//        } else if (command == "PrintGeneInfo") {
//            string name;
//            cin >> name;
//            dtring name1;
//            for (char c : name) {
//                name1.add(c);
//            }
//
//            if(dict1.Search(name1, root) == nullptr){
//                cout<<"notFOunded";
//            } else{
//                root=dict1.Search(name1, root);
//                printall(root->gene);
//            }
//
//        } else {
//            cout << "Invalid Command . Please Enter The Correct Command " << endl;
//        }
//        cout << "Please Enter the Commands with its argument : (AddGene,AddGeneAlias,RemoveAlias,PrintGeneInfo,Quit)"
//             << endl;
//    }*/
//    dtring dtring1;
//    string string1="Amir";
//    for(char c : string1){
//       /* if(c=='\0') {
//            break;
//        }*/
//        dtring1.add(c);
//    }
//    dtring dtring2;
//    string string2 = "Danial";
//    for(char c : string2){
//      /*  if(c=='\0') {
//            break;
//        }*/
//        dtring2.add(c);
//    }
//    dtring dtring3;
//    string string3 ="Kamali";
//    for(char c : string3){
//     /*   if(c=='\0') {
//            break;
//        }*/
//        dtring3.add(c);
//    }
//
//    root = dict1.Insert(2,4,dtring2,root);
//    root = dict1.Insert(1,5,dtring1,root);
//    root = dict1.AddGeneAlias(dtring1,dtring3,root);
//    root=dict1.Splay(dtring2,root);
//    printall(root->gene);
// //   cout<<temp.size();
////
////    cout << '\n'<<"done" ;
//}
#include "iostream"
#include "list"
using namespace std;

struct Charnode{
    Charnode(){}
    Charnode(char s){
        data=s;
    }
    Charnode*next= nullptr;
    char data;
};
class Charlist{

public:
    Charnode* root;
    Charlist(){}
    Charlist(string name){
        root = new Charnode();
        Charnode* temp = root;
        for (char c :name) {
            temp->next= new Charnode(c);
            temp=temp->next;
        }
    }
    static int lenght(Charlist *s) {
        Charnode * temp  = s->root;
        int i = 0;
        while (temp){
            i++;
            temp=temp->next;
        }
        return i-1;
    }
    bool isequal (Charlist *s) {
        int len1=0;
        int len2=0;
        Charnode *it1 = this->root;
        Charnode *it2 = s->root;

        Charnode * temp  = it1;
        int i = 0;
        while (temp){
            i++;
            temp=temp->next;
        }
        len1=i;
        temp  = it2;
        i = 0;
        while (temp){
            i++;
            temp=temp->next;
        }
        len2=i;
        if(len1 !=len2){
            return false ;
        }
        for (int i = 0; i < len1; i++) {
            if (it1->data!=it2->data) {
                //cout<<i<<'\n';
                return false;
            } else {
                it1 = it1->next;
                it2 = it2->next;
            }

        }
        return true;
    }
    bool isbigger(Charlist *s){
        Charnode*it1=this->root;
        Charnode*it2 = s->root;
        while (it1!= nullptr && it2!= nullptr){
            if(it1->data==it2->data){
                it1=it1->next;
                it2=it2->next;
            } else{
                if (it1->data>it2->data){
                    return true;
                } else{
                    return false;
                }
            }
        }
        if(lenght(this)>lenght(s)){
            return true;
        } else{
            return false;
        }
    }
};
struct Namenode{
    Namenode(){}
    Namenode(string ss){
        name=new Charlist(ss);
    }
    Charlist* name;
    Namenode*next;
};
class NameList{
public:
    Namenode* root;
    NameList(){}
    NameList(string name1) {
        root = new Namenode(name1);
    }
    void insert(Charlist* name1){
        Namenode* temp=root ;
        if(!root){
            root=new Namenode();
            root->name=name1;
            return;
        }
        while (temp->next!= nullptr){
            temp=temp->next;
        }
        temp->next=new Namenode();
        temp->next->name=name1;
        return;
    }
    bool contain(Charlist* data){
        Charlist *temp = data;
        Namenode *it = root;
        while (it){
            if(it->name->isequal(temp)){
                return true;
            }
            it=it->next;
        }
        return false;
    }
    int size(){
        int i =0;
        Namenode* temp=root;
        while (temp){
            i++;
            temp=temp->next;
        }
        return i;
    }
    void remove(Charlist* name1){
        Namenode* namenode = new Namenode();
        namenode->name=name1;
        Namenode* temp=root;
        if(temp->name==namenode->name){
            temp=temp->next;
            return;
        }
        while (temp){
            if(temp->name=namenode->name){
                delete temp->next;
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }

    }
};
struct Gene{
    int x1,x2;
    list<Gene*>Connected;
    NameList Names;
};
struct dictNode{
    Charlist* name;
    Gene * gene;
    dictNode *leftChild;
    dictNode * rightChild ;
};
class dict {
public:
    list<Gene*> Genes;
    dictNode * root = new dictNode();
    dictNode* Rotate_to_l(dictNode *dictNode1) {
        dictNode* temp = dictNode1->rightChild;
        dictNode1->rightChild = temp->leftChild;
        temp->leftChild = dictNode1;
        return temp;
    }
    dictNode* Rotata_to_r(dictNode *dictNode1){
        dictNode* temp = dictNode1->leftChild;
        dictNode1->leftChild = temp->rightChild;
        temp->rightChild = dictNode1;
        return temp;
    }
    dictNode* Splay(Charlist *key, dictNode* root) {
        if (!root) {
            return NULL;
        }
        dictNode header;
        header.leftChild = header.rightChild = NULL;
        dictNode* LeftTreeMax = &header;
        dictNode* RightTreeMin = &header;
        //key.print();
        //  root->name.print();
        while (1) {
            if((root->name->isbigger(key))){
                if (!root->leftChild) {
                    break;
                }
                if (root->leftChild->name->isbigger(key))
                {
                    root = Rotata_to_r(root);
                    // only zig-zig mode need to rotate once,
                    if (!root->leftChild)
                        break;
                }
                if(!(root->leftChild->name->isbigger(key))) {
                    root = Rotata_to_r(root);
                    if(!root->leftChild){
                        break;
                    }
                }
                RightTreeMin->leftChild = root;
                RightTreeMin = RightTreeMin->leftChild;
                root = root->leftChild;
                RightTreeMin->leftChild = NULL;

            }
            else if (key->isbigger(root->name)) {
                if (!root->rightChild)
                    break;
                if (key->isbigger(root->rightChild->name)) {
                    root = Rotate_to_l(root);
                    if (!root->rightChild)
                        break;
                }
                LeftTreeMax->rightChild = root;
                LeftTreeMax = LeftTreeMax->rightChild;
                root = root->rightChild;
                LeftTreeMax->rightChild = NULL;
            }
            else
                break;
        }
        LeftTreeMax->rightChild = root->leftChild;
        RightTreeMin->leftChild = root->rightChild;
        root->leftChild = header.rightChild;
        root->rightChild = header.leftChild;
        return root;
    }
    dictNode* New_Node(Charlist *key) {
        dictNode* p_node = new dictNode();
        p_node->name = key;
        p_node->leftChild = p_node->rightChild = NULL;
        return p_node;
    }
    dictNode* Insert(int x1,int x2,Charlist *key, dictNode* root) {
        dictNode* tempnode = new dictNode();
        tempnode->leftChild=tempnode->rightChild= nullptr;
        tempnode->name=key;
        for(Gene *G :Genes){
            if(G->x1==x1 && G->x2==x2){
                tempnode->gene=G;
                tempnode->gene->Names.insert(key);
            }
        }
        if(!tempnode->gene){
            tempnode->gene=new Gene();
            tempnode->gene->x1=x1;
            tempnode->gene->x2=x2;
            tempnode->gene->Names.insert(key);
            Genes.push_back(tempnode->gene);
        }

        if (!root) {
            root = tempnode;
            tempnode = NULL;
            return root;
        }
        root = Splay(key, root);
        /* This is BST that, all keys <= root->key is in root->lchild, all keys >
        root->key is in root->rchild. */
        if(root->name->isequal(key)){
            cout<<"Duplicate Name Inserted";
            return root;
        }
        if (root->name->isbigger(key)) {
            tempnode->leftChild = root->leftChild;
            tempnode->rightChild = root;
            root->leftChild= NULL;
            root = tempnode;
        }
        else if (key ->isbigger(root->name)) {
            tempnode->rightChild = root->rightChild;
            tempnode->leftChild = root;
            root->rightChild = NULL;
            root = tempnode;
        }
        else {
            root->gene->Names.insert(key);
            root->gene->x1 = x1;
            root->gene->x2 = x2;
            return root;
        }
        tempnode = NULL;
        // cout<<"Duplicate Name Inserted";
        return root;

    }
    dictNode* Delete(Charlist *key, dictNode* root) {
        dictNode* temp;
        if (!root) {
            return NULL;
        }
        root = Splay(key, root);

        if (!key->isequal(root->name)) {
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
    dictNode* Search(Charlist *key,dictNode* root) {
        return Splay(key, root);
    }
    dictNode * AddGeneAlias(Charlist *name1 ,Charlist *name2,dictNode * root){
        root = Search(name1,root);
        root = Insert(root->gene->x1,root->gene->x2,name2,root);
        return root;

    }
    dictNode * RemoveAliasName(Charlist *name2 ,dictNode *root){
        return Delete(name2,root);


    }

    void connect (Gene* A ,Gene  *B ){

        A->Connected.push_front(B);
        //   B->ConnectedNodes.push_front(A);
        cout << A->Connected.front()->Names.size();
    }
    void disConnect (Gene *A , Gene *B){
        A->Connected.remove(B);
        cout << A->Connected.front()->Names.size();

    }
    dictNode* regulate(Charlist *A,Charlist *B , dictNode * root){
        root = Splay(A,root);
        dictNode*temp = root;
        root = Splay(B,root);
        connect(temp->gene,root->gene);
        return root;
    }
    dictNode* donateRegulate(Charlist *A , Charlist *B ,dictNode *root){
        root = Splay(A,root);
        dictNode*temp = root;
        root = Splay(B,root);
        disConnect(temp->gene,root->gene);
        return root;
   //     disConnect(Splay(A,root)->gene,Splay(B,root)->gene);
    }
};

class GeneGraph{

public:
    list<dictNode*> GeneList ;
    dict dict1;
    void connect (Gene* A ,Gene  *B ){
        A->Connected.push_front(B);
        //   B->ConnectedNodes.push_front(A);
    }
    void disConnect (Gene *A , Gene *B){
        A->Connected.remove(B);
    }
    dictNode *regulate(Charlist *A,Charlist *B){
        dictNode* temp;
        temp = dict1.Search(A,dict1.root);
        Gene * gene1 =temp->gene;
        temp = dict1.Search(B,dict1.root);
        Gene * gene2 = temp->gene;
        connect(gene1,gene2);
        return temp;
    }

};

int main(){
    dictNode *root = NULL;
    dict *dict1= new dict();
    Charlist *charlist1 = new Charlist("Arman");
    Charlist *charlist2 = new Charlist("Danial");
    Charlist *charlist3 = new Charlist("Amir");
    root = dict1->Insert(5,8,charlist1,root);
    root = dict1->Insert(41,15,charlist2,root);
    root = dict1->AddGeneAlias(charlist1,charlist3,root);
    //root = dict1->Splay(charlist1,root);
//    root = dict1->Search(charlist1,root);
//    root = dict1->Search(charlist2,root);

    /*
    root = dict1->AddGeneAlias(new Charlist("Danial"),new Charlist("Kamali"),root);
    root = dict1->RemoveAliasName(new Charlist("Kamali"),root);
    */
//    GeneGraph geneGraph ;
//    dict1->regulate(charlist1,charlist2,root);
//    geneGraph.regulate(charlist1,charlist2);
//    root =dict1->Splay(charlist1,root);
//    Gene * gene1 =root->gene ;
//    root= dict1->Splay(charlist2,root);
//    Gene * gene2 =root->gene;
//    root = dict1->Splay(charlist3,root);
//    Gene * gene3 =root->gene;
//    dict1->connect(gene1,gene2);
//    dict1->connect(gene1,gene3);
    root = dict1->regulate(charlist1,charlist2,root);
    root = dict1->regulate(charlist1,charlist3,root);
    root = dict1->donateRegulate(charlist1,charlist3,root);

    return 0;
}