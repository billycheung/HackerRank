#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

struct fileList{
    int highestIndex = 0;
    set<int> deletedIndexs;
};

string create(unordered_map<string, fileList*> &fl, string name){
    if (fl.find(name) == fl.end()){
        fl[name] = new fileList();
        return name;
    } else {
        auto tmpFl = fl[name];
        int c;
        auto& deleteds = tmpFl->deletedIndexs;
        if (!deleteds.empty()){
            c = *deleteds.begin();
            deleteds.erase(c);
            if (c == 0) return name;
        } else {
            c = ++tmpFl->highestIndex;
        }
        return name + "(" + to_string(c) + ")";
    }
}

void deleteFile(unordered_map<string, fileList*> &fl, string name){
     auto first = name.find("(");
    int dIndex;
    fileList* tmpFl;
    if (first == string::npos){
        dIndex = 0;
        tmpFl = fl[name];
    } else {
        auto last = name.find(")");
        auto numStr = name.substr(first+1, last-(first+1));
        dIndex = stoi(numStr);
        auto fileName = name.substr(0,first);
        tmpFl = fl[fileName];
    }
     auto& deleteds = tmpFl->deletedIndexs;
     deleteds.insert(dIndex);     
}

int main() {
    int n, tmp;
    cin >> n;
    string q, name;
    unordered_map<string, fileList*> fl;
    for (int i=0;i<n;i++){
        cin >> q;
        cin >> name;
        if (q == "crt"){
            string createdName = create(fl, name);
            printf("+ %s\n", createdName.c_str());
        } else if (q == "del"){
            deleteFile(fl, name);
            printf("- %s\n", name.c_str());
        } else{
            string newName;
            cin >> newName;
            deleteFile(fl, name);
            string createdName = create(fl, newName);
            printf("r %s -> %s\n", name.c_str(), createdName.c_str());
        }
    }
    return 0;
}
