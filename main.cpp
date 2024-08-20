#include "solutionSeven.hpp"
#include "printVector.hpp"

int main(){

	int n=6;
	vector<vector<int>> edges={{0,1},{0,2},{1,2},{3,4}};
	SolutionSeven solution7;
	int output=solution7.countCompleteComponents(n,edges);
	printVector2D(edges);
	cout<<"answer: "<<endl;
	cout<<output<<endl;

	return 0;
}