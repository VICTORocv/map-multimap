//
//  main.cpp
//  map&multimap
//
//  Created by 郭悟清 on 2017/6/7.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    typedef multimap<int, double, less<int>> mmid;
    mmid pairs;
    cout<<"1)"<<pairs.count(15)<<endl; //查找key为15的
    pairs.insert(mmid::value_type(15,2.7));
    pairs.insert(mmid::value_type(20,99.3));
    cout<<"2)"<<pairs.count(15)<<endl;
    pairs.insert(mmid::value_type(30,11.1));
    for(mmid::const_iterator i=pairs.begin();i!=pairs.end();i++)
    {
        cout<<"("<<i->first<<","<<i->second<<")"<<",";
    }
    return 0;
}
