#ifndef PRINT_VECTOR_HPP
#define PRINT_VECTOR_HPP

#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>

using namespace std;

void printVector2D(vector<vector<int>> edges){
	cout<<"Original Graph: "<<endl;
	for(int i=0; i<edges.size(); i++){
		for(int j=0; j<edges[i].size(); j++){
			cout<<edges[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

#endif